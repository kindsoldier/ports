--- ./avahi-autoipd/main.c.orig	2010-08-26 03:51:38.961153000 +0300
+++ ./avahi-autoipd/main.c	2015-01-02 15:33:56.000000000 +0200
@@ -62,8 +62,8 @@
 #include <pcap.h>
 
 /* Old versions of PCAP defined it as D_IN */
-#ifndef PCAP_D_IN
-#define PCAP_D_IN D_IN
+#ifndef D_IN
+#define D_IN PCAP_D_IN
 #endif
 
 #endif
