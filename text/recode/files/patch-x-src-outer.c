--- ./src/outer.c.orig	2000-08-30 23:16:14.000000000 +0300
+++ ./src/outer.c	2016-12-04 20:40:12.419929000 +0200
@@ -617,7 +617,14 @@
   if (outer->alias_table)
     hash_free (outer->alias_table);
   if (outer->argmatch_charset_array)
-    free (outer->argmatch_charset_array);
+    {
+      char **cursor;
+      for (cursor = outer->argmatch_charset_array; *cursor; cursor++)
+	free (*cursor);
+      for (cursor = outer->argmatch_surface_array; *cursor; cursor++)
+	free (*cursor);
+      free (outer->argmatch_charset_array);
+    }
   if (outer->one_to_same)
     free ((void *) outer->one_to_same);
   free (outer);
