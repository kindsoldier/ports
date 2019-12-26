--- ./src/network/ssl/qsslsocket_openssl_p.h.orig	2015-05-07 16:14:44.000000000 +0200
+++ ./src/network/ssl/qsslsocket_openssl_p.h	2019-12-23 23:40:05.285728000 +0200
@@ -84,6 +84,10 @@
 #include <openssl/tls1.h>
 #endif
 
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#define OPENSSL_NO_SSL2
+#endif
+
 #if OPENSSL_VERSION_NUMBER >= 0x10000000L
 typedef _STACK STACK;
 #endif
