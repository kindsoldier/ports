--- ./ntfsprogs/ntfsclone.c.orig	2007-09-19 19:51:09.000000000 +0300
+++ ./ntfsprogs/ntfsclone.c	2015-10-14 20:03:15.621787000 +0200
@@ -1416,9 +1416,9 @@
 
 static int device_offset_valid(int fd, s64 ofs)
 {
-	char ch;
+	char ch[512];
 
-	if (lseek(fd, ofs, SEEK_SET) >= 0 && read(fd, &ch, 1) == 1)
+	if (lseek(fd, ofs, SEEK_SET) >= 0 && read(fd, &ch, 512) > 0)
 		return 0;
 	return -1;
 }
