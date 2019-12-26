--- ./src/filemanager/midnight.c.orig	2012-12-28 11:47:48.000000000 +0300
+++ ./src/filemanager/midnight.c	2017-05-25 21:23:58.500151000 +0200
@@ -874,8 +874,6 @@
         add_select_channel (mc_global.tty.subshell_pty, load_prompt, 0);
 #endif /* !HAVE_SUBSHELL_SUPPORT */
 
-    if ((tty_baudrate () < 9600) || mc_global.tty.slow_terminal)
-        verbose = 0;
 }
 
 /* --------------------------------------------------------------------------------------------- */
