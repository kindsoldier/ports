--- ./art_misc.c.orig	2009-04-18 15:29:25.000000000 +0300
+++ ./art_misc.c	2014-12-27 03:00:42.000000000 +0200
@@ -28,6 +28,24 @@
 #include <stdio.h>
 #include <stdarg.h>
 
+
+
+void *art_alloc(size_t size)
+{
+  return malloc(size);
+}
+
+void art_free(void *ptr)
+{
+  free(ptr);
+}
+
+void *art_realloc(void *ptr, size_t size)
+{
+  return realloc(ptr, size);
+}
+
+
 /**
  * art_die: Print the error message to stderr and exit with a return code of 1.
  * @fmt: The printf-style format for the error message.
@@ -76,18 +94,3 @@
   vfprintf (stderr, fmt, ap);
   va_end (ap);
 }
-
-void *art_alloc(size_t size)
-{
-  return malloc(size);
-}
-
-void art_free(void *ptr)
-{
-  free(ptr);
-}
-
-void *art_realloc(void *ptr, size_t size)
-{
-  return realloc(ptr, size);
-}
