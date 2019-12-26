--- ./plugins/check_snmp.c.orig	2019-10-12 15:42:56.958296000 +0200
+++ ./plugins/check_snmp.c	2019-10-12 15:42:56.959549000 +0200
@@ -208,7 +208,7 @@
 	char *conv = "12345678";
 	int is_counter=0;
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
