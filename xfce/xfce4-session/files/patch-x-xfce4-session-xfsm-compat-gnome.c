--- ./xfce4-session/xfsm-compat-gnome.c.orig	2014-09-25 20:21:11.000000000 +0300
+++ ./xfce4-session/xfsm-compat-gnome.c	2015-08-18 15:07:32.400609000 +0200
@@ -61,7 +61,7 @@
 
 #include <xfce4-session/xfsm-compat-gnome.h>
 
-#define GNOME_KEYRING_DAEMON "gnome-keyring-daemon"
+#define GNOME_KEYRING_DAEMON "/usr/local/bin/gnome-keyring-daemon"
 
 
 static gboolean gnome_compat_started = FALSE;
