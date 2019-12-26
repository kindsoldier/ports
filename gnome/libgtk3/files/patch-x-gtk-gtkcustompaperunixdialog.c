--- ./gtk/gtkcustompaperunixdialog.c.orig	2019-01-23 22:46:13.000000000 +0200
+++ ./gtk/gtkcustompaperunixdialog.c	2019-03-26 21:58:27.036607000 +0200
@@ -150,7 +150,7 @@
   gchar *filename;
 
   filename = g_build_filename (g_get_user_config_dir (),
-                               "gtk-3.0",
+                               "gtk3",
 			       CUSTOM_PAPER_FILENAME, NULL);
   g_assert (filename != NULL);
   return filename;
@@ -256,7 +256,7 @@
 
   filename = custom_paper_get_filename ();
   parentdir = g_build_filename (g_get_user_config_dir (),
-                                "gtk-3.0",
+                                "gtk3",
                                 NULL);
   if (g_mkdir_with_parents (parentdir, 0700) == 0)
     {
