--- ./src/testlib/qtest_global.h.orig	2015-05-07 16:14:48.000000000 +0200
+++ ./src/testlib/qtest_global.h	2019-03-22 13:54:51.820837000 +0200
@@ -82,7 +82,11 @@
     enum SkipMode { SkipSingle = 1, SkipAll = 2 };
     enum TestFailMode { Abort = 1, Continue = 2 };
 
-    int Q_TESTLIB_EXPORT qt_snprintf(char *str, int size, const char *format, ...);
+    int Q_TESTLIB_EXPORT qt_snprintf(char *str, int size, const char *format, ...)
+#if defined(Q_CC_GNU) && !defined(__INSURE__)
+        __attribute__ ((format (printf, 3, 4)))
+#endif
+        ;
 }
 
 QT_END_NAMESPACE
