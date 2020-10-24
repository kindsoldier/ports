--- ./src/platformsupport/glxconvenience/qglxconvenience.cpp.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./src/platformsupport/glxconvenience/qglxconvenience.cpp	2019-03-17 19:22:28.527486000 +0200
@@ -251,6 +251,10 @@
             if (requestedAlpha && actualAlpha != requestedAlpha)
                 continue;
 
+            // avoid BGR visuals due to bugs elsewhere
+            if ((visual->red_mask & 0x1) == 0x1)
+                continue;
+
             return candidate;
         }
         if (compatibleCandidate) {
