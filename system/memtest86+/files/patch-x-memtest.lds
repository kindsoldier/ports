--- ./memtest.lds.orig	2013-08-10 05:01:58.000000000 +0300
+++ ./memtest.lds	2018-03-28 08:48:10.757464000 +0200
@@ -3,7 +3,7 @@
 
 ENTRY(_start); 
 SECTIONS {
-	. = 0x10000;
+	. = 0xc0120000;
 	_start = . ;
 	.data : {
 		*(.data)
