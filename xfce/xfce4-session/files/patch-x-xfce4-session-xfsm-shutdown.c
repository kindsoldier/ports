--- ./xfce4-session/xfsm-shutdown.c.orig	2014-12-07 09:48:40.000000000 +0200
+++ ./xfce4-session/xfsm-shutdown.c	2015-08-18 15:07:32.424206000 +0200
@@ -79,6 +79,9 @@
 #include <xfce4-session/xfsm-systemd.h>
 #include <xfce4-session/xfsm-shutdown-fallback.h>
 
+#include <sys/param.h>
+#include <sys/user.h>
+#include <sys/sysctl.h>
 
 
 static void xfsm_shutdown_finalize  (GObject      *object);
