--- ./lib/gif_lib.h.orig	2013-09-03 16:46:28.000000000 +0300
+++ ./lib/gif_lib.h	2014-12-27 22:16:49.000000000 +0200
@@ -180,6 +180,15 @@
 #define D_GIF_ERR_IMAGE_DEFECT   112
 #define D_GIF_ERR_EOF_TOO_SOON   113
 
+/******************************************************************************
+ * O.K., here are the routines from GIF_LIB file QUANTIZE.C.              
+******************************************************************************/
+int QuantizeBuffer(unsigned int Width, unsigned int Height,
+                   int *ColorMapSize, GifByteType * RedInput,
+                   GifByteType * GreenInput, GifByteType * BlueInput,
+                   GifByteType * OutputBuffer,
+                   GifColorType * OutputColorMap);
+
 /* These are legacy.  You probably do not want to call them directly */
 int DGifGetScreenDesc(GifFileType * GifFile);
 int DGifGetRecordType(GifFileType * GifFile, GifRecordType * GifType);
