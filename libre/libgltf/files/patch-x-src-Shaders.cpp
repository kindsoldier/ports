--- ./src/Shaders.cpp.orig	2014-10-01 21:31:43.000000000 +0300
+++ ./src/Shaders.cpp	2019-12-25 14:15:59.048385000 +0200
@@ -175,7 +175,7 @@
         };
 
         const GLint aSizes[] = {
-            strlen("#version 130\n"),
+            static_cast<GLint>(strlen("#version 130\n")),
             iGLSize,
         };
 
