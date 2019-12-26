--- ./src/3rdparty/webkit/Source/WebKit/qt/Api/qgraphicswebview.cpp.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/Api/qgraphicswebview.cpp	2019-03-22 13:54:51.747278000 +0200
@@ -504,7 +504,7 @@
     if (!d->page)
         return;
 
-    d->page->d->client = new PageClientQGraphicsWidget(this, page); // set the page client
+    d->page->d->client = adoptPtr(new PageClientQGraphicsWidget(this, page));
 
     if (d->overlay())
         d->overlay()->prepareGraphicsItemGeometryChange();
