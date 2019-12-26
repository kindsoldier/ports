--- ./gtk/gtkplacesview.c.orig	2019-02-23 01:34:24.000000000 +0200
+++ ./gtk/gtkplacesview.c	2019-03-26 21:58:27.041321000 +0200
@@ -189,7 +189,7 @@
 
   priv = gtk_places_view_get_instance_private (view);
   bookmarks = g_bookmark_file_new ();
-  datadir = g_build_filename (g_get_user_config_dir (), "gtk-3.0", NULL);
+  datadir = g_build_filename (g_get_user_config_dir (), "gtk3", NULL);
   filename = g_build_filename (datadir, "servers", NULL);
 
   g_mkdir_with_parents (datadir, 0700);
@@ -247,7 +247,7 @@
 {
   gchar *filename;
 
-  filename = g_build_filename (g_get_user_config_dir (), "gtk-3.0", "servers", NULL);
+  filename = g_build_filename (g_get_user_config_dir (), "gtk3", "servers", NULL);
   g_bookmark_file_to_file (bookmarks, filename, NULL);
   g_free (filename);
 }
