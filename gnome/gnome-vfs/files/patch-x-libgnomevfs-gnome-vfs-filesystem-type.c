--- ./libgnomevfs/gnome-vfs-filesystem-type.c.orig	2010-02-09 14:16:14.000000000 +0200
+++ ./libgnomevfs/gnome-vfs-filesystem-type.c	2015-01-05 21:19:08.000000000 +0200
@@ -70,6 +70,7 @@
 	{ "nfs"      , N_("NFS Network Volume"), 1 },
 	{ "ntfs"     , N_("Windows NT Volume"), 0 },
 	{ "ntfs-3g"  , N_("Windows NT Volume"), 1 },
+	{ "nullfs"   , N_("BSD Loopback Volume"), 1 },
 	{ "nilfs2"   , N_("NILFS Linux Volume"), 1 },
 	{ "nwfs"     , N_("Netware Volume"), 0 },
 	{ "proc"     , N_("System Volume"), 0 },
@@ -90,6 +91,7 @@
 	{ "xenix"    , N_("Xenix Volume"), 0 },
 	{ "xfs"      , N_("XFS Linux Volume"), 1 },
 	{ "xiafs"    , N_("XIAFS Volume"), 0 },
+	{ "zfs"      , N_("ZFS Volume"), 1 },
 	{ "cifs"     , N_("CIFS Volume"), 1 },
 };
 
