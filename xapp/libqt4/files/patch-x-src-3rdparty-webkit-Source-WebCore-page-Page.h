--- ./src/3rdparty/webkit/Source/WebCore/page/Page.h.orig	2015-05-07 16:14:46.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebCore/page/Page.h	2019-03-22 13:54:51.732540000 +0200
@@ -29,7 +29,7 @@
 #include <wtf/HashSet.h>
 #include <wtf/Noncopyable.h>
 
-#if OS(SOLARIS)
+#if OS(FREEBSD) || OS(SOLARIS)
 #include <sys/time.h> // For time_t structure.
 #endif
 
