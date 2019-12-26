--- ./inc/align_test.mk.orig	2008-04-21 11:47:27.000000000 +0300
+++ ./inc/align_test.mk	2018-06-10 14:33:47.099995000 +0200
@@ -5,7 +5,8 @@
 include		$(SRCROOT)/$(RULESDIR)/rules.top
 ###########################################################################
 
-INSDIR=		include/schily/$(OARCH)
+#INSDIR=		include/schily/$(OARCH)
+#INSDIR=		include
 TARGET=		align.h
 TARGETC=	align_test
 CPPOPTS +=	-D__OPRINTF__
