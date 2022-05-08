--- ./src/legacy/i810/i810_xaa.c~	2018-12-03 11:01:25.000000000 +0200
+++ ./src/legacy/i810/i810_xaa.c	2022-05-09 01:38:58.223685000 +0200
@@ -41,6 +41,9 @@
 #include "xaarop.h"
 #include "i810.h"
 
+const int I810PatternROP[16];
+
+
 static void
 I810SetupForMono8x8PatternFill(ScrnInfoPtr pScrn, int pattx, int patty,
 			       int fg, int bg, int rop,
