--- ./tests/tests.pro.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./tests/tests.pro	2019-03-17 19:22:28.535049000 +0200
@@ -2,8 +2,8 @@
 CONFIG += no_docs_target
 requires(qtHaveModule(testlib))
 
-SUBDIRS = auto
+#SUBDIRS = auto
 
 # benchmarks in debug mode is rarely sensible
 # benchmarks are not sensible for code coverage (here with tool testcocoon)
-!uikit:!testcocoon:contains(QT_CONFIG, release): SUBDIRS += benchmarks
+#!uikit:!testcocoon:contains(QT_CONFIG, release): SUBDIRS += benchmarks
