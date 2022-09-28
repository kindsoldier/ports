--- ./plugins/check_pgsql.c.orig	2019-10-12 15:42:56.956686000 +0200
+++ ./plugins/check_pgsql.c	2019-10-12 15:42:56.957870000 +0200
@@ -161,7 +161,7 @@
 	pgoptions = NULL;  /* special options to start up the backend server */
 	pgtty = NULL;      /* debugging tty for the backend server */
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
