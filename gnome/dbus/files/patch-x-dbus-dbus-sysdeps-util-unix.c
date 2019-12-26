--- ./dbus/dbus-sysdeps-util-unix.c.orig	2015-05-14 14:23:25.000000000 +0200
+++ ./dbus/dbus-sysdeps-util-unix.c	2015-10-15 11:34:51.658036000 +0200
@@ -41,6 +41,7 @@
 #include <stdio.h>
 #include <errno.h>
 #include <fcntl.h>
+#include <syslog.h>
 #include <sys/stat.h>
 #ifdef HAVE_SYS_RESOURCE_H
 #include <sys/resource.h>
@@ -1280,8 +1281,8 @@
   return configure_time_path;
 }
 
-#define DBUS_UNIX_STANDARD_SESSION_SERVICEDIR "/dbus-1/services"
-#define DBUS_UNIX_STANDARD_SYSTEM_SERVICEDIR "/dbus-1/system-services"
+#define DBUS_UNIX_STANDARD_SESSION_SERVICEDIR "/dbus/services"
+#define DBUS_UNIX_STANDARD_SYSTEM_SERVICEDIR "/dbus/system-services"
 
 /**
  * Returns the standard directories for a session bus to look for service
