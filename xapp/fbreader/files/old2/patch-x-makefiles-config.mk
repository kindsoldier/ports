--- ./makefiles/config.mk.orig	2014-01-05 20:17:25.000000000 +0300
+++ ./makefiles/config.mk	2014-01-05 23:06:47.000000000 +0300
@@ -20,7 +21,10 @@
 XML_LIBS ?= -lexpat
 ARCHIVER_LIBS ?= -lz -lbz2
 
+ZLSHARED = no
+
 CFLAGS += -DINSTALLDIR=\"$(INSTALLDIR_MACRO)\" -DBASEDIR=\"$(SHAREDIR_MACRO)\" -DLIBDIR=\"$(LIBDIR_MACRO)\" -DIMAGEDIR=\"$(IMAGEDIR_MACRO)\" -DAPPIMAGEDIR=\"$(APPIMAGEDIR_MACRO)\" -DVERSION=\"$(VERSION)\"
+
 ifeq "$(ZLSHARED)" "yes"
   CFLAGS += -fPIC -DZLSHARED
 endif
@@ -38,7 +42,7 @@
 
 ZINCLUDE = -I $(ROOTDIR)/zlibrary/core/include -I $(ROOTDIR)/zlibrary/text/include
 
-ZLSHARED ?= yes
+CFLAGS+= $(ZINCLUDE)
 
 ifeq "$(ZLSHARED)" "yes"
   CORE_LIBS = -lm -L$(ROOTDIR)/zlibrary/core -lzlcore
@@ -47,6 +51,7 @@
 else
   CORE_LIBS = -lm -L$(ROOTDIR)/zlibrary/ui -L$(ROOTDIR)/zlibrary/core -lzlcore -lzlui -lzlcore $(UILIBS) $(XML_LIBS) $(ARCHIVER_LIBS)
 	TEXT_LIBS = -L$(ROOTDIR)/zlibrary/text -lzltext $(EXTERNAL_LIBS) -lunibreak -lfribidi
+	ZLUI_LIB = -L$(ROOTDIR)/zlibrary/ui -lzlui
 endif
 
 ifneq "$(BUILD_RESOURCE_OBJECT)" "yes"
