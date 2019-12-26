--- ./src/network/socket/qnet_unix_p.h.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./src/network/socket/qnet_unix_p.h	2019-03-17 19:22:28.518667000 +0200
@@ -71,6 +71,12 @@
 #  include <resolv.h>
 #endif
 
+#if defined(Q_OS_FREEBSD)
+#  include <net/if.h>
+#  include <net/if_types.h>
+#  include <net/if_var.h>
+#endif 
+
 QT_BEGIN_NAMESPACE
 
 // Almost always the same. If not, specify in qplatformdefs.h.
