--- ./src/3rdparty/webkit/Source/WebKit/qt/Api/qwebpage.cpp.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/Api/qwebpage.cpp	2019-03-22 13:54:51.750507000 +0200
@@ -1343,7 +1343,7 @@
 void QWebPagePrivate::adjustPointForClicking(QGraphicsSceneMouseEvent* ev)
 {
     QtPlatformPlugin platformPlugin;
-    QWebTouchModifier* touchModifier = platformPlugin.createTouchModifier();
+    OwnPtr<QWebTouchModifier> touchModifier = platformPlugin.createTouchModifier();
     if (!touchModifier)
         return;
 
@@ -1352,8 +1352,7 @@
     unsigned bottomPadding = touchModifier->hitTestPaddingForTouch(QWebTouchModifier::Down);
     unsigned leftPadding = touchModifier->hitTestPaddingForTouch(QWebTouchModifier::Left);
 
-    delete touchModifier;
-    touchModifier = 0;
+    touchModifier = nullptr;
 
     if (!topPadding && !rightPadding && !bottomPadding && !leftPadding)
         return;
@@ -2068,7 +2067,7 @@
     }
 
     if (view)
-        d->client = new PageClientQWidget(view, this);
+        d->client = adoptPtr(new PageClientQWidget(view, this));
 }
 
 /*!
