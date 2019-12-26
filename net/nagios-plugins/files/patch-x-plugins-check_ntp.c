--- ./plugins/check_ntp.c.orig	2019-10-12 15:42:56.951836000 +0200
+++ ./plugins/check_ntp.c	2019-10-12 15:42:56.953053000 +0200
@@ -767,7 +767,7 @@
 	double offset=0, jitter=0;
 	char *result_line, *perfdata_line;
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
