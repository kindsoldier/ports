--- ./xfce4-notifyd-config/main.c.orig	2013-05-08 15:11:51.000000000 +0300
+++ ./xfce4-notifyd-config/main.c	2015-01-18 16:39:41.000000000 +0200
@@ -161,7 +161,7 @@
             continue;
 
         filename =
-            g_build_filename(path, file, "xfce-notify-4.0", "gtkrc", NULL);
+            g_build_filename(path, file, "xfce-notify", "gtkrc", NULL);
 
         if(g_file_test(filename, G_FILE_TEST_IS_REGULAR)) {
             GtkTreeIter iter;
