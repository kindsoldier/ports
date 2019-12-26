--- ./projects.pro.orig	2015-05-07 16:14:55.000000000 +0200
+++ ./projects.pro	2019-03-22 13:54:51.695067000 +0200
@@ -11,7 +11,7 @@
     symbian|integrity {
        QT_BUILD_PARTS = libs tools examples demos
     } else {
-       QT_BUILD_PARTS = libs tools examples demos docs translations
+       QT_BUILD_PARTS = libs tools translations
     }
 } else { #make sure the order makes sense
    contains(QT_BUILD_PARTS, translations) {
@@ -36,14 +36,14 @@
 for(PROJECT, $$list($$lower($$unique(QT_BUILD_PARTS)))) {
     isEqual(PROJECT, tools) {
        SUBDIRS += tools
-    } else:isEqual(PROJECT, examples) {
-       SUBDIRS += examples
-    } else:isEqual(PROJECT, demos) {
-       SUBDIRS += demos
+#    } else:isEqual(PROJECT, examples) {
+#       SUBDIRS += examples
+#    } else:isEqual(PROJECT, demos) {
+#       SUBDIRS += demos
     } else:isEqual(PROJECT, libs) {
        include(src/src.pro)
-    } else:isEqual(PROJECT, docs) {
-       contains(QT_BUILD_PARTS, tools):include(doc/doc.pri)
+#    } else:isEqual(PROJECT, docs) {
+#       contains(QT_BUILD_PARTS, tools):include(doc/doc.pri)
     } else:isEqual(PROJECT, translations) {
        !contains(QT_BUILD_PARTS, tools):!wince*:SUBDIRS += tools/linguist/lrelease
        SUBDIRS += translations
@@ -144,7 +144,7 @@
 equals(QMAKE_HOST.os, Windows) {
    qmake.files=$$QT_BUILD_TREE/bin/qmake.exe
 } else {
-   qmake.files=$$QT_BUILD_TREE/bin/qmake
+   qmake.files=$$QT_BUILD_TREE/bin/qmake-qt4
 }
 INSTALLS += qmake
 
