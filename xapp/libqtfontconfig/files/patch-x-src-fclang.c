--- ./src/fclang.c.orig	2017-09-21 06:44:27.000000000 +0200
+++ ./src/fclang.c	2019-03-31 10:15:39.563752000 +0200
@@ -183,6 +183,7 @@
 {
     FcChar8 *result = NULL, *s, *orig;
     char *territory, *encoding, *modifier;
+    char *script;
     size_t llen, tlen = 0, mlen = 0;
 
     if (!lang || !*lang)
