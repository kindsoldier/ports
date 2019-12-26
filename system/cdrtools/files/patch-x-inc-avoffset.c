--- ./inc/avoffset.c.orig	2011-11-28 22:28:41.000000000 +0300
+++ ./inc/avoffset.c	2018-06-10 14:33:47.103021000 +0200
@@ -60,7 +60,7 @@
 {
 	int		stdir;
 #ifdef	HAVE_SCANSTACK
-	register struct frame *fp;
+	volatile struct frame *fp;
 	register int	i = 0;
 	register int	o = 0;
 
