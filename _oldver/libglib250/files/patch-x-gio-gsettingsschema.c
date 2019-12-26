--- ./gio/gsettingsschema.c.orig	2014-07-31 16:36:53.000000000 +0300
+++ ./gio/gsettingsschema.c	2014-12-24 21:28:46.000000000 +0200
@@ -336,7 +336,7 @@
         {
           gchar *dirname;
 
-          dirname = g_build_filename (dirs[i], "glib-2.0", "schemas", NULL);
+          dirname = g_build_filename (dirs[i], "glib", "schemas", NULL);
           try_prepend_dir (dirname);
           g_free (dirname);
         }
