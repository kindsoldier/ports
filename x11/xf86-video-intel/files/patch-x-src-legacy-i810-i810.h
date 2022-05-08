--- ./src/legacy/i810/i810.h~	2018-12-03 11:01:25.000000000 +0200
+++ ./src/legacy/i810/i810.h	2022-05-09 01:39:08.422112000 +0200
@@ -322,6 +322,6 @@
 extern const OptionInfoRec *I810AvailableOptions(int chipid, int busid);
 
 extern const int I810CopyROP[16];
-const int I810PatternROP[16];
+extern const int I810PatternROP[16];
 
 #endif /* _I810_H_ */
