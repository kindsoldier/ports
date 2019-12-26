--- ./server/libvncserver/sockets.c.orig	2011-05-02 19:28:36.000000000 +0300
+++ ./server/libvncserver/sockets.c	2015-01-12 10:28:32.000000000 +0200
@@ -681,6 +681,11 @@
 {
     int sock = -1;
     int one  = 1;
+#ifdef ENABLE_IPV6
+#ifdef IPV6_V6ONLY
+    int off = 0;
+#endif
+#endif
 
     if ((sock = socket(addr->sa_family, SOCK_STREAM, 0)) < 0)
       return -1;
@@ -699,6 +704,15 @@
     }
 #endif
 
+#ifdef  ENABLE_IPV6
+#ifdef IPV6_V6ONLY
+    if (setsockopt(sock, IPPROTO_IPV6, IPV6_V6ONLY, (void *)&off, sizeof(off)) < 0) {
+      close(sock);
+      return -1;
+    }
+#endif
+#endif
+
     if (bind(sock, addr, len) < 0) {
       close(sock);
       return -1;
