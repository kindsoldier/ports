--- ./gdk-pixbuf/gdk-pixbuf-io.c.orig	2017-02-13 17:58:32.000000000 +0200
+++ ./gdk-pixbuf/gdk-pixbuf-io.c	2017-05-12 15:06:10.056464000 +0200
@@ -381,7 +381,7 @@
   gchar *result = g_strdup (g_getenv ("GDK_PIXBUF_MODULE_FILE"));
 
   if (!result)
-          result = g_build_filename (GDK_PIXBUF_LIBDIR, "gdk-pixbuf-2.0", GDK_PIXBUF_BINARY_VERSION, "loaders.cache", NULL);
+          result = g_build_filename (GDK_PIXBUF_LIBDIR, "gdk-pixbuf", "loaders.cache", NULL);
 
   return result;
 }
