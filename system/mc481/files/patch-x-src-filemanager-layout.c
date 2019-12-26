--- ./src/filemanager/layout.c.orig	2012-12-28 11:47:48.000000000 +0300
+++ ./src/filemanager/layout.c	2015-10-12 23:30:05.540909000 +0200
@@ -89,7 +89,7 @@
 gboolean command_prompt = TRUE;
 
 /* Set if the main menu is visible */
-int menubar_visible = 1;
+int menubar_visible = 0;
 
 /* Set to show current working dir in xterm window title */
 gboolean xterm_title = TRUE;
