--- ./man/man4/makerules.mk.orig	1997-03-04 18:54:41.000000000 +0200
+++ ./man/man4/makerules.mk	2018-06-10 14:33:47.213888000 +0200
@@ -7,11 +7,11 @@
 include		$(SRCROOT)/$(RULESDIR)/rules.top
 ###########################################################################
 
-MANDIR=		man
-TARGETMAN=	makerules
-MANSECT=	$(MANSECT_FILEFORM)
-MANSUFFIX=	$(MANSUFF_FILEFORM)
-MANFILE=	makerules.4
+#MANDIR=		man
+#TARGETMAN=	makerules
+#MANSECT=	$(MANSECT_FILEFORM)
+#MANSUFFIX=	$(MANSUFF_FILEFORM)
+#MANFILE=	makerules.4
 
 ###########################################################################
 include		$(SRCROOT)/$(RULESDIR)/rules.man
