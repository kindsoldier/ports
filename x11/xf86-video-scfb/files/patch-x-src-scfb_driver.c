--- ./src/scfb_driver.c.orig	2014-07-20 01:22:29.000000000 +0300
+++ ./src/scfb_driver.c	2016-02-09 02:48:03.669390000 +0200
@@ -427,6 +428,9 @@
 		fPtr->info.vi_depth >= 24 ? Support24bppFb|Support32bppFb : 0))
 		return FALSE;
 
+	/* temporary hack */
+	pScrn->bitsPerPixel = fPtr->info.vi_depth;
+
 	/* Check consistency. */
 	if (pScrn->bitsPerPixel != fPtr->info.vi_depth) {
 		xf86DrvMsg(pScrn->scrnIndex, X_ERROR,
