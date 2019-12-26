--- ./src/3rdparty/webkit/Source/WebKit/qt/QtWebKit.pro.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/QtWebKit.pro	2019-03-22 13:54:51.752592000 +0200
@@ -84,7 +84,7 @@
 }
 
 moduleFile=$$PWD/qt_webkit_version.pri
-isEmpty(QT_BUILD_TREE):include($$moduleFile)
+include($$moduleFile)
 VERSION = $${QT_WEBKIT_MAJOR_VERSION}.$${QT_WEBKIT_MINOR_VERSION}.$${QT_WEBKIT_PATCH_VERSION}
 
 symbian {
