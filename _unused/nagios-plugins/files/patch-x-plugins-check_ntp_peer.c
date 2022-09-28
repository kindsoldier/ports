--- ./plugins/check_ntp_peer.c.orig	2019-10-12 15:42:56.953469000 +0200
+++ ./plugins/check_ntp_peer.c	2019-10-12 15:42:56.954663000 +0200
@@ -564,7 +564,7 @@
 	double offset=0, jitter=0;
 	char *result_line, *perfdata_line;
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
