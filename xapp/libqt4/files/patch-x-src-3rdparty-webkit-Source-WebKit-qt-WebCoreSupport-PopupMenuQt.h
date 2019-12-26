--- ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/PopupMenuQt.h.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/PopupMenuQt.h	2019-03-22 13:54:51.766733000 +0200
@@ -22,6 +22,8 @@
 
 #include "PopupMenu.h"
 #include <QObject>
+#include <wtf/OwnPtr.h>
+#include <wtf/PassOwnPtr.h>
 
 class QWebSelectData;
 class QWebSelectMethod;
@@ -49,8 +51,8 @@
 
 private:
     PopupMenuClient* m_popupClient;
-    QWebSelectMethod* m_popup;
-    QWebSelectData* m_selectData;
+    OwnPtr<QWebSelectMethod> m_popup;
+    OwnPtr<QWebSelectData> m_selectData;
     const ChromeClientQt* m_chromeClient;
 };
 
