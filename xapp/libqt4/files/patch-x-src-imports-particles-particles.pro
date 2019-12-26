--- ./src/imports/particles/particles.pro.orig	2015-05-07 16:14:48.000000000 +0200
+++ ./src/imports/particles/particles.pro	2019-03-22 13:54:51.793626000 +0200
@@ -1,21 +1,21 @@
 TARGET  = qmlparticlesplugin
-TARGETPATH = Qt/labs/particles
+TARGETPATH = labs/particles
 include(../qimportbase.pri)
 
-QT += declarative
+QT += declarative script
 
-SOURCES += \
-    qdeclarativeparticles.cpp \
-    particles.cpp
+SOURCES += qdeclarativeparticles.cpp particles.cpp
+HEADERS += qdeclarativeparticles_p.h
 
-HEADERS += \
-    qdeclarativeparticles_p.h
+
+QT_INSTALL_IMPORTS = $$[QT_INSTALL_LIBS]/Qt4/imports
 
 QTDIR_build:DESTDIR = $$QT_BUILD_TREE/imports/$$TARGETPATH
-target.path = $$[QT_INSTALL_IMPORTS]/$$TARGETPATH
+target.path = $$QT_INSTALL_IMPORTS/$$TARGETPATH
 
 qmldir.files += $$PWD/qmldir
-qmldir.path +=  $$[QT_INSTALL_IMPORTS]/$$TARGETPATH
+qmldir.path +=  $$QT_INSTALL_IMPORTS/$$TARGETPATH
+
 
 symbian:{
     TARGET.UID3 = 0x2002131E
