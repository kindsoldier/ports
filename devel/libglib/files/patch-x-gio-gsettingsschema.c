--- ./gio/gsettingsschema.c.orig	2018-09-21 11:29:23.000000000 +0200
+++ ./gio/gsettingsschema.c	2019-01-26 11:41:15.215603000 +0200
@@ -324,7 +324,7 @@
 static void
 try_prepend_data_dir (const gchar *directory)
 {
-  gchar *dirname = g_build_filename (directory, "glib-2.0", "schemas", NULL);
+  gchar *dirname = g_build_filename (directory, "glib", "schemas", NULL);
   try_prepend_dir (dirname);
   g_free (dirname);
 }
