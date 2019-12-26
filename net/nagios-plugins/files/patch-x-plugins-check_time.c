--- ./plugins/check_time.c.orig	2019-10-12 15:42:56.963096000 +0200
+++ ./plugins/check_time.c	2019-10-12 15:42:56.964241000 +0200
@@ -67,7 +67,7 @@
 	int result = STATE_UNKNOWN;
 	time_t conntime;
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
