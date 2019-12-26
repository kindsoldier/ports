--- ./pixman/pixman-private.h.orig	2014-07-05 03:50:35.000000000 +0300
+++ ./pixman/pixman-private.h	2014-11-29 15:23:49.000000000 +0200
@@ -1,5 +1,3 @@
-#include <float.h>
-
 #ifndef PIXMAN_PRIVATE_H
 #define PIXMAN_PRIVATE_H
 
@@ -30,6 +28,7 @@
 #include <stdio.h>
 #include <string.h>
 #include <stddef.h>
+#include <float.h>
 
 #include "pixman-compiler.h"
 
