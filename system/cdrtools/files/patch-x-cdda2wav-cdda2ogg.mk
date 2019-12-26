--- ./cdda2wav/cdda2ogg.mk.orig	2010-02-11 01:40:15.000000000 +0200
+++ ./cdda2wav/cdda2ogg.mk	2018-06-10 14:33:47.083698000 +0200
@@ -5,11 +5,11 @@
 include		$(SRCROOT)/$(RULESDIR)/rules.top
 ###########################################################################
 
-INSDIR=		bin
-INSMODE=	755
-TARGET=		cdda2ogg
-SCRFILE=	cdda2ogg
-XMK_FILE=	cdda2ogg.mk1
+#INSDIR=		bin
+#INSMODE=	755
+#TARGET=		cdda2ogg
+#SCRFILE=	cdda2ogg
+#XMK_FILE=	cdda2ogg.mk1
 
 ###########################################################################
 include		$(SRCROOT)/$(RULESDIR)/rules.scr
