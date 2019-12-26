--- ./mozilla/security/nss/lib/softoken/config.mk.orig	2015-01-09 06:38:13.000000000 +0200
+++ ./mozilla/security/nss/lib/softoken/config.mk	2015-10-25 14:15:17.685499000 +0200
@@ -10,6 +10,9 @@
 	$(CRYPTOLIB) \
 	$(NULL)
 
+INCLUDES += -I/usr/local/include
+
+
 # can't do this in manifest.mn because OS_TARGET isn't defined there.
 ifeq (,$(filter-out WIN%,$(OS_TARGET)))
 
@@ -20,6 +23,8 @@
 RES = $(OBJDIR)/$(LIBRARY_NAME).res
 RESNAME = $(LIBRARY_NAME).rc
 
+
+
 ifdef NS_USE_GCC
 EXTRA_SHARED_LIBS += \
 	-L$(DIST)/lib \
@@ -30,6 +35,7 @@
 	-lplc4 \
 	-lplds4 \
 	-lnspr4 \
+	-L/usr/local/lib \
 	$(NULL)
 else # ! NS_USE_GCC
 
@@ -55,6 +61,7 @@
 	-lplc4 \
 	-lplds4 \
 	-lnspr4 \
+	-L/usr/local/lib \
 	$(NULL)
 endif
 
