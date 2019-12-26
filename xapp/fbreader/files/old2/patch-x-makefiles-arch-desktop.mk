--- ./makefiles/arch/desktop.mk.orig	2014-01-05 20:17:25.000000000 +0300
+++ ./makefiles/arch/desktop.mk	2014-01-05 23:28:29.000000000 +0300
@@ -1,8 +1,9 @@
 include $(ROOTDIR)/makefiles/arch/unix.mk
 
 ifeq "$(INSTALLDIR)" ""
-  INSTALLDIR=/usr
+  INSTALLDIR=/usr/local
 endif
+
 IMAGEDIR = $(INSTALLDIR)/share/pixmaps
 APPIMAGEDIR = $(INSTALLDIR)/share/pixmaps/%APPLICATION_NAME%
 
@@ -9,7 +10,7 @@
 
 AR = ar rsu
 
-CFLAGS = -fomit-frame-pointer -O2 -pipe -march=pentium4 -I/usr/local/include -fno-strict-aliasing -DDO_ICONV_CAST -DLIBICONV_PLUG
+CFLAGS = -fomit-frame-pointer -O2 -pipe -march=pentium4  -I/usr/local/include   -I/usr/local/include/Qt4 -fno-strict-aliasing -DDO_ICONV_CAST -DLIBICONV_PLUG
 EXTERNAL_INCLUDE = $(shell pkg-config --cflags fribidi) 
 
 ifeq "$(UI_TYPE)" "qt"
@@ -20,7 +21,7 @@
   QTINCLUDE = -I
 endif
 
-GTKINCLUDE = $(shell pkg-config --cflags gtk+-2.0 libpng15 xft)
+GTKINCLUDE = $(shell pkg-config --cflags gtk+ libpng xft)
 
 ifeq "$(UI_TYPE)" "qt"
   UILIBS = -lqt-mt
@@ -31,7 +32,7 @@
 endif
 
 ifeq "$(UI_TYPE)" "gtk"
-  UILIBS = $(shell pkg-config --libs gtk+-2.0 gio-2.0) -lpng -ljpeg
+  UILIBS = $(shell pkg-config --libs gtk+ gio) -lpng -ljpeg
 endif
 
 RM = rm -rvf
