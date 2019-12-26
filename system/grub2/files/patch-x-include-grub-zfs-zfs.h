--- ./include/grub/zfs/zfs.h.orig	2011-11-09 00:42:16.000000000 +0300
+++ ./include/grub/zfs/zfs.h	2015-10-14 15:40:31.016536000 +0200
@@ -36,8 +36,13 @@
 /*
  * On-disk version number.
  */
-#define	SPA_VERSION			33ULL
-
+#define	SPA_VERSION_INITIAL		1ULL
+#define	SPA_VERSION_BEFORE_FEATURES	33ULL
+#define	SPA_VERSION			5000ULL
+#define	SPA_VERSION_FEATURES		5000ULL
+#define	SPA_VERSION_IS_SUPPORTED(v) \
+	(((v) >= SPA_VERSION_INITIAL && (v) <= SPA_VERSION_BEFORE_FEATURES) || \
+	((v) >= SPA_VERSION_FEATURES && (v) <= SPA_VERSION))
 /*
  * The following are configuration names used in the nvlist describing a pool's
  * configuration.
@@ -76,6 +81,7 @@
 #define	ZPOOL_CONFIG_DDT_HISTOGRAM	"ddt_histogram"
 #define	ZPOOL_CONFIG_DDT_OBJ_STATS	"ddt_object_stats"
 #define	ZPOOL_CONFIG_DDT_STATS		"ddt_stats"
+#define	ZPOOL_CONFIG_FEATURES_FOR_READ	"features_for_read"
 /*
  * The persistent vdev state is stored as separate values rather than a single
  * 'vdev_state' entry.  This is because a device can be in multiple states, such
