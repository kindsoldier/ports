--- ./sysdep/bsd/sysio.h.orig	2016-04-29 11:13:23.000000000 +0200
+++ ./sysdep/bsd/sysio.h	2016-08-08 00:32:20.671386000 +0200
@@ -9,6 +9,9 @@
 #include <net/if_dl.h>
 #include <netinet/in_systm.h> // Workaround for some BSDs
 #include <netinet/ip.h>
+#ifdef __FreeBSD__
+#include <sys/param.h> // FreeBSD_version definition
+#endif
 
 
 #ifdef __NetBSD__
@@ -175,8 +178,8 @@
   ip->ip_src = ipa_to_in4(s->saddr);
   ip->ip_dst = ipa_to_in4(s->daddr);
 
-#ifdef __OpenBSD__
-  /* OpenBSD expects ip_len in network order, other BSDs expect host order */
+#if defined __OpenBSD__ || (defined __FreeBSD__ && (__FreeBSD_version >= 1100030))
+  /* OpenBSD and FreeBSD (since 11) expects ip_len in network order, other BSDs expect host order */
   ip->ip_len = htons(ip->ip_len);
 #endif
 }
