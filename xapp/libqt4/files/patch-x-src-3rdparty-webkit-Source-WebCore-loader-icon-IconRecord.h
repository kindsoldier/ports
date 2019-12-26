--- ./src/3rdparty/webkit/Source/WebCore/loader/icon/IconRecord.h.orig	2015-05-07 16:14:47.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebCore/loader/icon/IconRecord.h	2019-03-22 13:54:51.730286000 +0200
@@ -38,7 +38,7 @@
 #include <wtf/OwnPtr.h>
 #include <wtf/text/StringHash.h>
 
-#if OS(SOLARIS)
+#if OS(FREEBSD) || OS(SOLARIS)
 #include <sys/types.h> // For time_t structure.
 #endif
 
