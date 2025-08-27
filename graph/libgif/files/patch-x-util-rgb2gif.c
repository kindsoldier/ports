--- ./util/rgb2gif.c.orig	2013-09-03 16:41:31.000000000 +0300
+++ ./util/rgb2gif.c	2014-12-27 22:16:49.000000000 +0200
@@ -129,7 +129,7 @@
  *   This function returns GIF_OK if succesfull, GIF_ERROR otherwise.
  ******************************************************************************/
 static int
-QuantizeBuffer(unsigned int Width,
+GifQuantizeBuffer(unsigned int Width,
                unsigned int Height,
                int *ColorMapSize,
                GifByteType * RedInput,
@@ -428,7 +428,7 @@
 					    sizeof(GifByteType))) == NULL)
 	GIF_EXIT("Failed to allocate memory required, aborted.");
 
-    if (QuantizeBuffer(Width, Height, &ColorMapSize,
+    if (GifQuantizeBuffer(Width, Height, &ColorMapSize,
 		       RedBuffer, GreenBuffer, BlueBuffer,
 		       OutputBuffer, OutputColorMap->Colors) == GIF_ERROR)
 	QuitGifError(NULL);
