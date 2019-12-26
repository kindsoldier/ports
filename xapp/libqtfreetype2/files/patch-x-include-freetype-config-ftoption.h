--- ./include/freetype/config/ftoption.h.orig	2018-04-22 11:41:36.000000000 +0200
+++ ./include/freetype/config/ftoption.h	2019-03-31 15:14:24.483143000 +0200
@@ -122,7 +122,7 @@
   /* rendering technology that produces excellent output without LCD       */
   /* filtering.                                                            */
   /*                                                                       */
-/* #define FT_CONFIG_OPTION_SUBPIXEL_RENDERING */
+#define FT_CONFIG_OPTION_SUBPIXEL_RENDERING
 
 
   /*************************************************************************/
@@ -656,12 +656,12 @@
   /* defined.                                                              */
   /*                                                                       */
   /* [1] https://www.microsoft.com/typography/cleartype/truetypecleartype.aspx */
-  /*                                                                       */
-/* #define TT_CONFIG_OPTION_SUBPIXEL_HINTING  1         */
-#define TT_CONFIG_OPTION_SUBPIXEL_HINTING  2
+  /*
+                                                                           */
+#define TT_CONFIG_OPTION_SUBPIXEL_HINTING ( 1 | 2 )
+/* #define TT_CONFIG_OPTION_SUBPIXEL_HINTING  2 */
 /* #define TT_CONFIG_OPTION_SUBPIXEL_HINTING  ( 1 | 2 ) */
 
-
   /*************************************************************************/
   /*                                                                       */
   /* Define TT_CONFIG_OPTION_COMPONENT_OFFSET_SCALED to compile the        */
