--- ./libs/database.c.orig	2002-06-02 09:03:10.000000000 +0300
+++ ./libs/database.c	2015-10-21 08:58:55.155497000 +0200
@@ -131,7 +131,8 @@
     
     /* create locale directories and symlinks */
     
-    dir = opendir(data_dir);
+    if ((dir = opendir(data_dir)) == NULL)
+	return 0;
     
     while((dir_ent = readdir(dir)) != NULL)
     {
