--- ./grub-core/fs/zfs/zfsinfo.c.orig	2012-03-03 13:54:34.000000000 +0300
+++ ./grub-core/fs/zfs/zfsinfo.c	2015-10-14 15:40:30.958202000 +0200
@@ -132,21 +132,31 @@
       grub_free (path);
       return GRUB_ERR_NONE;
     }
+  char is_mirror=(grub_strcmp(type,VDEV_TYPE_MIRROR) == 0);
+  char is_raidz=(grub_strcmp(type,VDEV_TYPE_RAIDZ) == 0);
 
-  if (grub_strcmp (type, VDEV_TYPE_MIRROR) == 0)
+  if (is_mirror || is_raidz)
     {
       int nelm, i;
 
       nelm = grub_zfs_nvlist_lookup_nvlist_array_get_nelm
 	(nvlist, ZPOOL_CONFIG_CHILDREN);
 
+      if(is_mirror){
+	 grub_puts_ (N_("This VDEV is a mirror"));
+      }
+      else if(is_raidz){
+	 grub_uint64_t parity;
+	 grub_zfs_nvlist_lookup_uint64(nvlist,"nparity",&parity);
+	 grub_printf_ (N_("This VDEV is a RAIDZ%llu\n"),(unsigned long long)parity);
+      }
       print_tabs (tab);
       if (nelm <= 0)
 	{
-	  grub_puts_ (N_("Incorrect mirror"));
+	  grub_puts_ (N_("Incorrect VDEV"));
 	  return GRUB_ERR_NONE;
 	}
-      grub_printf_ (N_("Mirror with %d children\n"), nelm);
+      grub_printf_ (N_("VDEV with %d children\n"), nelm);
       print_state (nvlist, tab);
       for (i = 0; i < nelm; i++)
 	{
@@ -162,14 +172,14 @@
 		 total element number. And the number itself is fine,
 		 only the element isn't.
 	      */
-	      grub_printf_ (N_("Mirror element number %d isn't correct\n"), i);
+	      grub_printf_ (N_("VDEV element number %d isn't correct\n"), i);
 	      continue;
 	    }
 
 	  /* TRANSLATORS: it's the element carying the number %d, not
 	     total element number. This is used in enumeration
 	     "Element number 1", "Element number 2", ... */
-	  grub_printf_ (N_("Mirror element number %d:\n"), i);
+	  grub_printf_ (N_("VDEV element number %d:\n"), i);
 	  print_vdev_info (child, tab + 1);
 
 	  grub_free (child);
