--- ./terminal/terminal-screen.c.orig	2013-12-27 00:31:10.000000000 +0300
+++ ./terminal/terminal-screen.c	2014-12-22 23:21:35.000000000 +0200
@@ -528,11 +528,12 @@
   gboolean       command_login_shell;
   guint          i;
   const gchar   *shells[] = { "/bin/sh",
-                              "/bin/bash", "/usr/bin/bash",
-                              "/bin/dash", "/usr/bin/dash",
-                              "/bin/zsh",  "/usr/bin/zsh",
-                              "/bin/tcsh", "/usr/bin/tcsh",
-                              "/bin/ksh",  "/usr/bin/ksh" };
+                              "/usr/local/bin/bash",
+                              "/usr/local/bin/dash",
+                              "/usr/local/bin/zsh",
+                              "/usr/local/bin/ksh",
+                              "/bin/csh",
+                              "/bin/tcsh"};
 
   if (screen->custom_command != NULL)
     {
@@ -746,6 +747,7 @@
       result[n++] = g_strdup_printf ("DISPLAY=%s", display_name);
       g_free (display_name);
     }
+  result[n++] = g_strdup ("XFCE_TERM=YES");
 
   result[n] = NULL;
 
