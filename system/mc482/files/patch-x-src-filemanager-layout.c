--- ./src/filemanager/layout.c.orig	2016-09-22 20:24:12.000000000 +0200
+++ ./src/filemanager/layout.c	2017-01-02 14:30:57.598856000 +0200
@@ -91,7 +91,7 @@
 gboolean command_prompt = TRUE;
 
 /* Set if the main menu is visible */
-int menubar_visible = 1;
+int menubar_visible = 0;
 
 /* Set to show current working dir in xterm window title */
 gboolean xterm_title = TRUE;
