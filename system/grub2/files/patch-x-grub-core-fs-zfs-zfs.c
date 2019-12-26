--- ./grub-core/fs/zfs/zfs.c.orig	2012-05-16 17:41:06.000000000 +0300
+++ ./grub-core/fs/zfs/zfs.c	2015-10-14 15:40:30.937212000 +0200
@@ -2,6 +2,7 @@
  *  GRUB  --  GRand Unified Bootloader
  *  Copyright (C) 1999,2000,2001,2002,2003,2004,2009,2010,2011  Free Software Foundation, Inc.
  *  Copyright 2010  Sun Microsystems, Inc.
+ *  Copyright (c) 2012 by Delphix. All rights reserved.
  *
  *  GRUB is free software; you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
@@ -153,11 +154,13 @@
 
 
 /*
- * Decompression Entry - lzjb
+ * Decompression Entry - lzjb & lz4
  */
 
 extern grub_err_t lzjb_decompress (void *, void *, grub_size_t, grub_size_t);
 
+extern grub_err_t lz4_decompress (void *, void *, grub_size_t, grub_size_t);
+
 typedef grub_err_t zfs_decomp_func_t (void *s_start, void *d_start,
 				      grub_size_t s_len, grub_size_t d_len);
 typedef struct decomp_entry
@@ -263,6 +266,19 @@
 						  grub_size_t keysize,
 						  grub_uint64_t salt,
 						  grub_uint64_t algo) = NULL;
+/*
+ * List of pool features that the grub implementation of ZFS supports for
+ * read. Note that features that are only required for write do not need
+ * to be listed here since grub opens pools in read-only mode.
+ */
+static const char *spa_feature_names[] = {
+	"org.illumos:lz4_compress",NULL
+};
+
+static int NESTED_FUNC_ATTR
+check_feature(const char *name, grub_uint64_t val);
+static int
+check_mos_features(dnode_phys_t *mosmdn_phys,grub_zfs_endian_t endian,struct grub_zfs_data* data );
 
 static grub_err_t 
 zlib_decompress (void *s, void *d,
@@ -322,6 +338,7 @@
   {"gzip-8", zlib_decompress},  /* ZIO_COMPRESS_GZIP8 */
   {"gzip-9", zlib_decompress},  /* ZIO_COMPRESS_GZIP9 */
   {"zle", zle_decompress},      /* ZIO_COMPRESS_ZLE   */
+  {"lz4", lz4_decompress},      /* ZIO_COMPRESS_LZ4   */
 };
 
 static grub_err_t zio_read_data (blkptr_t * bp, grub_zfs_endian_t endian,
@@ -482,15 +499,11 @@
 
   if (grub_zfs_to_cpu64 (uber->ub_magic, GRUB_ZFS_LITTLE_ENDIAN)
       == UBERBLOCK_MAGIC
-      && grub_zfs_to_cpu64 (uber->ub_version, GRUB_ZFS_LITTLE_ENDIAN) > 0 
-      && grub_zfs_to_cpu64 (uber->ub_version, GRUB_ZFS_LITTLE_ENDIAN)
-      <= SPA_VERSION)
+      && SPA_VERSION_IS_SUPPORTED(grub_zfs_to_cpu64 (uber->ub_version, GRUB_ZFS_LITTLE_ENDIAN)))
     endian = GRUB_ZFS_LITTLE_ENDIAN;
 
   if (grub_zfs_to_cpu64 (uber->ub_magic, GRUB_ZFS_BIG_ENDIAN) == UBERBLOCK_MAGIC
-      && grub_zfs_to_cpu64 (uber->ub_version, GRUB_ZFS_BIG_ENDIAN) > 0 
-      && grub_zfs_to_cpu64 (uber->ub_version, GRUB_ZFS_BIG_ENDIAN)
-      <= SPA_VERSION)
+      && SPA_VERSION_IS_SUPPORTED(grub_zfs_to_cpu64 (uber->ub_version, GRUB_ZFS_BIG_ENDIAN)))
     endian = GRUB_ZFS_BIG_ENDIAN;
 
   if (endian == GRUB_ZFS_UNKNOWN_ENDIAN)
