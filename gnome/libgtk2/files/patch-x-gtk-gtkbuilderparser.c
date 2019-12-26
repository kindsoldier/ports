--- ./gtk/gtkbuilderparser.c.orig	2014-09-29 23:02:16.000000000 +0300
+++ ./gtk/gtkbuilderparser.c	2015-10-16 19:38:10.683896000 +0200
@@ -1051,7 +1051,7 @@
 /* Called for character data */
 /* text is not nul-terminated */
 static void
-text (GMarkupParseContext *context,
+XXXtext (GMarkupParseContext *context,
       const gchar         *text,
       gsize                text_len,
       gpointer             user_data,
@@ -1106,7 +1106,7 @@
 static const GMarkupParser parser = {
   start_element,
   end_element,
-  text,
+  XXXtext,
   NULL,
   NULL
 };
