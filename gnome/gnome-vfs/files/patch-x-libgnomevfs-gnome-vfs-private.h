--- ./libgnomevfs/gnome-vfs-private.h.orig	2010-02-09 14:16:14.000000000 +0200
+++ ./libgnomevfs/gnome-vfs-private.h	2015-01-05 21:19:09.000000000 +0200
@@ -28,7 +28,7 @@
 #include <glib.h>
 #include <libgnomevfs/gnome-vfs-volume-monitor.h>
 
-#define GNOME_VFS_MODULE_SUBDIR  "gnome-vfs-2.0/modules"
+#define GNOME_VFS_MODULE_SUBDIR  "gnome-vfs/modules"
 
 typedef void (*GnomeVFSDaemonForceProbeCallback) (GnomeVFSVolumeMonitor *volume_monitor);
 
