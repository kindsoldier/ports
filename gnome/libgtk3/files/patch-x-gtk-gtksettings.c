--- ./gtk/gtksettings.c.orig	2019-02-23 01:34:24.000000000 +0200
+++ ./gtk/gtksettings.c	2019-03-26 21:58:27.043392000 +0200
@@ -340,12 +340,12 @@
     }
   g_free (pspecs);
 
-  path = g_build_filename (_gtk_get_data_prefix (), "share", "gtk-3.0", "settings.ini", NULL);
+  path = g_build_filename (_gtk_get_data_prefix (), "share", "gtk3", "settings.ini", NULL);
   if (g_file_test (path, G_FILE_TEST_EXISTS))
     gtk_settings_load_from_key_file (settings, path, GTK_SETTINGS_SOURCE_DEFAULT);
   g_free (path);
 
-  path = g_build_filename (_gtk_get_sysconfdir (), "gtk-3.0", "settings.ini", NULL);
+  path = g_build_filename (_gtk_get_sysconfdir (), "gtk3", "settings.ini", NULL);
   if (g_file_test (path, G_FILE_TEST_EXISTS))
     gtk_settings_load_from_key_file (settings, path, GTK_SETTINGS_SOURCE_DEFAULT);
   g_free (path);
@@ -353,13 +353,13 @@
   config_dirs = g_get_system_config_dirs ();
   for (i = 0; config_dirs[i] != NULL; i++)
     {
-      path = g_build_filename (config_dirs[i], "gtk-3.0", "settings.ini", NULL);
+      path = g_build_filename (config_dirs[i], "gtk3", "settings.ini", NULL);
       if (g_file_test (path, G_FILE_TEST_EXISTS))
         gtk_settings_load_from_key_file (settings, path, GTK_SETTINGS_SOURCE_DEFAULT);
       g_free (path);
     }
 
-  path = g_build_filename (g_get_user_config_dir (), "gtk-3.0", "settings.ini", NULL);
+  path = g_build_filename (g_get_user_config_dir (), "gtk3", "settings.ini", NULL);
   if (g_file_test (path, G_FILE_TEST_EXISTS))
     gtk_settings_load_from_key_file (settings, path, GTK_SETTINGS_SOURCE_DEFAULT);
   g_free (path);
@@ -1853,7 +1853,7 @@
 
       css_provider = gtk_css_provider_new ();
       css_path = g_build_filename (g_get_user_config_dir (),
-                                   "gtk-3.0",
+                                   "gtk3",
                                    "gtk.css",
                                    NULL);
 
