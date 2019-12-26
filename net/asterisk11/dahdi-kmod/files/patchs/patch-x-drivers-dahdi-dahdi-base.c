--- ./drivers/dahdi/dahdi-base.c.orig	2012-09-27 22:45:03.000000000 +0300
+++ ./drivers/dahdi/dahdi-base.c	2014-09-27 21:19:40.000000000 +0300
@@ -10223,7 +10223,9 @@
 	.d_ioctl	= dahdi_device_ioctl,
 	.d_poll		= dahdi_device_poll,
 	.d_name		= "dahdi",
-#if __FreeBSD_version >= 800039
+#if __FreeBSD_version >= 1000000
+	.d_flags	= D_TRACKCLOSE | D_NEEDMINOR
+#elif __FreeBSD_version >= 800039
 	.d_flags	= D_PSEUDO | D_TRACKCLOSE | D_NEEDMINOR
 #else
 	.d_flags	= D_PSEUDO | D_TRACKCLOSE
