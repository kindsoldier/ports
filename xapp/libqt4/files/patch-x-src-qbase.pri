--- ./src/qbase.pri.orig	2015-05-07 16:14:43.000000000 +0200
+++ ./src/qbase.pri	2019-03-22 13:54:51.817892000 +0200
@@ -166,23 +166,23 @@
 
 TARGET = $$qtLibraryTarget($$TARGET$$QT_LIBINFIX) #do this towards the end
 
-QMAKE_MOC_PC = $$[QT_INSTALL_BINS]/moc
+QMAKE_MOC_PC = $$[QT_INSTALL_BINS]/moc-qt4
 moc_dir.name = moc_location
 moc_dir.variable = QMAKE_MOC_PC
 
-QMAKE_UIC_PC = $$[QT_INSTALL_BINS]/uic
+QMAKE_UIC_PC = $$[QT_INSTALL_BINS]/uic-qt4
 uic_dir.name = uic_location
 uic_dir.variable = QMAKE_UIC_PC
 
-QMAKE_RCC_PC = $$[QT_INSTALL_BINS]/rcc
+QMAKE_RCC_PC = $$[QT_INSTALL_BINS]/rcc-qt4
 rcc_dir.name = rcc_location
 rcc_dir.variable = QMAKE_RCC_PC
 
-QMAKE_LUPDATE_PC = $$[QT_INSTALL_BINS]/lupdate
+QMAKE_LUPDATE_PC = $$[QT_INSTALL_BINS]/lupdate-qt4
 lupdate_dir.name = lupdate_location
 lupdate_dir.variable = QMAKE_LUPDATE_PC
 
-QMAKE_LRELEASE_PC = $$[QT_INSTALL_BINS]/lrelease
+QMAKE_LRELEASE_PC = $$[QT_INSTALL_BINS]/lrelease-qt4
 lrelease_dir.name = lrelease_location
 lrelease_dir.variable = QMAKE_LRELEASE_PC
 
