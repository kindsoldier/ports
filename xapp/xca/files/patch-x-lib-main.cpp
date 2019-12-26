--- ./lib/main.cpp.orig	2018-11-07 20:14:47.000000000 +0200
+++ ./lib/main.cpp	2019-03-04 13:17:26.710685000 +0200
@@ -75,11 +75,11 @@
 	setLibraryPaths(libp);
 #endif
 
-	tableFont = QFont("Courier", QApplication::font().pointSize()
+	tableFont = QFont("Monotype", QApplication::font().pointSize()
 #if defined (Q_OS_WIN32)
 	+1
 #else
-	+2
+	+0
 #endif
 	);
 	installEventFilter(this);
