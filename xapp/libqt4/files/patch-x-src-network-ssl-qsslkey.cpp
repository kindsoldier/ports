--- ./src/network/ssl/qsslkey.cpp.orig	2015-05-07 16:14:44.000000000 +0200
+++ ./src/network/ssl/qsslkey.cpp	2019-12-24 00:27:30.136226000 +0200
@@ -321,8 +321,19 @@
 {
     if (d->isNull)
         return -1;
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
     return (d->algorithm == QSsl::Rsa)
            ? q_BN_num_bits(d->rsa->n) : q_BN_num_bits(d->dsa->p);
+#else
+    if (d->algorithm == QSsl::Rsa) {
+        return q_RSA_bits(d->rsa);
+    }else{
+        BIGNUM *p = NULL;
+        q_DSA_get0_pqg(d->dsa, &p, NULL, NULL);
+	return q_BN_num_bits(p);
+    }
+#endif
+
 }
 
 /*!
@@ -364,7 +375,8 @@
     if (!QSslSocket::supportsSsl() || d->isNull)
         return QByteArray();
 
-    BIO *bio = q_BIO_new(q_BIO_s_mem());
+    const BIO_METHOD *tmp = q_BIO_s_mem();
+    BIO *bio = q_BIO_new(tmp);
     if (!bio)
         return QByteArray();
 
