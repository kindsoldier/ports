--- ./libscg/scg/scgcmd.mk.orig	2008-07-07 18:58:01.000000000 +0300
+++ ./libscg/scg/scgcmd.mk	2018-06-10 14:33:47.198308000 +0200
@@ -7,11 +7,11 @@
 include		$(SRCROOT)/$(RULESDIR)/rules.top
 ###########################################################################
 
-INSDIR=		include/scg
-TARGET=		scgcmd.h
+#INSDIR=		include/scg
+#TARGET=		scgcmd.h
 #XMK_FILE=	Makefile.man
 
 ###########################################################################
-include		$(SRCROOT)/$(RULESDIR)/rules.aux
+#include		$(SRCROOT)/$(RULESDIR)/rules.aux
 ###########################################################################
 
