--- ./makefiles/arch/desktop.mk.orig	2012-11-30 15:41:25.000000000 +0300
+++ ./makefiles/arch/desktop.mk	2015-02-12 19:43:05.000000000 +0200
@@ -1,10 +1,11 @@
 include $(ROOTDIR)/makefiles/arch/unix.mk
 
 ifeq "$(INSTALLDIR)" ""
-  INSTALLDIR=/usr
+  INSTALLDIR=/usr/local
 endif
+
 IMAGEDIR = $(INSTALLDIR)/share/pixmaps
-APPIMAGEDIR = $(INSTALLDIR)/share/pixmaps/%APPLICATION_NAME%
+APPIMAGEDIR = $(INSTALLDIR)/share/pixmaps/FBReader
 
 
 CCACHE = $(shell if which ccache > /dev/null; then echo "ccache"; fi) #if ccache is not installed, do not use it
@@ -12,8 +13,8 @@
 AR = ar rsu
 LD = g++
 
-CFLAGS = -pipe -fno-exceptions -Wall -Wno-ctor-dtor-privacy -W -DLIBICONV_PLUG
-LDFLAGS =
+CFLAGS = -pipe -fno-exceptions -Wall -Wno-ctor-dtor-privacy -W -DLIBICONV_PLUG -DDO_ICONV_CAST -DLIBICONV_PLUG
+LDFLAGS = -L/usr/local/lib -liconv
 EXTERNAL_INCLUDE = $(shell pkg-config --cflags fribidi) 
 
 ifeq "$(UI_TYPE)" "qt"
@@ -24,7 +25,7 @@
   QTINCLUDE = -I $(shell pkg-config --cflags QtCore)
 endif
 
-GTKINCLUDE = $(shell pkg-config --cflags gtk+-2.0 libpng xft)
+GTKINCLUDE = $(shell pkg-config --cflags gtk+ libpng xft)
 
 ifeq "$(UI_TYPE)" "qt"
   UILIBS = -lqt-mt
@@ -35,7 +36,7 @@
 endif
 
 ifeq "$(UI_TYPE)" "gtk"
-  UILIBS = $(shell pkg-config --libs gtk+-2.0 gio-2.0) -lpng -ljpeg
+  UILIBS = $(shell pkg-config --libs gtk+ gio) -lpng -ljpeg
 endif
 
 RM = rm -rvf
