--- ./Modules/_ssl.c.orig	2019-03-18 18:51:26.000000000 +0200
+++ ./Modules/_ssl.c	2019-12-25 16:22:02.402671000 +0200
@@ -55,6 +55,14 @@
 #include <sys/poll.h>
 #endif
 
+/* Don't warn about deprecated functions */
+#ifdef __GNUC__
+#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
+#endif
+#ifdef __clang__
+#pragma clang diagnostic ignored "-Wdeprecated-declarations"
+#endif
+
 /* Include OpenSSL header files */
 #include "openssl/rsa.h"
 #include "openssl/crypto.h"
@@ -90,6 +98,10 @@
 /* Include generated data (error codes) */
 #include "_ssl_data.h"
 
+#if (OPENSSL_VERSION_NUMBER >= 0x10100000L) && !defined(LIBRESSL_VERSION_NUMBER)
+#  define OPENSSL_VERSION_1_1 1
+#endif
+
 /* Openssl comes with TLSv1.1 and TLSv1.2 between 1.0.0h and 1.0.1
     http://www.openssl.org/news/changelog.html
  */
@@ -108,6 +120,72 @@
 # define HAVE_SNI 0
 #endif
 
+#ifdef TLSEXT_TYPE_application_layer_protocol_negotiation
+# define HAVE_ALPN
+#endif
+
+#ifndef INVALID_SOCKET /* MS defines this */
+#define INVALID_SOCKET (-1)
+#endif
+
+#ifdef OPENSSL_VERSION_1_1
+/* OpenSSL 1.1.0+ */
+#ifndef OPENSSL_NO_SSL2
+#define OPENSSL_NO_SSL2
+#endif
+#else /* OpenSSL < 1.1.0 */
+#if defined(WITH_THREAD)
+#define HAVE_OPENSSL_CRYPTO_LOCK
+#endif
+
+static int X509_NAME_ENTRY_set(const X509_NAME_ENTRY *ne)
+{
+    return ne->set;
+}
+
+#ifndef OPENSSL_NO_COMP
+static int COMP_get_type(const COMP_METHOD *meth)
+{
+    return meth->type;
+}
+
+static const char *COMP_get_name(const COMP_METHOD *meth)
+{
+    return meth->name;
+}
+#endif
+
+static pem_password_cb *SSL_CTX_get_default_passwd_cb(SSL_CTX *ctx)
+{
+    return ctx->default_passwd_callback;
+}
+
+static void *SSL_CTX_get_default_passwd_cb_userdata(SSL_CTX *ctx)
+{
+    return ctx->default_passwd_callback_userdata;
+}
+
+static int X509_OBJECT_get_type(X509_OBJECT *x)
+{
+    return x->type;
+}
+
+static X509 *X509_OBJECT_get0_X509(X509_OBJECT *x)
+{
+    return x->data.x509;
+}
+
+static STACK_OF(X509_OBJECT) *X509_STORE_get0_objects(X509_STORE *store) {
+    return store->objs;
+}
+
+static X509_VERIFY_PARAM *X509_STORE_get0_param(X509_STORE *store)
+{
+    return store->param;
+}
+#endif /* OpenSSL < 1.1.0 or LibreSSL */
+
+
 enum py_ssl_error {
     /* these mirror ssl.h */
     PY_SSL_ERROR_NONE,
@@ -691,7 +769,7 @@
 
         /* check to see if we've gotten to a new RDN */
         if (rdn_level >= 0) {
-            if (rdn_level != entry->set) {
+            if (rdn_level != X509_NAME_ENTRY_set(entry)) {
                 /* yes, new RDN */
                 /* add old RDN to DN */
                 rdnt = PyList_AsTuple(rdn);
@@ -708,7 +786,7 @@
                     goto fail0;
             }
         }
-        rdn_level = entry->set;
+        rdn_level = X509_NAME_ENTRY_set(entry);
 
         /* now add this attribute to the current RDN */
         name = X509_NAME_ENTRY_get_object(entry);
@@ -811,18 +889,18 @@
             goto fail;
         }
 
-        p = ext->value->data;
+        p = X509_EXTENSION_get_data(ext)->data;
         if (method->it)
             names = (GENERAL_NAMES*)
               (ASN1_item_d2i(NULL,
                              &p,
-                             ext->value->length,
+                             X509_EXTENSION_get_data(ext)->length,
                              ASN1_ITEM_ptr(method->it)));
         else
             names = (GENERAL_NAMES*)
               (method->d2i(NULL,
                            &p,
-                           ext->value->length));
+                           X509_EXTENSION_get_data(ext)->length));
 
         for(j = 0; j < sk_GENERAL_NAME_num(names); j++) {
             /* get a rendering of each name in the set of names */
@@ -1033,13 +1111,11 @@
     int i, j;
     PyObject *lst, *res = NULL;
 
-#if OPENSSL_VERSION_NUMBER < 0x10001000L
-    dps = X509_get_ext_d2i(certificate, NID_crl_distribution_points, NULL, NULL);
-#else
+#if OPENSSL_VERSION_NUMBER >= 0x10001000L
     /* Calls x509v3_cache_extensions and sets up crldp */
     X509_check_ca(certificate);
-    dps = certificate->crldp;
 #endif
+    dps = X509_get_ext_d2i(certificate, NID_crl_distribution_points, NULL, NULL);
 
     if (dps == NULL)
         return Py_None;
@@ -1431,9 +1507,9 @@
     if (self->ssl == NULL)
         Py_RETURN_NONE;
     comp_method = SSL_get_current_compression(self->ssl);
-    if (comp_method == NULL || comp_method->type == NID_undef)
+    if (comp_method == NULL || COMP_get_type(comp_method) == NID_undef)
         Py_RETURN_NONE;
-    short_name = OBJ_nid2sn(comp_method->type);
+    short_name = COMP_get_name(comp_method);
     if (short_name == NULL)
         Py_RETURN_NONE;
     return PyUnicode_DecodeFSDefault(short_name);
@@ -2051,8 +2127,9 @@
 #ifndef OPENSSL_NO_ECDH
     /* Allow automatic ECDH curve selection (on OpenSSL 1.0.2+), or use
        prime256v1 by default.  This is Apache mod_ssl's initialization
-       policy, so we should be safe. */
-#if defined(SSL_CTX_set_ecdh_auto)
+       policy, so we should be safe. OpenSSL 1.1 has it enabled by default.
+     */
+#if defined(SSL_CTX_set_ecdh_auto) && !defined(OPENSSL_VERSION_1_1)
     SSL_CTX_set_ecdh_auto(self->ctx, 1);
 #else
     {
@@ -2263,10 +2340,12 @@
 get_verify_flags(PySSLContext *self, void *c)
 {
     X509_STORE *store;
+    X509_VERIFY_PARAM *param;
     unsigned long flags;
 
     store = SSL_CTX_get_cert_store(self->ctx);
-    flags = X509_VERIFY_PARAM_get_flags(store->param);
+    param = X509_STORE_get0_param(store);
+    flags = X509_VERIFY_PARAM_get_flags(param);
     return PyLong_FromUnsignedLong(flags);
 }
 
@@ -2274,22 +2353,24 @@
 set_verify_flags(PySSLContext *self, PyObject *arg, void *c)
 {
     X509_STORE *store;
+    X509_VERIFY_PARAM *param;
     unsigned long new_flags, flags, set, clear;
 
     if (!PyArg_Parse(arg, "k", &new_flags))
         return -1;
     store = SSL_CTX_get_cert_store(self->ctx);
-    flags = X509_VERIFY_PARAM_get_flags(store->param);
+    param = X509_STORE_get0_param(store);
+    flags = X509_VERIFY_PARAM_get_flags(param);
     clear = flags & ~new_flags;
     set = ~flags & new_flags;
     if (clear) {
-        if (!X509_VERIFY_PARAM_clear_flags(store->param, clear)) {
+        if (!X509_VERIFY_PARAM_clear_flags(param, clear)) {
             _setSSLError(NULL, 0, __FILE__, __LINE__);
             return -1;
         }
     }
     if (set) {
-        if (!X509_VERIFY_PARAM_set_flags(store->param, set)) {
+        if (!X509_VERIFY_PARAM_set_flags(param, set)) {
             _setSSLError(NULL, 0, __FILE__, __LINE__);
             return -1;
         }
@@ -2459,8 +2540,8 @@
     char *kwlist[] = {"certfile", "keyfile", "password", NULL};
     PyObject *certfile, *keyfile = NULL, *password = NULL;
     PyObject *certfile_bytes = NULL, *keyfile_bytes = NULL;
-    pem_password_cb *orig_passwd_cb = self->ctx->default_passwd_callback;
-    void *orig_passwd_userdata = self->ctx->default_passwd_callback_userdata;
+    pem_password_cb *orig_passwd_cb = SSL_CTX_get_default_passwd_cb(self->ctx);
+    void *orig_passwd_userdata = SSL_CTX_get_default_passwd_cb_userdata(self->ctx);
     _PySSLPasswordInfo pw_info = { NULL, NULL, NULL, 0, 0 };
     int r;
 
@@ -2591,8 +2672,9 @@
             cert = d2i_X509_bio(biobuf, NULL);
         } else {
             cert = PEM_read_bio_X509(biobuf, NULL,
-                                     self->ctx->default_passwd_callback,
-                                     self->ctx->default_passwd_callback_userdata);
+                                     SSL_CTX_get_default_passwd_cb(self->ctx),
+                                     SSL_CTX_get_default_passwd_cb_userdata(self->ctx)
+                                    );
         }
         if (cert == NULL) {
             break;
@@ -3040,25 +3122,24 @@
 cert_store_stats(PySSLContext *self)
 {
     X509_STORE *store;
+    STACK_OF(X509_OBJECT) *objs;
     X509_OBJECT *obj;
-    int x509 = 0, crl = 0, pkey = 0, ca = 0, i;
+    int x509 = 0, crl = 0, ca = 0, i;
 
     store = SSL_CTX_get_cert_store(self->ctx);
-    for (i = 0; i < sk_X509_OBJECT_num(store->objs); i++) {
-        obj = sk_X509_OBJECT_value(store->objs, i);
-        switch (obj->type) {
+    objs = X509_STORE_get0_objects(store);
+    for (i = 0; i < sk_X509_OBJECT_num(objs); i++) {
+        obj = sk_X509_OBJECT_value(objs, i);
+        switch (X509_OBJECT_get_type(obj)) {
             case X509_LU_X509:
                 x509++;
-                if (X509_check_ca(obj->data.x509)) {
+                if (X509_check_ca(X509_OBJECT_get0_X509(obj))) {
                     ca++;
                 }
                 break;
             case X509_LU_CRL:
                 crl++;
                 break;
-            case X509_LU_PKEY:
-                pkey++;
-                break;
             default:
                 /* Ignore X509_LU_FAIL, X509_LU_RETRY, X509_LU_PKEY.
                  * As far as I can tell they are internal states and never
@@ -3083,6 +3164,7 @@
 {
     char *kwlist[] = {"binary_form", NULL};
     X509_STORE *store;
+    STACK_OF(X509_OBJECT) *objs;
     PyObject *ci = NULL, *rlist = NULL;
     int i;
     int binary_mode = 0;
@@ -3097,17 +3179,18 @@
     }
 
     store = SSL_CTX_get_cert_store(self->ctx);
-    for (i = 0; i < sk_X509_OBJECT_num(store->objs); i++) {
+    objs = X509_STORE_get0_objects(store);
+    for (i = 0; i < sk_X509_OBJECT_num(objs); i++) {
         X509_OBJECT *obj;
         X509 *cert;
 
-        obj = sk_X509_OBJECT_value(store->objs, i);
-        if (obj->type != X509_LU_X509) {
+        obj = sk_X509_OBJECT_value(objs, i);
+        if (X509_OBJECT_get_type(obj) != X509_LU_X509) {
             /* not a x509 cert */
             continue;
         }
         /* CA for any purpose */
-        cert = obj->data.x509;
+        cert = X509_OBJECT_get0_X509(obj);
         if (!X509_check_ca(cert)) {
             continue;
         }
@@ -3780,10 +3863,12 @@
 };
 
 
-#ifdef WITH_THREAD
+#ifdef HAVE_OPENSSL_CRYPTO_LOCK
 
 /* an implementation of OpenSSL threading operations in terms
-   of the Python C thread library */
+ * of the Python C thread library
+ * Only used up to 1.0.2. OpenSSL 1.1.0+ has its own locking code.
+ */
 
 static PyThread_type_lock *_ssl_locks = NULL;
 
@@ -3864,7 +3949,7 @@
     return 1;
 }
 
-#endif  /* def HAVE_THREAD */
+#endif  /* HAVE_OPENSSL_CRYPTO_LOCK for WITH_THREAD && OpenSSL < 1.1.0 */
 
 PyDoc_STRVAR(module_doc,
 "Implementation module for SSL socket operations.  See the socket module\n\
@@ -3931,11 +4016,16 @@
     SSL_load_error_strings();
     SSL_library_init();
 #ifdef WITH_THREAD
+#ifdef HAVE_OPENSSL_CRYPTO_LOCK
     /* note that this will start threading if not already started */
     if (!_setup_ssl_threads()) {
         return NULL;
     }
+#elif OPENSSL_VERSION_1_1 && defined(OPENSSL_THREADS)
+    /* OpenSSL 1.1.0 builtin thread support is enabled */
+    _ssl_locks_count++;
 #endif
+#endif  /* WITH_THREAD */
     OpenSSL_add_all_algorithms();
 
     /* Add symbols to module dict */
