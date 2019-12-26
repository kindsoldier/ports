--- ./src/cmsmtrx.c.orig	Fri Jul 27 13:00:02 2007
+++ ./src/cmsmtrx.c	Wed Aug 29 10:16:54 2007
@@ -799,9 +799,9 @@
 
 void VEC3scaleAndCut(LPWVEC3 r, LPVEC3 v, double d)
 {
-        r -> n[VX] = (int) floor(v -> n[VX] * d + .5);
-        r -> n[VY] = (int) floor(v -> n[VY] * d + .5);
-        r -> n[VZ] = (int) floor(v -> n[VZ] * d + .5);
+        r -> n[VX] = (icInt32Number) floor(v -> n[VX] * d + .5);
+        r -> n[VY] = (icInt32Number) floor(v -> n[VY] * d + .5);
+        r -> n[VZ] = (icInt32Number) floor(v -> n[VZ] * d + .5);
 }
 
 void MAT3scaleAndCut(LPWMAT3 r, LPMAT3 v, double d)
