--- ./plugins-root/check_dhcp.c.orig	2014-11-30 12:36:26.000000000 +0200
+++ ./plugins-root/check_dhcp.c	2015-03-17 14:57:35.231943000 +0200
@@ -323,7 +323,8 @@
 #elif defined(__bsd__)
 						/* King 2004	see ACKNOWLEDGEMENTS */
 
-        int                     mib[6], len;
+        int                     mib[6];
+        size_t                  len;
         char                    *buf;
         unsigned char           *ptr;
         struct if_msghdr        *ifm;
