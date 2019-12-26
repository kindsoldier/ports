--- ./tools/assistant/tools/assistant/assistant.pro.orig	2015-05-07 16:14:40.000000000 +0200
+++ ./tools/assistant/tools/assistant/assistant.pro	2019-03-22 13:54:51.832270000 +0200
@@ -1,7 +1,7 @@
 include(../../../shared/fontpanel/fontpanel.pri)
 TEMPLATE = app
 LANGUAGE = C++
-TARGET = assistant
+TARGET = assistant-qt4
 contains(QT_CONFIG, webkit):QT += webkit
 CONFIG += qt \
     warn_on \
@@ -19,6 +19,8 @@
 DEPENDPATH += .
 INCLUDEPATH += .
 
+LIBS += -lc++
+
 # ## Work around a qmake issue when statically linking to
 # ## not-yet-installed plugins
 QMAKE_LIBDIR += $$QT_BUILD_TREE/plugins/sqldrivers
