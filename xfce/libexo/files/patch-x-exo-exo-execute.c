--- ./exo/exo-execute.c.orig	2012-12-27 15:50:31.000000000 +0300
+++ ./exo/exo-execute.c	2015-01-19 16:50:50.000000000 +0200
@@ -131,7 +131,7 @@
   g_return_val_if_fail (error == NULL || *error == NULL, FALSE);
 
   /* generate the argument vector */
-  argv[argc++] = HELPERDIR G_DIR_SEPARATOR_S "exo-helper-" LIBEXO_VERSION_API;
+  argv[argc++] = HELPERDIR G_DIR_SEPARATOR_S "exo-helper";
   argv[argc++] = "--launch";
   argv[argc++] = (gchar *) category;
 
