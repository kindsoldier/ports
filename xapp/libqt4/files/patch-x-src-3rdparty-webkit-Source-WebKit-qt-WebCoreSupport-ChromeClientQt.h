--- ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/ChromeClientQt.h.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/ChromeClientQt.h	2019-03-22 13:54:51.756677000 +0200
@@ -34,6 +34,7 @@
 #include "KURL.h"
 #include "PlatformString.h"
 #include "QtPlatformPlugin.h"
+#include <wtf/PassOwnPtr.h>
 #include <wtf/RefCounted.h>
 
 QT_BEGIN_NAMESPACE
@@ -190,7 +191,7 @@
     virtual PassRefPtr<SearchPopupMenu> createSearchPopupMenu(PopupMenuClient*) const;
     virtual void populateVisitedLinks();
 
-    QWebSelectMethod* createSelectPopup() const;
+    PassOwnPtr<QWebSelectMethod> createSelectPopup() const;
 
     virtual void dispatchViewportDataDidChange(const ViewportArguments&) const;
 
