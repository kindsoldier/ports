--- ./src/3rdparty/javascriptcore/JavaScriptCore/wtf/Platform.h.orig	2015-05-07 16:14:48.000000000 +0200
+++ ./src/3rdparty/javascriptcore/JavaScriptCore/wtf/Platform.h	2019-03-22 13:54:51.709924000 +0200
@@ -336,7 +336,6 @@
 /* CPU(MIPS) - MIPS, any version */
 #if (defined(mips) || defined(__mips__) || defined(MIPS) || defined(_MIPS_))
 #define WTF_CPU_MIPS 1
-#include <sgidefs.h>
 #if defined(__MIPSEB__)
 #define WTF_CPU_BIG_ENDIAN 1
 #endif
