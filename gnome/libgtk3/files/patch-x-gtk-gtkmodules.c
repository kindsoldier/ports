--- ./gtk/gtkmodules.c.orig	2019-01-23 22:46:13.000000000 +0200
+++ ./gtk/gtkmodules.c	2019-03-26 21:58:27.039609000 +0200
@@ -65,9 +65,9 @@
   exe_prefix = g_getenv ("GTK_EXE_PREFIX");
 
   if (exe_prefix)
-    default_dir = g_build_filename (exe_prefix, "lib", "gtk-3.0", NULL);
+    default_dir = g_build_filename (exe_prefix, "lib", "gtk3", NULL);
   else
-    default_dir = g_build_filename (_gtk_get_libdir (), "gtk-3.0", NULL);
+    default_dir = g_build_filename (_gtk_get_libdir (), "gtk3", NULL);
 
   if (module_path_env)
     module_path = g_build_path (G_SEARCHPATH_SEPARATOR_S,
