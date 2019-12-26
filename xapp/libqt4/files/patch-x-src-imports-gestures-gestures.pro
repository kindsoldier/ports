--- ./src/imports/gestures/gestures.pro.orig	2015-05-07 16:14:48.000000000 +0200
+++ ./src/imports/gestures/gestures.pro	2019-03-22 13:54:51.791760000 +0200
@@ -1,17 +1,21 @@
 TARGET  = qmlgesturesplugin
-TARGETPATH = Qt/labs/gestures
+TARGETPATH = labs/gestures
 include(../qimportbase.pri)
 
-QT += declarative
+QT += declarative script
+
 
 SOURCES += qdeclarativegesturearea.cpp plugin.cpp
 HEADERS += qdeclarativegesturearea_p.h
 
+QT_INSTALL_IMPORTS = $$[QT_INSTALL_LIBS]/Qt4/imports
+
 QTDIR_build:DESTDIR = $$QT_BUILD_TREE/imports/$$TARGETPATH
-target.path = $$[QT_INSTALL_IMPORTS]/$$TARGETPATH
+target.path = $$QT_INSTALL_IMPORTS/$$TARGETPATH
 
 qmldir.files += $$PWD/qmldir
-qmldir.path +=  $$[QT_INSTALL_IMPORTS]/$$TARGETPATH
+qmldir.path +=  $$QT_INSTALL_IMPORTS/$$TARGETPATH
+
 
 symbian:{
     TARGET.UID3 = 0x2002131F
@@ -24,3 +28,4 @@
 }
 
 INSTALLS += target qmldir
+
