--- ./src/imports/shaders/shaders.pro.orig	2015-05-07 16:14:48.000000000 +0200
+++ ./src/imports/shaders/shaders.pro	2019-03-22 13:54:51.799196000 +0200
@@ -1,5 +1,5 @@
 TARGET = qmlshadersplugin
-TARGETPATH = Qt/labs/shaders
+TARGETPATH = labs/shaders
 include(../qimportbase.pri)
 
 QT += declarative opengl
@@ -21,11 +21,14 @@
     scenegraph/qsggeometry.h \
     shadereffectbuffer.h
 
+
+QT_INSTALL_IMPORTS = $$[QT_INSTALL_LIBS]/Qt4/imports
+
 QTDIR_build:DESTDIR = $$QT_BUILD_TREE/imports/$$TARGETPATH
-target.path = $$[QT_INSTALL_IMPORTS]/$$TARGETPATH
+target.path = $$QT_INSTALL_IMPORTS/$$TARGETPATH
 
 qmldir.files += $$PWD/qmldir
-qmldir.path +=  $$[QT_INSTALL_IMPORTS]/$$TARGETPATH
+qmldir.path +=  $$QT_INSTALL_IMPORTS/$$TARGETPATH
 
 symbian:{
     TARGET.UID3 = 0x20034907
@@ -36,3 +39,6 @@
 }
 
 INSTALLS += target qmldir
+
+
+
