--- ./include/grub/zfs/dmu.h.orig	2011-11-06 23:17:34.000000000 +0300
+++ ./include/grub/zfs/dmu.h	2015-10-14 15:40:31.006240000 +0200
@@ -22,6 +22,39 @@
 
 #ifndef	_SYS_DMU_H
 #define	_SYS_DMU_H
+#define	B_FALSE	0
+#define	B_TRUE	1
+
+#define	DMU_OT_NEWTYPE 0x80
+#define	DMU_OT_METADATA 0x40
+#define	DMU_OT_BYTESWAP_MASK 0x3f
+
+#define	DMU_OT(byteswap, metadata) \
+	(DMU_OT_NEWTYPE | \
+	((metadata) ? DMU_OT_METADATA : 0) | \
+	((byteswap) & DMU_OT_BYTESWAP_MASK))
+
+#define	DMU_OT_IS_VALID(ot) (((ot) & DMU_OT_NEWTYPE) ? \
+	((ot) & DMU_OT_BYTESWAP_MASK) < DMU_BSWAP_NUMFUNCS : \
+	(ot) < DMU_OT_NUMTYPES)
+
+#define	DMU_OT_IS_METADATA(ot) (((ot) & DMU_OT_NEWTYPE) ? \
+	((ot) & DMU_OT_METADATA) : \
+	dmu_ot[(ot)].ot_metadata)
+
+typedef enum dmu_object_byteswap {
+	DMU_BSWAP_UINT8,
+	DMU_BSWAP_UINT16,
+	DMU_BSWAP_UINT32,
+	DMU_BSWAP_UINT64,
+	DMU_BSWAP_ZAP,
+	DMU_BSWAP_DNODE,
+	DMU_BSWAP_OBJSET,
+	DMU_BSWAP_ZNODE,
+	DMU_BSWAP_OLDACL,
+	DMU_BSWAP_ACL,
+	DMU_BSWAP_NUMFUNCS
+} dmu_object_byteswap_t;
 
 /*
  * This file describes the interface that the DMU provides for its
@@ -89,7 +122,17 @@
 	DMU_OT_SA_ATTR_REGISTRATION,	/* ZAP */
 	DMU_OT_SA_ATTR_LAYOUTS,		/* ZAP */
 	DMU_OT_DSL_KEYCHAIN = 54,
-	DMU_OT_NUMTYPES
+	DMU_OT_NUMTYPES,
+	DMU_OTN_UINT8_DATA = DMU_OT(DMU_BSWAP_UINT8, B_FALSE),
+	DMU_OTN_UINT8_METADATA = DMU_OT(DMU_BSWAP_UINT8, B_TRUE),
+	DMU_OTN_UINT16_DATA = DMU_OT(DMU_BSWAP_UINT16, B_FALSE),
+	DMU_OTN_UINT16_METADATA = DMU_OT(DMU_BSWAP_UINT16, B_TRUE),
+	DMU_OTN_UINT32_DATA = DMU_OT(DMU_BSWAP_UINT32, B_FALSE),
+	DMU_OTN_UINT32_METADATA = DMU_OT(DMU_BSWAP_UINT32, B_TRUE),
+	DMU_OTN_UINT64_DATA = DMU_OT(DMU_BSWAP_UINT64, B_FALSE),
+	DMU_OTN_UINT64_METADATA = DMU_OT(DMU_BSWAP_UINT64, B_TRUE),
+	DMU_OTN_ZAP_DATA = DMU_OT(DMU_BSWAP_ZAP, B_FALSE),
+	DMU_OTN_ZAP_METADATA = DMU_OT(DMU_BSWAP_ZAP, B_TRUE),
 } dmu_object_type_t;
 
 typedef enum dmu_objset_type {
@@ -116,5 +159,6 @@
 #define	DMU_POOL_HISTORY		"history"
 #define	DMU_POOL_PROPS			"pool_props"
 #define	DMU_POOL_L2CACHE		"l2cache"
+#define	DMU_POOL_FEATURES_FOR_READ	"features_for_read"
 
 #endif	/* _SYS_DMU_H */
