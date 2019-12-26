--- ./plugins/check_ntp_time.c.orig	2019-10-12 15:42:56.955086000 +0200
+++ ./plugins/check_ntp_time.c	2019-10-12 15:42:56.956269000 +0200
@@ -544,7 +544,7 @@
 	double offset=0;
 	char *result_line, *perfdata_line;
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
