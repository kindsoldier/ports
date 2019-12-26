--- ./src/network/ssl/qsslcontext_openssl.cpp.orig	2019-01-28 19:11:52.000000000 +0200
+++ ./src/network/ssl/qsslcontext_openssl.cpp	2019-03-17 19:22:28.520279000 +0200
@@ -249,7 +249,7 @@
     if (sslContext->sslConfiguration.backendConfiguration().isEmpty())
         return;
 
-#if OPENSSL_VERSION_NUMBER >= 0x10002000L
+#if OPENSSL_VERSION_NUMBER >= 0x10002000L && !defined(LIBRESSL_VERSION_NUMBER)
     if (QSslSocket::sslLibraryVersionNumber() >= 0x10002000L) {
         QSharedPointer<SSL_CONF_CTX> cctx(q_SSL_CONF_CTX_new(), &q_SSL_CONF_CTX_free);
         if (cctx) {
