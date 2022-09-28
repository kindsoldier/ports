--- ./plugins/check_ssh.c.orig	2019-10-12 15:42:56.959951000 +0200
+++ ./plugins/check_ssh.c	2019-10-12 15:42:56.961092000 +0200
@@ -63,7 +63,7 @@
 {
 	int result = STATE_UNKNOWN;
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
