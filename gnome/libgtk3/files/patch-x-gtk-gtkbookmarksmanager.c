--- ./gtk/gtkbookmarksmanager.c.orig	2019-01-23 22:46:13.000000000 +0200
+++ ./gtk/gtkbookmarksmanager.c	2019-03-26 21:58:27.033550000 +0200
@@ -73,7 +73,7 @@
   GFile *file;
   gchar *filename;
 
-  filename = g_build_filename (g_get_user_config_dir (), "gtk-3.0", "bookmarks", NULL);
+  filename = g_build_filename (g_get_user_config_dir (), "gtk3", "bookmarks", NULL);
   file = g_file_new_for_path (filename);
   g_free (filename);
 
