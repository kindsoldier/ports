--- ./gtk/gtkfilechoosersettings.c.orig	2014-09-29 23:02:17.000000000 +0300
+++ ./gtk/gtkfilechoosersettings.c	2015-10-16 19:38:10.704926000 +0200
@@ -66,13 +66,13 @@
 static char *
 get_config_dirname (void)
 {
-  return g_build_filename (g_get_user_config_dir (), "gtk-2.0", NULL);
+  return g_build_filename (g_get_user_config_dir (), "gtk", NULL);
 }
 
 static char *
 get_config_filename (void)
 {
-  return g_build_filename (g_get_user_config_dir (), "gtk-2.0", "gtkfilechooser.ini", NULL);
+  return g_build_filename (g_get_user_config_dir (), "gtk", "gtkfilechooser.ini", NULL);
 }
 
 static void
