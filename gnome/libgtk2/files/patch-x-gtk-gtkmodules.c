--- ./gtk/gtkmodules.c.orig	2014-09-29 23:02:17.000000000 +0300
+++ ./gtk/gtkmodules.c	2015-10-16 19:38:10.714993000 +0200
@@ -67,15 +67,15 @@
 
   home_dir = g_get_home_dir();
   if (home_dir)
-    home_gtk_dir = g_build_filename (home_dir, ".gtk-2.0", NULL);
+    home_gtk_dir = g_build_filename (home_dir, ".gtk", NULL);
 
   module_path_env = g_getenv ("GTK_PATH");
   exe_prefix = g_getenv ("GTK_EXE_PREFIX");
 
   if (exe_prefix)
-    default_dir = g_build_filename (exe_prefix, "lib", "gtk-2.0", NULL);
+    default_dir = g_build_filename (exe_prefix, "lib", "gtk", NULL);
   else
-    default_dir = g_build_filename (GTK_LIBDIR, "gtk-2.0", NULL);
+    default_dir = g_build_filename (GTK_LIBDIR, "gtk", NULL);
 
   if (module_path_env && home_gtk_dir)
     module_path = g_build_path (G_SEARCHPATH_SEPARATOR_S,
