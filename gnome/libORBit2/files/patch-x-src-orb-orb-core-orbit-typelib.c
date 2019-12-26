--- ./src/orb/orb-core/orbit-typelib.c.orig	2009-04-18 15:20:54.000000000 +0300
+++ ./src/orb/orb-core/orbit-typelib.c	2015-10-20 19:49:52.545953000 +0200
@@ -202,7 +202,7 @@
 	g_ptr_array_add (
 		strings,
 		base_path ? 
-		  g_strconcat (new_str, "/lib/orbit-2.0", NULL) : 
+		  g_strconcat (new_str, "/lib/orbit", NULL) : 
     		  g_strdup(new_str));
 }
 
@@ -218,6 +218,7 @@
 	paths = g_ptr_array_sized_new (8);
 
 	g_ptr_array_add (paths, g_strdup (ORBIT_TYPELIB_DIR));
+	add_if_unique(paths, "/usr/local", TRUE);
 
 	if ((path = g_getenv ("ORBIT_TYPELIB_PATH"))) {
 		char **strv;
