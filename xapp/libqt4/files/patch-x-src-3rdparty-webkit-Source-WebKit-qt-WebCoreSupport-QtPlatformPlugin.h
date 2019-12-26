--- ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/QtPlatformPlugin.h.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/QtPlatformPlugin.h	2019-03-22 13:54:51.770606000 +0200
@@ -22,6 +22,7 @@
 #define QtPlatformPlugin_h
 
 #include <QPluginLoader>
+#include <wtf/PassOwnPtr.h>
 
 class QWebSelectMethod;
 class QWebKitPlatformPlugin;
@@ -37,15 +38,20 @@
 
 class QtPlatformPlugin {
 public:
-    QtPlatformPlugin() : m_loaded(false), m_plugin(0) {}
+    QtPlatformPlugin()
+        : m_loaded(false)
+        , m_plugin(0)
+    {
+    }
+
     ~QtPlatformPlugin();
 
-    QWebSelectMethod* createSelectInputMethod();
-    QWebNotificationPresenter* createNotificationPresenter();
-    QWebHapticFeedbackPlayer* createHapticFeedbackPlayer();
-    QWebTouchModifier* createTouchModifier();
+    PassOwnPtr<QWebSelectMethod> createSelectInputMethod();
+    PassOwnPtr<QWebNotificationPresenter> createNotificationPresenter();
+    PassOwnPtr<QWebHapticFeedbackPlayer> createHapticFeedbackPlayer();
+    PassOwnPtr<QWebTouchModifier> createTouchModifier();
 #if ENABLE(VIDEO) && USE(QT_MULTIMEDIA)
-    QWebFullScreenVideoHandler* createFullScreenVideoHandler();
+    PassOwnPtr<QWebFullScreenVideoHandler> createFullScreenVideoHandler();
 #endif
 
     QWebKitPlatformPlugin* plugin();
