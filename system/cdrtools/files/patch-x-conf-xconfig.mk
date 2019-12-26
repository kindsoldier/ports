--- ./conf/xconfig.mk.orig	2007-10-10 16:41:08.000000000 +0300
+++ ./conf/xconfig.mk	2018-06-10 14:33:47.094905000 +0200
@@ -2,20 +2,20 @@
 ###########################################################################
 # Sample makefile for installing non-localized auxiliary files
 ###########################################################################
-SRCROOT=	..
-RULESDIR=	RULES
-include		$(SRCROOT)/$(RULESDIR)/rules.top
+#SRCROOT=	..
+#RULESDIR=	RULES
+#include		$(SRCROOT)/$(RULESDIR)/rules.top
 ###########################################################################
 
-.SEARCHLIST:	../incs/$(OARCH) ../incs/$(OARCH)
-VPATH=		../incs/$(OARCH)
+#.SEARCHLIST:	../incs/$(OARCH) ../incs/$(OARCH)
+#VPATH=		../incs/$(OARCH)
 
-INSDIR=		include/schily/$(OARCH)
-TARGET=		xconfig.h
+#INSDIR=		include/schily/$(OARCH)
+#TARGET=		xconfig.h
 #XMK_FILE=	Makefile.man
 
 ###########################################################################
-include		$(SRCROOT)/$(RULESDIR)/rules.aux
+#include		$(SRCROOT)/$(RULESDIR)/rules.aux
 ###########################################################################
 
-PTARGET=	../incs/$(OARCH)/xconfig.h
+#PTARGET=	../incs/$(OARCH)/xconfig.h
