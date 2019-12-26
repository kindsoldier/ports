--- ./xfce4-notifyd/xfce-notify-daemon.c.orig	2013-01-18 21:41:51.000000000 +0300
+++ ./xfce4-notifyd/xfce-notify-daemon.c	2015-01-18 16:39:41.000000000 +0200
@@ -1134,7 +1134,7 @@
 
     /* old-style ~/.themes ... */
     file = g_build_filename(xfce_get_homedir(), ".themes", theme,
-                            "xfce-notify-4.0", "gtkrc", NULL);
+                            "xfce-notify", "gtkrc", NULL);
     if(g_file_test(file, G_FILE_TEST_EXISTS)) {
         string = g_strconcat("include \"", file, "\"", NULL);
         if (!g_file_set_contents (temp_theme_file, string, -1, &error)) {
@@ -1153,7 +1153,7 @@
     }
     g_free(file);
 
-    file = g_strconcat("themes/", theme, "/xfce-notify-4.0/gtkrc", NULL);
+    file = g_strconcat("themes/", theme, "/xfce-notify/gtkrc", NULL);
     files = xfce_resource_lookup_all(XFCE_RESOURCE_DATA, file);
 
     string = g_strconcat("include \"", files[0], "\"", NULL);
