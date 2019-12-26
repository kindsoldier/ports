--- ./plugins/check_users.c.orig	2019-10-12 15:42:56.964662000 +0200
+++ ./plugins/check_users.c	2019-10-12 15:42:56.965789000 +0200
@@ -73,7 +73,7 @@
 	char input_buffer[MAX_INPUT_BUFFER];
 #endif
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
