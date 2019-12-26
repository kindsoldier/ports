--- ./src/corelib/global/qglobal.h.orig	2015-05-07 16:14:48.000000000 +0200
+++ ./src/corelib/global/qglobal.h	2019-03-22 13:54:51.773324000 +0200
@@ -1893,8 +1893,16 @@
 #ifdef QT3_SUPPORT
 Q_CORE_EXPORT QT3_SUPPORT void qSystemWarning(const char *msg, int code = -1);
 #endif /* QT3_SUPPORT */
-Q_CORE_EXPORT void qErrnoWarning(int code, const char *msg, ...);
-Q_CORE_EXPORT void qErrnoWarning(const char *msg, ...);
+Q_CORE_EXPORT void qErrnoWarning(int code, const char *msg, ...)
+#if defined(Q_CC_GNU) && !defined(__INSURE__)
+    __attribute__ ((format (printf, 2, 3)))
+#endif
+    ;
+Q_CORE_EXPORT void qErrnoWarning(const char *msg, ...)
+#if defined(Q_CC_GNU) && !defined(__INSURE__)
+    __attribute__ ((format (printf, 1, 2)))
+#endif
+    ;
 
 #if (defined(QT_NO_DEBUG_OUTPUT) || defined(QT_NO_TEXTSTREAM)) && !defined(QT_NO_DEBUG_STREAM)
 #define QT_NO_DEBUG_STREAM
