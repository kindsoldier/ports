--- ./lib/tty/win.c.orig	2012-12-28 11:47:42.000000000 +0300
+++ ./lib/tty/win.c	2015-10-12 23:17:22.838479000 +0200
@@ -96,7 +96,7 @@
 void
 do_enter_ca_mode (void)
 {
-    if (mc_global.tty.xterm_flag && smcup != NULL)
+    if (mc_global.tty.xterm_flag)
     {
         fprintf (stdout, /* ESC_STR ")0" */ ESC_STR "7" ESC_STR "[?47h");
         fflush (stdout);
@@ -108,7 +108,7 @@
 void
 do_exit_ca_mode (void)
 {
-    if (mc_global.tty.xterm_flag && rmcup != NULL)
+    if (mc_global.tty.xterm_flag)
     {
         fprintf (stdout, ESC_STR "[?47l" ESC_STR "8" ESC_STR "[m");
         fflush (stdout);
