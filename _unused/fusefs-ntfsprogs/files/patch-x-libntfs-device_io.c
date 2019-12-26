--- ./libntfs/device_io.c.orig	2007-09-26 21:28:34.000000000 +0300
+++ ./libntfs/device_io.c	2015-10-14 20:03:15.489847000 +0200
@@ -28,11 +28,6 @@
 /* On Cygwin; use Win32 low level device operations. */
 #include "win32_io.c"
 
-#elif defined(__FreeBSD__)
-
-/* On FreeBSD; need to use sector aligned i/o. */
-#include "freebsd_io.c"
-
 #else
 
 /*
