--- ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/PopupMenuQt.cpp.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/PopupMenuQt.cpp	2019-03-22 13:54:51.764799000 +0200
@@ -82,16 +82,12 @@
 
 PopupMenuQt::PopupMenuQt(PopupMenuClient* client, const ChromeClientQt* chromeClient)
     : m_popupClient(client)
-    , m_popup(0)
-    , m_selectData(0)
     , m_chromeClient(chromeClient)
 {
 }
 
 PopupMenuQt::~PopupMenuQt()
 {
-    delete m_selectData;
-    delete m_popup;
 }
 
 void PopupMenuQt::disconnectClient()
@@ -107,21 +103,19 @@
 
     if (!m_popup) {
         m_popup = m_chromeClient->createSelectPopup();
-        connect(m_popup, SIGNAL(didHide()), this, SLOT(didHide()));
-        connect(m_popup, SIGNAL(selectItem(int, bool, bool)), this, SLOT(selectItem(int, bool, bool)));
+        connect(m_popup.get(), SIGNAL(didHide()), this, SLOT(didHide()));
+        connect(m_popup.get(), SIGNAL(selectItem(int, bool, bool)), this, SLOT(selectItem(int, bool, bool)));
     }
 
-    if (QtFallbackWebPopup* fallback = qobject_cast<QtFallbackWebPopup*>(m_popup)) {
+    if (QtFallbackWebPopup* fallback = qobject_cast<QtFallbackWebPopup*>(m_popup.get())) {
         QRect geometry(rect);
         geometry.moveTopLeft(view->contentsToWindow(rect.location()));
         fallback->setGeometry(geometry);
         fallback->setFont(m_popupClient->menuStyle().font().font());
     }
 
-    if (m_selectData)
-        delete m_selectData;
-    m_selectData = new SelectData(m_popupClient);
-    m_popup->show(*m_selectData);
+    m_selectData = adoptPtr(new SelectData(m_popupClient));
+    m_popup->show(*m_selectData.get());
 #endif
 }
 
