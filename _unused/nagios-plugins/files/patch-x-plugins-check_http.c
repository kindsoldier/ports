--- ./plugins/check_http.c.orig	2019-10-12 15:42:56.946955000 +0200
+++ ./plugins/check_http.c	2019-10-12 15:42:56.948282000 +0200
@@ -152,7 +152,7 @@
 {
   int result = STATE_UNKNOWN;
 
-  setlocale (LC_ALL, "");
+  setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
   bindtextdomain (PACKAGE, LOCALEDIR);
   textdomain (PACKAGE);
 
