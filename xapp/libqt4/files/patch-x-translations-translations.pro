--- ./translations/translations.pro.orig	2015-05-07 16:14:39.000000000 +0200
+++ ./translations/translations.pro	2019-03-22 13:54:51.880713000 +0200
@@ -1,8 +1,8 @@
 TRANSLATIONS = $$files(*.ts)
 
-qtPrepareTool(LRELEASE, lrelease)
-qtPrepareTool(LCONVERT, lconvert)
-qtPrepareTool(LUPDATE, lupdate)
+qtPrepareTool(LRELEASE, lrelease-qt4)
+qtPrepareTool(LCONVERT, lconvert-qt4)
+qtPrepareTool(LUPDATE, lupdate-qt44)
 LUPDATE += -locations relative -no-ui-lines
 
 TS_TARGETS =