@@ -764,6 +777,99 @@
 }
 
 /*
+ * For a given XDR packed nvlist, verify the first 4 bytes and move on.
+ *
+ * An XDR packed nvlist is encoded as (comments from nvs_xdr_create) :
+ *
+ *      encoding method/host endian     (4 bytes)
+ *      nvl_version                     (4 bytes)
+ *      nvl_nvflag                      (4 bytes)
+ *	encoded nvpairs:
+ *		encoded size of the nvpair      (4 bytes)
+ *		decoded size of the nvpair      (4 bytes)
+ *		name string size                (4 bytes)
+ *		name string data                (sizeof(NV_ALIGN4(string))
+ *		data type                       (4 bytes)
+ *		# of elements in the nvpair     (4 bytes)
+ *		data
+ *      2 zero's for the last nvpair
+ *		(end of the entire list)	(8 bytes)
+ *
+ */
+
+/*
+ * The nvlist_next_nvpair() function returns a handle to the next nvpair in the
+ * list following nvpair. If nvpair is NULL, the first pair is returned. If
+ * nvpair is the last pair in the nvlist, NULL is returned.
+ */
+static const char *
+nvlist_next_nvpair(const char *nvl, const char *nvpair)
+{
+	const char *nvp;
+	int encode_size;
+	int name_len;
+	if (nvl == NULL)
+		return (NULL);
+
+	if (nvpair == NULL) {
+		/* skip over header, nvl_version and nvl_nvflag */
+		nvpair = nvl + 4 * 3;
+	} else {
+		/* skip to the next nvpair */
+		encode_size = grub_be_to_cpu32 (grub_get_unaligned32(nvpair));
+		nvpair += encode_size;
+	}
+	/* 8 bytes of 0 marks the end of the list */
+	if (*(grub_uint64_t*)nvpair == 0)
+		return (NULL);
+	/*consistency checks*/
+	if (nvpair + 4 * 3 >= nvl + VDEV_PHYS_SIZE)
+	{
+	  grub_dprintf ("zfs", "nvlist overflow\n");
+	  grub_error (GRUB_ERR_BAD_FS, "incorrect nvlist");
+	  return (NULL);
+	}
+	encode_size = grub_be_to_cpu32 (grub_get_unaligned32(nvpair));
+
+	nvp = nvpair + 4*2;
+	name_len = grub_be_to_cpu32 (grub_get_unaligned32 (nvp));
+	nvp += 4;
+
+	nvp = nvp + ((name_len + 3) & ~3); // align 
+	if (nvp + 4 >= nvl + VDEV_PHYS_SIZE                        
+	    || encode_size < 0
+	    || nvp + 4 + encode_size > nvl + VDEV_PHYS_SIZE)       
+	{
+	  grub_dprintf ("zfs", "nvlist overflow\n");
+	  grub_error (GRUB_ERR_BAD_FS, "incorrect nvlist");
+	  return (NULL);
+	}
+	 /* end consistency checks */
+
+	return (nvpair);
+}
+/*
+ * This function returns 0 on success and 1 on failure. On success, a string
+ * containing the name of nvpair is saved in buf.
+ */
+static int
+nvpair_name(const char *nvp, char **buf, int* buflen)
+{
+	int len;
+
+	/* skip over encode/decode size */
+	nvp += 4 * 2;
+
+	len = grub_be_to_cpu32 (grub_get_unaligned32 (nvp));
+	nvp=nvp+4;
+	
+	*buf=(char*)nvp;
+	*buflen=len;
+
+	return (0);
+}
+
+/*
  * Check the disk label information and retrieve needed vdev name-value pairs.
  *
  */
@@ -773,7 +879,7 @@
 		  int *inserted)
 {
   grub_uint64_t pool_state, txg = 0;
-  char *nvlist;
+  char *nvlist,*features;
 #if 0
   char *nv;
 #endif
@@ -837,13 +943,13 @@
     }
   grub_dprintf ("zfs", "check 8 passed\n");
 
-  if (version > SPA_VERSION)
+  if (!SPA_VERSION_IS_SUPPORTED(version))
     {
       grub_free (nvlist);
       return grub_error (GRUB_ERR_NOT_IMPLEMENTED_YET,
 			 "too new version %llu > %llu",
 			 (unsigned long long) version,
-			 (unsigned long long) SPA_VERSION);
+			 (unsigned long long) SPA_VERSION_BEFORE_FEATURES);
     }
   grub_dprintf ("zfs", "check 9 passed\n");
 
@@ -893,7 +999,30 @@
     grub_free (nv);
   }
   grub_dprintf ("zfs", "check 10 passed\n");
