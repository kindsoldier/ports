--- ./include/lcms.h.orig	Fri Jul 27 13:00:01 2007
+++ ./include/lcms.h	Wed Aug 29 10:16:54 2007
@@ -47,7 +47,13 @@
 
 // Uncomment this one if you are using big endian machines (only meaningful
 // when NON_WINDOWS is used)
-// #define USE_BIG_ENDIAN   1
+
+#include <sys/endian.h>
+#if BYTE_ORDER == BIG_ENDIAN
+#      define USE_BIG_ENDIAN   1
+#elif BYTE_ORDER != LITTLE_ENDIAN
+#      error "Unexpected BYTE_ORDER on this architecture"
+#endif
 
 // Uncomment this one if your compiler/machine does support the
 // "long long" type This will speedup fixed point math. (USE_C only)
