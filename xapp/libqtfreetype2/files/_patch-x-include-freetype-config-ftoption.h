--- ./include/freetype/config/ftoption.h.orig	2016-12-11 08:53:49.000000000 +0200
+++ ./include/freetype/config/ftoption.h	2017-05-03 15:31:22.111100000 +0200
@@ -122,7 +122,7 @@
   /* This is done to allow FreeType clients to run unmodified, forcing     */
   /* them to display normal gray-level anti-aliased glyphs.                */
   /*                                                                       */
-/* #define FT_CONFIG_OPTION_SUBPIXEL_RENDERING */
+ #define FT_CONFIG_OPTION_SUBPIXEL_RENDERING 1
 
 
   /*************************************************************************/
