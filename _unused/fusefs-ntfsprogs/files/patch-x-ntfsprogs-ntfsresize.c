--- ./ntfsprogs/ntfsresize.c.orig	2007-09-19 19:51:09.000000000 +0300
+++ ./ntfsprogs/ntfsresize.c	2015-10-14 20:03:15.631857000 +0200
@@ -1941,6 +1941,11 @@
 		err_exit("Resident attribute in $Bitmap isn't supported!\n");
 
 	bm_bsize = nr_clusters_to_bitmap_byte_size(resize->new_volume_size);
+	if(bm_bsize % 512 != 0) {
+		s64 old_bm_bsize = bm_bsize;
+		bm_bsize = (bm_bsize + 511) / 512 * 512;
+		ntfs_log_verbose("adjusted bm_bsize: %lld->%lld\n", old_bm_bsize, bm_bsize);
+	}
 	nr_bm_clusters = rounded_up_division(bm_bsize, vol->cluster_size);
 
 	if (resize->shrink) {
