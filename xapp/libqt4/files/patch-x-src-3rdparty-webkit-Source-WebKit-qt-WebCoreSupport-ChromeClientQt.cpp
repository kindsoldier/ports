--- ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/ChromeClientQt.cpp.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/ChromeClientQt.cpp	2019-03-22 13:54:51.754694000 +0200
@@ -702,18 +702,18 @@
 } 
 #endif
 
-QWebSelectMethod* ChromeClientQt::createSelectPopup() const
+PassOwnPtr<QWebSelectMethod> ChromeClientQt::createSelectPopup() const
 {
-    QWebSelectMethod* result = m_platformPlugin.createSelectInputMethod();
+    OwnPtr<QWebSelectMethod> result = m_platformPlugin.createSelectInputMethod();
     if (result)
-        return result;
+        return result.release();
 
 #if defined(Q_WS_MAEMO_5)
-    return new QtMaemoWebPopup;
+    return adoptPtr(new QtMaemoWebPopup);
 #elif !defined(QT_NO_COMBOBOX)
-    return new QtFallbackWebPopup(this);
+    return adoptPtr(new QtFallbackWebPopup(this));
 #else
-    return 0;
+    return nullptr;
 #endif
 }
 
