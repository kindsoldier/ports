--- ./src/LYMain.c.orig	2009-09-01 22:08:16.000000000 +0300
+++ ./src/LYMain.c	2009-09-01 22:16:53.000000000 +0300
@@ -568,7 +568,7 @@
 #endif
 
 #ifdef USE_LOCALE_CHARSET
-BOOLEAN LYLocaleCharset = FALSE;
+BOOLEAN LYLocaleCharset = TRUE;
 #endif
 
 #ifndef NO_DUMP_WITH_BACKSPACES
