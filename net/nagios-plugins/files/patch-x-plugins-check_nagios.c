--- ./plugins/check_nagios.c.orig	2019-10-12 15:42:56.950275000 +0200
+++ ./plugins/check_nagios.c	2019-10-12 15:42:56.951419000 +0200
@@ -81,7 +81,7 @@
 	output chld_out, chld_err;
 	size_t i;
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
