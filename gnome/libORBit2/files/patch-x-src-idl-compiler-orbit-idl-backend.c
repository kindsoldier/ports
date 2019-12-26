--- ./src/idl-compiler/orbit-idl-backend.c.orig	2010-03-30 13:30:38.000000000 +0300
+++ ./src/idl-compiler/orbit-idl-backend.c	2015-10-20 19:49:52.526462000 +0200
@@ -44,7 +44,7 @@
 	strv = g_strsplit (val, ";", -1);
 	for (i = 0; strv [i]; i++)
 		paths = g_slist_prepend (
-				paths, g_strconcat (strv [i], "/lib/orbit-2.0/idl-backends", NULL));
+				paths, g_strconcat (strv [i], "/lib/orbit/idl-backends", NULL));
 
 	g_strfreev (strv);
 
