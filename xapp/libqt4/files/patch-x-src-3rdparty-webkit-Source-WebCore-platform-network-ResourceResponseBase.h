--- ./src/3rdparty/webkit/Source/WebCore/platform/network/ResourceResponseBase.h.orig	2015-05-07 16:14:47.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebCore/platform/network/ResourceResponseBase.h	2019-03-22 13:54:51.740845000 +0200
@@ -35,7 +35,7 @@
 #include <wtf/PassOwnPtr.h>
 #include <wtf/RefPtr.h>
 
-#if OS(SOLARIS)
+#if OS(FREEBSD) || OS(SOLARIS)
 #include <sys/time.h> // For time_t structure.
 #endif
 
