--- ./src/3rdparty/webkit/Source/WebCore/html/HTMLImageElement.cpp.orig	2015-05-07 16:14:47.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebCore/html/HTMLImageElement.cpp	2019-03-22 13:54:51.727777000 +0200
@@ -74,7 +74,7 @@
     RefPtr<HTMLImageElement> image = adoptRef(new HTMLImageElement(imgTag, document));
     if (optionalWidth)
         image->setWidth(*optionalWidth);
-    if (optionalHeight > 0)
+    if (optionalHeight)
         image->setHeight(*optionalHeight);
     return image.release();
 }
