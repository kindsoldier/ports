--- ./tools/linguist/lrelease/main.cpp.orig	2015-05-07 16:14:39.000000000 +0200
+++ ./tools/linguist/lrelease/main.cpp	2019-03-22 13:54:51.850680000 +0200
@@ -47,6 +47,7 @@
 #ifndef QT_BOOTSTRAPPED
 #include <QtCore/QCoreApplication>
 #include <QtCore/QTranslator>
+#include <QtCore/QLibraryInfo>
 #endif
 #include <QtCore/QDebug>
 #include <QtCore/QDir>
