--- ./src/imports/folderlistmodel/folderlistmodel.pro.orig	2015-05-07 16:14:48.000000000 +0200
+++ ./src/imports/folderlistmodel/folderlistmodel.pro	2019-03-22 13:54:51.789881000 +0200
@@ -1,5 +1,5 @@
 TARGET  = qmlfolderlistmodelplugin
-TARGETPATH = Qt/labs/folderlistmodel
+TARGETPATH = labs/folderlistmodel
 include(../qimportbase.pri)
 
 QT += declarative script
@@ -7,11 +7,13 @@
 SOURCES += qdeclarativefolderlistmodel.cpp plugin.cpp
 HEADERS += qdeclarativefolderlistmodel.h
 
+QT_INSTALL_IMPORTS = $$[QT_INSTALL_LIBS]/Qt4/imports
+
 QTDIR_build:DESTDIR = $$QT_BUILD_TREE/imports/$$TARGETPATH
-target.path = $$[QT_INSTALL_IMPORTS]/$$TARGETPATH
+target.path = $$QT_INSTALL_IMPORTS/$$TARGETPATH
 
 qmldir.files += $$PWD/qmldir
-qmldir.path +=  $$[QT_INSTALL_IMPORTS]/$$TARGETPATH
+qmldir.path +=  $$QT_INSTALL_IMPORTS/$$TARGETPATH
 
 symbian:{
     TARGET.UID3 = 0x20021320