-
+  if ((features=grub_zfs_nvlist_lookup_nvlist(nvlist, ZPOOL_CONFIG_FEATURES_FOR_READ)))
+  {
+    const char *nvp=NULL;
+    char *name = grub_zalloc(51);
+    char *nameptr;
+    int namelen;
+    while ((nvp = nvlist_next_nvpair(features, nvp)) != NULL)
+    {
+      nvpair_name(nvp, &nameptr,&namelen);
+      if(namelen > 50){namelen=50;}
+      grub_strncpy(name,nameptr,namelen);
+      name[namelen]=0;
+      grub_dprintf("zfs","namelen=%u str=%s\n",namelen,name);
+      if (check_feature(name,1) != 0)
+      {
+	grub_dprintf("zfs","feature missing in check_pool_label:%s\n",name);
+	err= grub_error (GRUB_ERR_NOT_IMPLEMENTED_YET," check_pool_label missing feature '%s' for read",name);
+	grub_free(name);
+	return err;
+      }
+    }
+    grub_free(name);
+  }
+  grub_dprintf ("zfs", "check 12 passed (feature flags)\n");
   grub_free (nvlist);
 
   return GRUB_ERR_NONE;
@@ -3034,27 +3163,6 @@
   return err;
 }
 
-/*
- * For a given XDR packed nvlist, verify the first 4 bytes and move on.
- *
- * An XDR packed nvlist is encoded as (comments from nvs_xdr_create) :
- *
- *      encoding method/host endian     (4 bytes)
- *      nvl_version                     (4 bytes)
- *      nvl_nvflag                      (4 bytes)
- *	encoded nvpairs:
- *		encoded size of the nvpair      (4 bytes)
- *		decoded size of the nvpair      (4 bytes)
- *		name string size                (4 bytes)
- *		name string data                (sizeof(NV_ALIGN4(string))
- *		data type                       (4 bytes)
- *		# of elements in the nvpair     (4 bytes)
- *		data
- *      2 zero's for the last nvpair
- *		(end of the entire list)	(8 bytes)
- *
- */
-
 static int
 nvlist_find_value (const char *nvlist_in, const char *name,
 		   int valtype, char **val,
@@ -3386,6 +3494,10 @@
       return NULL;
     }
 
+    if (ub->ub_version >= SPA_VERSION_FEATURES &&
+	check_mos_features(&((objset_phys_t *) osp)->os_meta_dnode,ub_endian, data) != 0)
+	  return NULL;
+	
   /* Got the MOS. Save it at the memory addr MOS. */
   grub_memmove (&(data->mos.dn), &((objset_phys_t *) osp)->os_meta_dnode,
 		DNODE_SIZE);
@@ -3910,6 +4022,64 @@
   return grub_errno;
 }
 
+static int NESTED_FUNC_ATTR
+check_feature(const char *name, grub_uint64_t val)
+{
+  int i;
+  if(val ==0) return 0;
+  if(*name==0) return 0;
+  for (i = 0; spa_feature_names[i] != NULL; i++) 
+  {
+    if (grub_strcmp(name, spa_feature_names[i]) == 0) 
+        return 0;
+  }
+  grub_printf("missing feature for read '%s'\n",name);
+  return 1;
+}
+
+/*
+ * Checks whether the MOS features that are active are supported by this
+ * (GRUB's) implementation of ZFS.
+ *
+ * Return:
+ *	0: Success.
+ *	errnum: Failure.
+ */
+	    	   
+static int
+check_mos_features(dnode_phys_t *mosmdn_phys,grub_zfs_endian_t endian,struct grub_zfs_data* data )
+{
+  grub_uint64_t objnum;
+  grub_uint8_t errnum = 0;
+  dnode_end_t dn,mosmdn;
+  mzap_phys_t* mzp;
+  grub_zfs_endian_t endianzap;
+  int size;
+  grub_memmove(&(mosmdn.dn),mosmdn_phys,sizeof(dnode_phys_t));
+  mosmdn.endian=endian;
+  if ((errnum = dnode_get(&mosmdn, DMU_POOL_DIRECTORY_OBJECT,
+	  DMU_OT_OBJECT_DIRECTORY, &dn,data)) != 0)
+      return (errnum);
+
+  /*
+   * Find the object number for 'features_for_read' and retrieve its
+   * corresponding dnode. Note that we don't check features_for_write
+   * because GRUB is not opening the pool for write.
+   */
+  if ((errnum = zap_lookup(&dn, DMU_POOL_FEATURES_FOR_READ, &objnum, data,0)) != 0)
+      return (errnum);
+  
+  if ((errnum = dnode_get(&mosmdn, objnum, DMU_OTN_ZAP_METADATA, &dn, data)) != 0)
+      return (errnum);
+
+  if ((errnum = dmu_read(&dn, 0, (void**)&mzp, &endianzap,data)) != 0)
+      return (errnum);
+
+  size = grub_zfs_to_cpu16 (dn.dn.dn_datablkszsec, dn.endian) << SPA_MINBLOCKSHIFT;
+  return (mzap_iterate(mzp,endianzap, size, check_feature));
+}
+
+
 #ifdef GRUB_UTIL
 static grub_err_t
 grub_zfs_embed (grub_device_t device __attribute__ ((unused)),
