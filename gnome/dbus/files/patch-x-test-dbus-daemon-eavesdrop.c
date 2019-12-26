--- ./test/dbus-daemon-eavesdrop.c.orig	2015-05-14 14:23:25.000000000 +0200
+++ ./test/dbus-daemon-eavesdrop.c	2015-10-15 11:34:51.678198000 +0200
@@ -397,7 +397,7 @@
 
   if (g_getenv ("DBUS_TEST_SYSCONFDIR") != NULL)
     {
-      config = g_strdup_printf ("--config-file=%s/dbus-1/session.conf",
+      config = g_strdup_printf ("--config-file=%s/dbus/session.conf",
           g_getenv ("DBUS_TEST_SYSCONFDIR"));
     }
   else if (g_getenv ("DBUS_TEST_DATA") != NULL)
