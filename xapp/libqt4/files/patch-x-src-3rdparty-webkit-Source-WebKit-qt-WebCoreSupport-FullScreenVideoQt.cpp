--- ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/FullScreenVideoQt.cpp.orig	2015-05-07 16:14:45.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebKit/qt/WebCoreSupport/FullScreenVideoQt.cpp	2019-03-22 13:54:51.758636000 +0200
@@ -140,7 +140,7 @@
     Q_ASSERT(m_chromeClient);
 
 #if USE(QT_MULTIMEDIA)
-    m_FullScreenVideoHandler = m_chromeClient->m_platformPlugin.createFullScreenVideoHandler();
+    m_FullScreenVideoHandler = m_chromeClient->m_platformPlugin.createFullScreenVideoHandler().leakPtr();
     if (!m_FullScreenVideoHandler)
         m_FullScreenVideoHandler = new DefaultFullScreenVideoHandler;
 
