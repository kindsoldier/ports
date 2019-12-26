--- ./activation-server/activation-server-main.c.orig	2010-08-18 20:41:32.000000000 +0300
+++ ./activation-server/activation-server-main.c	2011-11-02 06:49:24.000000000 +0300
@@ -239,7 +239,7 @@
                         g_string_append (gnome_od_source_dir,
                                          gnome_dirs[i]);
                         g_string_append (gnome_od_source_dir,
-                                         "/lib/bonobo/servers" G_SEARCHPATH_SEPARATOR_S);
+                                         "/libdata/bonobo/servers" G_SEARCHPATH_SEPARATOR_S);
                 }
                 g_strfreev (gnome_dirs);
                 g_string_append (real_od_source_dir,
