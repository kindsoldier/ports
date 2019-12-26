--- ./librarian/rarian-main.c.orig	2008-09-01 21:40:21.000000000 +0300
+++ ./librarian/rarian-main.c	2010-09-28 02:27:52.000000000 +0300
@@ -215,7 +215,7 @@
     path = getenv ("XDG_DATA_DIRS");
 
     if (!path || !strcmp (path, "")) {
-        path = "/usr/local/share/:/usr/share/";
+        path = "/usr/local/share/";
     }
     cur_path = path;
 
