--- ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/QtPlatformPlugin.cpp.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/QtPlatformPlugin.cpp	2019-03-22 13:54:51.768661000 +0200
@@ -102,36 +102,35 @@
     return m_plugin;
 }
 
-QWebSelectMethod* QtPlatformPlugin::createSelectInputMethod()
+PassOwnPtr<QWebSelectMethod> QtPlatformPlugin::createSelectInputMethod()
 {
     QWebKitPlatformPlugin* p = plugin();
-    return p ? static_cast<QWebSelectMethod*>(p->createExtension(QWebKitPlatformPlugin::MultipleSelections)) : 0;
+    return adoptPtr(p ? static_cast<QWebSelectMethod*>(p->createExtension(QWebKitPlatformPlugin::MultipleSelections)) : 0);
 }
 
-
-QWebNotificationPresenter* QtPlatformPlugin::createNotificationPresenter()
+PassOwnPtr<QWebNotificationPresenter> QtPlatformPlugin::createNotificationPresenter()
 {
     QWebKitPlatformPlugin* p = plugin();
-    return p ? static_cast<QWebNotificationPresenter*>(p->createExtension(QWebKitPlatformPlugin::Notifications)) : 0;
+    return adoptPtr(p ? static_cast<QWebNotificationPresenter*>(p->createExtension(QWebKitPlatformPlugin::Notifications)) : 0);
 }
 
-QWebHapticFeedbackPlayer* QtPlatformPlugin::createHapticFeedbackPlayer()
+PassOwnPtr<QWebHapticFeedbackPlayer> QtPlatformPlugin::createHapticFeedbackPlayer()
 {
     QWebKitPlatformPlugin* p = plugin();
-    return p ? static_cast<QWebHapticFeedbackPlayer*>(p->createExtension(QWebKitPlatformPlugin::Haptics)) : 0;
+    return adoptPtr(p ? static_cast<QWebHapticFeedbackPlayer*>(p->createExtension(QWebKitPlatformPlugin::Haptics)) : 0);
 }
 
-QWebTouchModifier* QtPlatformPlugin::createTouchModifier()
+PassOwnPtr<QWebTouchModifier> QtPlatformPlugin::createTouchModifier()
 {
     QWebKitPlatformPlugin* p = plugin();
-    return p ? static_cast<QWebTouchModifier*>(p->createExtension(QWebKitPlatformPlugin::TouchInteraction)) : 0;
+    return adoptPtr(p ? static_cast<QWebTouchModifier*>(p->createExtension(QWebKitPlatformPlugin::TouchInteraction)) : 0);
 }
 
 #if ENABLE(VIDEO) && USE(QT_MULTIMEDIA)
-QWebFullScreenVideoHandler* QtPlatformPlugin::createFullScreenVideoHandler()
+PassOwnPtr<QWebFullScreenVideoHandler> QtPlatformPlugin::createFullScreenVideoHandler()
 {
     QWebKitPlatformPlugin* p = plugin();
-    return p ? static_cast<QWebFullScreenVideoHandler*>(p->createExtension(QWebKitPlatformPlugin::FullScreenVideoPlayer)) : 0;
+    return adoptPtr(p ? static_cast<QWebFullScreenVideoHandler*>(p->createExtension(QWebKitPlatformPlugin::FullScreenVideoPlayer)) : 0);
 }
 #endif
 
