--- ./modules/gzip-method.c.orig	2010-02-09 14:16:14.000000000 +0200
+++ ./modules/gzip-method.c	2015-01-05 21:19:08.000000000 +0200
@@ -30,6 +30,7 @@
 #include <stdio.h>
 #include <string.h>
 #include <time.h>
+#undef _LARGEFILE64_SOURCE
 #include <zlib.h>
 
 struct _GZipMethodHandle {
