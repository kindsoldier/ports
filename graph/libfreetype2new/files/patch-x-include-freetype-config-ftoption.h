--- ./include/freetype/config/ftoption.h~	2022-01-27 09:43:19.000000000 +0200
+++ ./include/freetype/config/ftoption.h	2023-03-25 12:32:46.321565000 +0200
@@ -706,7 +706,7 @@
    * https://www.microsoft.com/typography/cleartype/truetypecleartype.aspx
    */
 /* #define TT_CONFIG_OPTION_SUBPIXEL_HINTING  1         */
-#define TT_CONFIG_OPTION_SUBPIXEL_HINTING  2
+#define TT_CONFIG_OPTION_SUBPIXEL_HINTING  1
 /* #define TT_CONFIG_OPTION_SUBPIXEL_HINTING  ( 1 | 2 ) */
 
 
@@ -868,7 +868,7 @@
    * between the two engines using the `hinting-engine` property of the 'cff'
    * driver module.
    */
-/* #define CFF_CONFIG_OPTION_OLD_ENGINE */
+#define CFF_CONFIG_OPTION_OLD_ENGINE
 
 
   /*************************************************************************/
@@ -946,7 +946,7 @@
    *
    * This problematic commit is now reverted (more or less).
    */
-/* #define AF_CONFIG_OPTION_TT_SIZE_METRICS */
+#define AF_CONFIG_OPTION_TT_SIZE_METRICS
 
   /* */
 
