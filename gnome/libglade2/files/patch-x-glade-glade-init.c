--- ./glade/glade-init.c.orig	2009-03-17 16:19:00.000000000 +0200
+++ ./glade/glade-init.c	2010-09-16 11:45:50.000000000 +0300
@@ -179,9 +179,9 @@
     gchar *default_dir;
     
     if (exe_prefix)
-	default_dir = g_build_filename (exe_prefix, "lib", "libglade", "2.0", NULL);
+	default_dir = g_build_filename (exe_prefix, "lib", "libglade", NULL);
     else
-	default_dir = g_build_filename (GLADE_LIBDIR, "libglade", "2.0", NULL);
+	default_dir = g_build_filename (GLADE_LIBDIR, "libglade", NULL);
     
     module_path = g_strconcat (module_path_env ? module_path_env : "",
 			       module_path_env ? G_SEARCHPATH_SEPARATOR_S : "",
