--- ./src/corelib/tools/qbytearray.h.orig	2015-05-07 16:14:48.000000000 +0200
+++ ./src/corelib/tools/qbytearray.h	2019-03-22 13:54:51.775442000 +0200
@@ -107,8 +107,16 @@
 Q_CORE_EXPORT int qstrnicmp(const char *, const char *, uint len);
 
 // implemented in qvsnprintf.cpp
-Q_CORE_EXPORT int qvsnprintf(char *str, size_t n, const char *fmt, va_list ap);
-Q_CORE_EXPORT int qsnprintf(char *str, size_t n, const char *fmt, ...);
+Q_CORE_EXPORT int qvsnprintf(char *str, size_t n, const char *fmt, va_list ap)
+#if defined(Q_CC_GNU) && !defined(__INSURE__)
+        __attribute__ ((format (printf, 3, 0)))
+#endif
+    ;
+Q_CORE_EXPORT int qsnprintf(char *str, size_t n, const char *fmt, ...)
+#if defined(Q_CC_GNU) && !defined(__INSURE__)
+        __attribute__ ((format (printf, 3, 4)))
+#endif
+    ;
 
 #ifdef QT3_SUPPORT
 inline QT3_SUPPORT void *qmemmove(void *dst, const void *src, uint len)
