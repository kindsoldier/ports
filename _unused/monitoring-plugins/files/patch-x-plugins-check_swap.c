--- ./plugins/check_swap.c.orig	2019-10-12 15:42:56.961505000 +0200
+++ ./plugins/check_swap.c	2019-10-12 15:42:56.962686000 +0200
@@ -98,7 +98,7 @@
 	char str[32];
 	char *status;
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
