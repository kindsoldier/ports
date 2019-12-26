--- ./libgnomevfs/gnome-vfs-application-registry.c.orig	2010-02-09 14:16:14.000000000 +0200
+++ ./libgnomevfs/gnome-vfs-application-registry.c	2015-01-05 21:19:08.000000000 +0200
@@ -944,6 +944,8 @@
 static void
 gnome_vfs_application_registry_init (void)
 {
+	gchar *tmp;
+
 	if (gnome_vfs_application_registry_initialized)
 		return;
 
@@ -964,6 +966,14 @@
 						       "application-registry",
 						       NULL);
 	gnome_registry_dir.system_dir = TRUE;
+
+	tmp = g_strconcat (g_get_home_dir(), "/.gnome", NULL);
+	if (mkdir (tmp, 0700) &&
+		errno != EEXIST) {
+			g_warning("Could not create per-user GNOME configuration directory: %s",
+				tmp);
+	}
+	g_free(tmp);
 	
 	user_registry_dir.dirname = g_build_filename (g_get_home_dir(),
 						      ".gnome",
