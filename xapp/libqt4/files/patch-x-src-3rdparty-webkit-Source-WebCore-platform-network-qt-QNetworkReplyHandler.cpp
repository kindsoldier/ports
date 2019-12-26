--- ./src/3rdparty/webkit/Source/WebCore/platform/network/qt/QNetworkReplyHandler.cpp.orig	2015-05-07 16:14:47.000000000 +0200
+++ ./src/3rdparty/webkit/Source/WebCore/platform/network/qt/QNetworkReplyHandler.cpp	2019-03-22 13:54:51.738875000 +0200
@@ -285,7 +285,7 @@
 
     Q_ASSERT(!m_sniffer);
 
-    m_sniffer = new QtMIMETypeSniffer(m_reply, m_advertisedMIMEType, isSupportedImageType);
+    m_sniffer = adoptPtr(new QtMIMETypeSniffer(m_reply, m_advertisedMIMEType, isSupportedImageType));
 
     if (m_sniffer->isFinished()) {
         receiveSniffedMIMEType();
@@ -666,7 +666,7 @@
     if (!reply)
         return;
 
-    m_replyWrapper = new QNetworkReplyWrapper(&m_queue, reply, m_resourceHandle->shouldContentSniff() && d->m_context->mimeSniffingEnabled(), this);
+    m_replyWrapper = adoptPtr(new QNetworkReplyWrapper(&m_queue, reply, m_resourceHandle->shouldContentSniff() && d->m_context->mimeSniffingEnabled(), this));
 
     if (m_loadType == SynchronousLoad) {
         m_replyWrapper->synchronousLoad();
