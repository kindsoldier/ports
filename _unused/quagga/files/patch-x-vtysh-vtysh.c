--- ./vtysh/vtysh.c.orig	2016-03-16 01:17:17.000000000 +0200
+++ ./vtysh/vtysh.c	2016-08-10 11:22:17.024436000 +0200
@@ -238,7 +238,7 @@
   if (pager_defined)
     vtysh_pager_name = strdup (pager_defined);
   else
-    vtysh_pager_name = strdup ("more");
+    vtysh_pager_name = strdup ("more -F");
 }
 
 /* Command execution over the vty interface. */
@@ -2003,7 +2003,7 @@
 
   if (lines != 0)
     {
-      snprintf(default_pager, 10, "more -%i", lines);
+      snprintf(default_pager, 10, "more -F -%i", lines);
       vtysh_pager_name = strdup (default_pager);
     }
 
