--- ./plug-ins/common/unsharp-mask.c.orig	2012-03-12 22:18:10.000000000 +0300
+++ ./plug-ins/common/unsharp-mask.c	2015-10-24 19:31:04.791764000 +0200
@@ -97,8 +97,8 @@
 /* create a few globals, set default values */
 static UnsharpMaskParams unsharp_params =
 {
-  5.0, /* default radius    */
-  0.5, /* default amount    */
+  4.0, /* default radius    */
+  0.25, /* default amount    */
   0    /* default threshold */
 };
 
