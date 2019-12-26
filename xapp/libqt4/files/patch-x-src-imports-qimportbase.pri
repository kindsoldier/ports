--- ./src/imports/qimportbase.pri.orig	2015-05-07 16:14:48.000000000 +0200
+++ ./src/imports/qimportbase.pri	2019-03-22 13:54:51.796466000 +0200
@@ -2,6 +2,8 @@
 TEMPLATE = lib
 CONFIG += qt plugin
 
+
+
 win32|mac:!wince*:!win32-msvc:!macx-xcode:CONFIG += debug_and_release
 
 isEmpty(TARGETPATH) {
@@ -34,3 +36,6 @@
     TARGET.CAPABILITY = All -Tcb
     load(armcc_warnings)
 }
+
+#QT_INSTALL_IMPORTS = $$[QT_INSTALL_LIBS]/Qt4/imports
+
