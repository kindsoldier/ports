--- ./server/vino-http.c.orig	2011-05-02 19:07:11.000000000 +0300
+++ ./server/vino-http.c	2015-01-12 10:28:32.000000000 +0200
@@ -595,6 +595,9 @@
 {
 #ifdef ENABLE_IPV6
   struct sockaddr_in6  saddr_in6;
+#ifdef IPV6_V6ONLY
+  int                  off = 0;
+#endif
 #endif
   struct sockaddr_in   saddr_in;
   struct sockaddr     *saddr;
@@ -621,6 +624,9 @@
 
 #ifdef ENABLE_IPV6
   sock = socket (AF_INET6, SOCK_STREAM, 0);
+#ifdef IPV6_V6ONLY
+  setsockopt(sock, IPPROTO_IPV6, IPV6_V6ONLY, (void *)&off, sizeof(off));
+#endif
 
   memset (&saddr_in6, 0, sizeof (struct sockaddr_in6));
   saddr_in6.sin6_family = AF_INET6;
