--- ./include/freetype/config/ftoption.h.orig	2020-01-19 18:02:27.000000000 +0200
+++ ./include/freetype/config/ftoption.h	2020-10-24 11:02:14.679157000 +0200
@@ -674,8 +674,8 @@
    * https://www.microsoft.com/typography/cleartype/truetypecleartype.aspx
    */
 /* #define TT_CONFIG_OPTION_SUBPIXEL_HINTING  1         */
-#define TT_CONFIG_OPTION_SUBPIXEL_HINTING  2
-/* #define TT_CONFIG_OPTION_SUBPIXEL_HINTING  ( 1 | 2 ) */
+/* #define TT_CONFIG_OPTION_SUBPIXEL_HINTING  2 */
+#define TT_CONFIG_OPTION_SUBPIXEL_HINTING  ( 1 | 2 ) 
 
 
   /**************************************************************************
@@ -932,7 +932,7 @@
    *
    * This problematic commit is now reverted (more or less).
    */
-/* #define AF_CONFIG_OPTION_TT_SIZE_METRICS */
+//#define AF_CONFIG_OPTION_TT_SIZE_METRICS
 
   /* */
 
