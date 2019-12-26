--- ./dbus/dbus-sysdeps-util-win.c.orig	2015-05-14 14:23:25.000000000 +0200
+++ ./dbus/dbus-sysdeps-util-win.c	2015-10-15 11:34:51.668319000 +0200
@@ -1624,8 +1624,8 @@
 #define DBUS_DATADIR _dbus_windows_get_datadir ()
 
 
-#define DBUS_STANDARD_SESSION_SERVICEDIR "/dbus-1/services"
-#define DBUS_STANDARD_SYSTEM_SERVICEDIR "/dbus-1/system-services"
+#define DBUS_STANDARD_SESSION_SERVICEDIR "/dbus/services"
+#define DBUS_STANDARD_SYSTEM_SERVICEDIR "/dbus/system-services"
 
 /**
  * Returns the standard directories for a session bus to look for service
