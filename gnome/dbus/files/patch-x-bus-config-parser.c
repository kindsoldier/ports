--- ./bus/config-parser.c.orig	2015-05-14 14:23:25.000000000 +0200
+++ ./bus/config-parser.c	2015-10-15 11:34:51.619724000 +0200
@@ -3398,7 +3398,7 @@
           return FALSE;
         }
 
-      if (!_dbus_string_append (&progs, "/dbus-1/services")) 
+      if (!_dbus_string_append (&progs, "/dbus/services")) 
         {
           _dbus_string_free (&progs);
           return FALSE;
@@ -3412,14 +3412,14 @@
   if (!_dbus_get_standard_session_servicedirs (&dirs))
     _dbus_assert_not_reached ("couldn't get stardard dirs");
 
-  /* make sure our defaults end with share/dbus-1/service */
+  /* make sure our defaults end with share/dbus/service */
   while ((link = _dbus_list_pop_first_link (&dirs)))
     {
       DBusString path;
       
       printf ("    default service dir: %s\n", (char *)link->data);
       _dbus_string_init_const (&path, (char *)link->data);
-      if (!_dbus_string_ends_with_c_str (&path, "dbus-1/services"))
+      if (!_dbus_string_ends_with_c_str (&path, "dbus/services"))
         {
           printf ("error with default session service directories\n");
 	      dbus_free (link->data);
@@ -3531,7 +3531,7 @@
           return FALSE;
         }
 
-      if (!_dbus_string_append (&progs, "/dbus-1/system-services")) 
+      if (!_dbus_string_append (&progs, "/dbus/system-services")) 
         {
           _dbus_string_free (&progs);
           return FALSE;
@@ -3545,14 +3545,14 @@
   if (!_dbus_get_standard_system_servicedirs (&dirs))
     _dbus_assert_not_reached ("couldn't get stardard dirs");
 
-  /* make sure our defaults end with share/dbus-1/system-service */
+  /* make sure our defaults end with share/dbus/system-service */
   while ((link = _dbus_list_pop_first_link (&dirs)))
     {
       DBusString path;
       
       printf ("    default service dir: %s\n", (char *)link->data);
       _dbus_string_init_const (&path, (char *)link->data);
-      if (!_dbus_string_ends_with_c_str (&path, "dbus-1/system-services"))
+      if (!_dbus_string_ends_with_c_str (&path, "dbus/system-services"))
         {
           printf ("error with default system service directories\n");
 	      dbus_free (link->data);
