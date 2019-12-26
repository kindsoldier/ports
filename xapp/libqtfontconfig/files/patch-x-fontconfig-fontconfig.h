--- ./fontconfig/fontconfig.h.orig	2017-09-21 10:06:17.000000000 +0200
+++ ./fontconfig/fontconfig.h	2019-04-02 12:50:08.444499000 +0200
@@ -124,9 +124,9 @@
 #define FC_HASH		    "hash"		/* String (deprecated) */
 #define FC_POSTSCRIPT_NAME  "postscriptname"	/* String */
 
-#define FC_CACHE_SUFFIX		    ".cache-" FC_CACHE_VERSION
-#define FC_DIR_CACHE_FILE	    "fonts.cache-" FC_CACHE_VERSION
-#define FC_USER_CACHE_FILE	    ".fonts.cache-" FC_CACHE_VERSION
+#define FC_CACHE_SUFFIX		    ".qtcache-" FC_CACHE_VERSION
+#define FC_DIR_CACHE_FILE	    "qtfonts.cache-" FC_CACHE_VERSION
+#define FC_USER_CACHE_FILE	    ".qtfonts.cache-" FC_CACHE_VERSION
 
 /* Adjust outline rasterizer */
 #define FC_CHARWIDTH	    "charwidth"	/* Int */
