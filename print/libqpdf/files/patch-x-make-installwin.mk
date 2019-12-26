--- ./make/installwin.mk.orig	2014-06-08 00:06:13.000000000 +0300
+++ ./make/installwin.mk	2015-01-01 16:36:46.000000000 +0200
@@ -16,6 +16,6 @@
 	cp qpdf/fix-qdf $(DEST)/bin
 	cp include/qpdf/*.h $(DEST)/include/qpdf
 	cp include/qpdf/*.hh $(DEST)/include/qpdf
-	cp doc/stylesheet.css $(DEST)/doc
-	cp doc/qpdf-manual.html $(DEST)/doc
-	cp doc/qpdf-manual.pdf $(DEST)/doc
+#	cp doc/stylesheet.css $(DEST)/doc
+#	cp doc/qpdf-manual.html $(DEST)/doc
+#	cp doc/qpdf-manual.pdf $(DEST)/doc
