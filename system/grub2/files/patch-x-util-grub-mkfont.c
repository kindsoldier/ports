--- ./util/grub-mkfont.c.orig	2012-03-10 15:17:57.000000000 +0300
+++ ./util/grub-mkfont.c	2015-10-14 16:02:17.434041000 +0200
@@ -39,7 +39,7 @@
 #include FT_FREETYPE_H
 #include FT_TRUETYPE_TAGS_H
 #include FT_TRUETYPE_TABLES_H
-#include <freetype/ftsynth.h>
+#include <freetype2/freetype/ftsynth.h>
 
 #undef __FTERRORS_H__
 #define FT_ERROR_START_LIST   const char *ft_errmsgs[] = { 
