--- ./plugins/check_mrtgtraf.c.orig	2019-10-12 15:42:56.948686000 +0200
+++ ./plugins/check_mrtgtraf.c	2019-10-12 15:42:56.949860000 +0200
@@ -72,7 +72,7 @@
 	char incoming_speed_rating[8];
 	char outgoing_speed_rating[8];
 
-	setlocale (LC_ALL, "");
+	setlocale (LC_ALL, ""); setlocale(LC_NUMERIC, "C");
 	bindtextdomain (PACKAGE, LOCALEDIR);
 	textdomain (PACKAGE);
 
