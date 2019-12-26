--- ./src/network/ssl/qsslsocket_openssl.cpp.orig	2015-05-07 16:14:44.000000000 +0200
+++ ./src/network/ssl/qsslsocket_openssl.cpp	2019-12-24 00:11:53.856622000 +0200
@@ -93,6 +93,7 @@
 bool QSslSocketPrivate::s_loadedCiphersAndCerts = false;
 bool QSslSocketPrivate::s_loadRootCertsOnDemand = false;
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 /* \internal
 
     From OpenSSL's thread(3) manual page:
@@ -174,6 +175,8 @@
 }
 } // extern "C"
 
+#endif //OPENSSL_VERSION_NUMBER >= 0x10100000L
+
 QSslSocketBackendPrivate::QSslSocketBackendPrivate()
     : ssl(0),
       ctx(0),
@@ -222,9 +225,12 @@
             ciph.d->encryptionMethod = descriptionList.at(4).mid(4);
         ciph.d->exportable = (descriptionList.size() > 6 && descriptionList.at(6) == QLatin1String("export"));
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
         ciph.d->bits = cipher->strength_bits;
         ciph.d->supportedBits = cipher->alg_bits;
-
+#else
+	ciph.d->bits = q_SSL_CIPHER_get_bits(cipher, &ciph.d->supportedBits);
+#endif
     }
     return ciph;
 }
@@ -267,9 +273,13 @@
 #endif
         break;
     case QSsl::SslV3:
+#ifndef OPENSSL_NO_SSL3_METHOD
         ctx = q_SSL_CTX_new(client ? q_SSLv3_client_method() : q_SSLv3_server_method());
+#else
+        ctx = 0; // SSL 3 not supported by the system, but chosen deliberately -> error
+#endif
         break;
-    case QSsl::SecureProtocols: // SslV2 will be disabled below
+    case QSsl::SecureProtocols: // SslV2/3 will be disabled below
     case QSsl::TlsV1SslV3: // SslV2 will be disabled below
     case QSsl::AnyProtocol:
     default:
@@ -297,8 +307,10 @@
 
     // Enable bug workarounds.
     long options;
-    if (configuration.protocol == QSsl::TlsV1SslV3 || configuration.protocol == QSsl::SecureProtocols)
+    if (configuration.protocol == QSsl::TlsV1SslV3)
         options = SSL_OP_ALL|SSL_OP_NO_SSLv2;
+    else if (configuration.protocol == QSsl::SecureProtocols)
+        options = SSL_OP_ALL|SSL_OP_NO_SSLv2|SSL_OP_NO_SSLv3;
     else
         options = SSL_OP_ALL;
 
@@ -363,7 +375,7 @@
         //
         // See also: QSslContext::fromConfiguration()
         if (caCertificate.expiryDate() >= QDateTime::currentDateTime()) {
-            q_X509_STORE_add_cert(ctx->cert_store, (X509 *)caCertificate.handle());
+	  q_X509_STORE_add_cert(q_SSL_CTX_get_cert_store(ctx), (X509 *)caCertificate.handle());
         }
     }
 
@@ -458,8 +470,8 @@
     errorList.clear();
 
     // Initialize memory BIOs for encryption and decryption.
-    readBio = q_BIO_new(q_BIO_s_mem());
-    writeBio = q_BIO_new(q_BIO_s_mem());
+    BIO * readBio = q_BIO_new(q_BIO_s_mem());
+    BIO * writeBio = q_BIO_new(q_BIO_s_mem());
     if (!readBio || !writeBio) {
         // ### Bad error code
         q->setErrorString(QSslSocket::tr("Error creating SSL session: %1").arg(getErrorsFromOpenSsl()));
@@ -500,8 +512,10 @@
 */
 void QSslSocketPrivate::deinitialize()
 {
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
     q_CRYPTO_set_id_callback(0);
     q_CRYPTO_set_locking_callback(0);
+#endif
 }
 
 /*!
@@ -522,13 +536,17 @@
         return false;
 
     // Check if the library itself needs to be initialized.
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
     QMutexLocker locker(openssl_locks()->initLock());
+#endif
     if (!s_libraryLoaded) {
         s_libraryLoaded = true;
 
         // Initialize OpenSSL.
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
         q_CRYPTO_set_id_callback(id_function);
         q_CRYPTO_set_locking_callback(locking_function);
+#endif
         if (q_SSL_library_init() != 1)
             return false;
         q_SSL_load_error_strings();
@@ -567,7 +585,9 @@
 
 void QSslSocketPrivate::ensureCiphersAndCertsLoaded()
 {
-    QMutexLocker locker(openssl_locks()->initLock());
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
+  QMutexLocker locker(openssl_locks()->initLock());
+#endif
     if (s_loadedCiphersAndCerts)
         return;
     s_loadedCiphersAndCerts = true;
@@ -659,13 +679,18 @@
     STACK_OF(SSL_CIPHER) *supportedCiphers = q_SSL_get_ciphers(mySsl);
     for (int i = 0; i < q_sk_SSL_CIPHER_num(supportedCiphers); ++i) {
         if (SSL_CIPHER *cipher = q_sk_SSL_CIPHER_value(supportedCiphers, i)) {
-            if (cipher->valid) {
+
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
+	  if (cipher->valid) {
+#endif
                 QSslCipher ciph = QSslSocketBackendPrivate::QSslCipher_from_SSL_CIPHER(cipher);
                 if (!ciph.isNull()) {
                     if (!ciph.name().toLower().startsWith(QLatin1String("adh")))
                         ciphers << ciph;
                 }
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
             }
+#endif
         }
     }
 
