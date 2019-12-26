--- ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/InspectorClientQt.cpp.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/InspectorClientQt.cpp	2019-03-22 13:54:51.760747000 +0200
@@ -203,8 +203,9 @@
 void InspectorClientQt::openInspectorFrontend(WebCore::InspectorController* inspectorController)
 {
 #if ENABLE(INSPECTOR)
-    QWebView* inspectorView = new QWebView;
-    InspectorClientWebPage* inspectorPage = new InspectorClientWebPage(inspectorView);
+    OwnPtr<QWebView> inspectorView = adoptPtr(new QWebView);
+    // FIXME: Where does inspectorPage get deleted?
+    InspectorClientWebPage* inspectorPage = new InspectorClientWebPage(inspectorView.get());
     inspectorView->setPage(inspectorPage);
 
     QWebInspector* inspector = m_inspectedWebPage->d->getOrCreateInspector();
@@ -229,11 +230,14 @@
         inspectorPage->setProperty("_q_inspectorJavaScriptWindowObjects", inspectorJavaScriptWindowObjects);
 #endif
     inspectorView->page()->mainFrame()->load(inspectorUrl);
-    m_inspectedWebPage->d->inspectorFrontend = inspectorView;
-    inspector->d->setFrontend(inspectorView);
+    m_inspectedWebPage->d->inspectorFrontend = inspectorView.get();
+    inspector->d->setFrontend(inspectorView.get());
 
-    m_frontendClient = new InspectorFrontendClientQt(m_inspectedWebPage, inspectorView, this);
-    inspectorView->page()->d->page->inspectorController()->setInspectorFrontendClient(m_frontendClient);
+    // Is 'controller' the same object as 'inspectorController' (which appears to be unused)?
+    InspectorController* controller = inspectorView->page()->d->page->inspectorController();
+    OwnPtr<InspectorFrontendClientQt> frontendClient = adoptPtr(new InspectorFrontendClientQt(m_inspectedWebPage, inspectorView.release(), this));
+    m_frontendClient = frontendClient.get();
+    controller->setInspectorFrontendClient(frontendClient.release());
     m_frontendWebPage = inspectorPage;
 #endif
 }
@@ -297,7 +301,7 @@
 
 #if ENABLE(INSPECTOR)
 InspectorFrontendClientQt::InspectorFrontendClientQt(QWebPage* inspectedWebPage, PassOwnPtr<QWebView> inspectorView, InspectorClientQt* inspectorClient)
-    : InspectorFrontendClientLocal(inspectedWebPage->d->page->inspectorController(), inspectorView->page()->d->page, new InspectorFrontendSettingsQt())
+    : InspectorFrontendClientLocal(inspectedWebPage->d->page->inspectorController(), inspectorView->page()->d->page, adoptPtr(new InspectorFrontendSettingsQt()))
     , m_inspectedWebPage(inspectedWebPage)
     , m_inspectorView(inspectorView)
     , m_destroyingInspectorView(false)
