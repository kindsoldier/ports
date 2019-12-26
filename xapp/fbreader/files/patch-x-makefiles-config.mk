--- ./makefiles/config.mk.orig	2012-11-30 15:41:25.000000000 +0300
+++ ./makefiles/config.mk	2015-10-26 05:06:29.073905000 +0200
@@ -20,7 +20,10 @@
 XML_LIBS ?= -lexpat
 ARCHIVER_LIBS ?= -lz -lbz2
 
+ZLSHARED = no
+
 CFLAGS += -DINSTALLDIR=\"$(INSTALLDIR_MACRO)\" -DBASEDIR=\"$(SHAREDIR_MACRO)\" -DLIBDIR=\"$(LIBDIR_MACRO)\" -DIMAGEDIR=\"$(IMAGEDIR_MACRO)\" -DAPPIMAGEDIR=\"$(APPIMAGEDIR_MACRO)\" -DVERSION=\"$(VERSION)\"
+
 ifeq "$(ZLSHARED)" "yes"
   CFLAGS += -fPIC -DZLSHARED
 endif
@@ -38,7 +41,7 @@
 
 ZINCLUDE = -I $(ROOTDIR)/zlibrary/core/include -I $(ROOTDIR)/zlibrary/text/include
 
-ZLSHARED ?= yes
+CFLAGS+= $(ZINCLUDE)
 
 ifeq "$(ZLSHARED)" "yes"
   CORE_LIBS = -lm -L$(ROOTDIR)/zlibrary/core -lzlcore
@@ -46,7 +49,8 @@
 	ZLUI_LIB = -L$(ROOTDIR)/zlibrary/ui -lzlui
 else
   CORE_LIBS = -lm -L$(ROOTDIR)/zlibrary/ui -L$(ROOTDIR)/zlibrary/core -lzlcore -lzlui -lzlcore $(UILIBS) $(XML_LIBS) $(ARCHIVER_LIBS)
-	TEXT_LIBS = -L$(ROOTDIR)/zlibrary/text -lzltext $(EXTERNAL_LIBS) -lunibreak -lfribidi
+	TEXT_LIBS = -L$(ROOTDIR)/zlibrary/text -lzltext $(EXTERNAL_LIBS) -llinebreak -lfribidi
+	ZLUI_LIB = -L$(ROOTDIR)/zlibrary/ui -lzlui
 endif
 
 ifneq "$(BUILD_RESOURCE_OBJECT)" "yes"
