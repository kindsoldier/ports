--- ./art_misc.h.orig	2009-04-18 15:29:25.000000000 +0300
+++ ./art_misc.h	2014-12-27 03:00:42.000000000 +0200
@@ -93,6 +93,11 @@
 void
 art_dprint (const char *fmt, ...) ART_GNUC_PRINTF (1, 2);
 
+void *art_alloc(size_t size);
+void art_free(void *ptr);
+void *art_realloc(void *ptr, size_t size);
+
+
 #ifdef __cplusplus
 }
 #endif
