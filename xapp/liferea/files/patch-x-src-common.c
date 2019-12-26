--- ./src/common.c.orig	2012-03-23 17:24:26.000000000 +0300
+++ ./src/common.c	2013-12-15 11:10:24.000000000 +0300
@@ -71,7 +71,7 @@
 {
 	gchar *cachePath;
 
-	lifereaUserPath = g_build_filename (g_get_home_dir(), ".liferea_1.8", NULL);
+	lifereaUserPath = g_build_filename (g_get_home_dir(), ".liferea", NULL);
 	cachePath = g_build_filename (lifereaUserPath, "cache", NULL);
 
 	common_check_dir (g_strdup (lifereaUserPath));
