--- ./test/dbus-daemon.c.orig	2015-05-14 14:23:25.000000000 +0200
+++ ./test/dbus-daemon.c	2015-10-15 11:34:51.687450000 +0200
@@ -218,7 +218,7 @@
     }
   else if (g_getenv ("DBUS_TEST_SYSCONFDIR") != NULL)
     {
-      arg = g_strdup_printf ("--config-file=%s/dbus-1/session.conf",
+      arg = g_strdup_printf ("--config-file=%s/dbus/session.conf",
           g_getenv ("DBUS_TEST_SYSCONFDIR"));
     }
   else if (g_getenv ("DBUS_TEST_DATA") != NULL)
