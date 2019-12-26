--- ./plugins/check_by_ssh.c.orig	2019-10-12 15:42:56.943638000 +0200
+++ ./plugins/check_by_ssh.c	2019-10-12 15:42:56.944823000 +0200
@@ -74,7 +74,7 @@
 	remotecmd = "";
 	comm_append(SSH_COMMAND);
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
