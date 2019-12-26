--- ./make/libtool.mk.orig	2014-06-08 00:06:13.000000000 +0300
+++ ./make/libtool.mk	2015-01-01 16:40:43.000000000 +0200
@@ -1,7 +1,7 @@
 # --- Required interface definitions ---
 
 # LIBTOOL needs bash
-SHELL=/bin/bash
+SHELL=/usr/local/bin/bash
 
 OBJ=o
 LOBJ=lo
@@ -125,8 +125,8 @@
 	cp qpdf/fix-qdf $(DESTDIR)$(bindir)
 	cp include/qpdf/*.h $(DESTDIR)$(includedir)/qpdf
 	cp include/qpdf/*.hh $(DESTDIR)$(includedir)/qpdf
-	cp doc/stylesheet.css $(DESTDIR)$(docdir)
-	cp doc/qpdf-manual.html $(DESTDIR)$(docdir)
-	cp doc/qpdf-manual.pdf $(DESTDIR)$(docdir)
+#	cp doc/stylesheet.css $(DESTDIR)$(docdir)
+#	cp doc/qpdf-manual.html $(DESTDIR)$(docdir)
+#	cp doc/qpdf-manual.pdf $(DESTDIR)$(docdir)
 	cp doc/*.1 $(DESTDIR)$(mandir)/man1
 	cp libqpdf.pc $(DESTDIR)$(libdir)/pkgconfig
