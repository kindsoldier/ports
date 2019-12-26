--- ./Modules/_hashopenssl.c.orig	2019-03-18 18:51:26.000000000 +0200
+++ ./Modules/_hashopenssl.c	2019-12-25 16:22:02.398429000 +0200
@@ -36,10 +36,22 @@
 #define _OPENSSL_SUPPORTS_SHA2
 #endif
 
+#if (OPENSSL_VERSION_NUMBER < 0x10100000L) || defined(LIBRESSL_VERSION_NUMBER)
+/* OpenSSL < 1.1.0 */
+#define EVP_MD_CTX_new EVP_MD_CTX_create
+#define EVP_MD_CTX_free EVP_MD_CTX_destroy
+#define HAS_FAST_PKCS5_PBKDF2_HMAC 0
+#include <openssl/hmac.h>
+#else
+/* OpenSSL >= 1.1.0 */
+#define HAS_FAST_PKCS5_PBKDF2_HMAC 1
+#endif
+
+
 typedef struct {
     PyObject_HEAD
     PyObject            *name;  /* name of this hash algorithm */
-    EVP_MD_CTX           ctx;   /* OpenSSL message digest context */
+    EVP_MD_CTX          *ctx;   /* OpenSSL message digest context */
 #ifdef WITH_THREAD
     PyThread_type_lock   lock;  /* OpenSSL context lock */
 #endif
@@ -64,18 +76,57 @@
 #endif
 
 
+/* LCOV_EXCL_START */
+static PyObject *
+_setException(PyObject *exc)
+{
+    unsigned long errcode;
+    const char *lib, *func, *reason;
+
+    errcode = ERR_peek_last_error();
+    if (!errcode) {
+        PyErr_SetString(exc, "unknown reasons");
+        return NULL;
+    }
+    ERR_clear_error();
+
+    lib = ERR_lib_error_string(errcode);
+    func = ERR_func_error_string(errcode);
+    reason = ERR_reason_error_string(errcode);
+
+    if (lib && func) {
+        PyErr_Format(exc, "[%s: %s] %s", lib, func, reason);
+    }
+    else if (lib) {
+        PyErr_Format(exc, "[%s] %s", lib, reason);
+    }
+    else {
+        PyErr_SetString(exc, reason);
+    }
+    return NULL;
+}
+/* LCOV_EXCL_STOP */
+
 static EVPobject *
 newEVPobject(PyObject *name)
 {
     EVPobject *retval = (EVPobject *)PyObject_New(EVPobject, &EVPtype);
+    if (retval == NULL) {
+        return NULL;
+    }
 
     /* save the name for .name to return */
-    if (retval != NULL) {
-        Py_INCREF(name);
-        retval->name = name;
+    Py_INCREF(name);
+    retval->name = name;
 #ifdef WITH_THREAD
-        retval->lock = NULL;
+    retval->lock = NULL;
 #endif
+
+    retval->ctx = EVP_MD_CTX_new();
+    if (retval->ctx == NULL) {
+        Py_DECREF(retval);
+        PyErr_NoMemory();
+        return NULL;
     }
 
     return retval;
@@ -91,7 +142,7 @@
             process = MUNCH_SIZE;
         else
             process = Py_SAFE_DOWNCAST(len, Py_ssize_t, unsigned int);
-        EVP_DigestUpdate(&self->ctx, (const void*)cp, process);
+        EVP_DigestUpdate(self->ctx, (const void*)cp, process);
         len -= process;
         cp += process;
     }
@@ -106,16 +157,19 @@
     if (self->lock != NULL)
         PyThread_free_lock(self->lock);
 #endif
-    EVP_MD_CTX_cleanup(&self->ctx);
+    EVP_MD_CTX_free(self->ctx);
     Py_XDECREF(self->name);
     PyObject_Del(self);
 }
 
-static void locked_EVP_MD_CTX_copy(EVP_MD_CTX *new_ctx_p, EVPobject *self)
+static int
+locked_EVP_MD_CTX_copy(EVP_MD_CTX *new_ctx_p, EVPobject *self)
 {
+    int result;
     ENTER_HASHLIB(self);
-    EVP_MD_CTX_copy(new_ctx_p, &self->ctx);
+    result = EVP_MD_CTX_copy(new_ctx_p, self->ctx);
     LEAVE_HASHLIB(self);
+    return result;
 }
 
 /* External methods for a hash object */
@@ -131,7 +185,9 @@
     if ( (newobj = newEVPobject(self->name))==NULL)
         return NULL;
 
-    locked_EVP_MD_CTX_copy(&newobj->ctx, self);
+    if (!locked_EVP_MD_CTX_copy(newobj->ctx, self)) {
+        return _setException(PyExc_ValueError);
+    }
     return (PyObject *)newobj;
 }
 
@@ -142,16 +198,24 @@
 EVP_digest(EVPobject *self, PyObject *unused)
 {
     unsigned char digest[EVP_MAX_MD_SIZE];
-    EVP_MD_CTX temp_ctx;
+    EVP_MD_CTX *temp_ctx;
     PyObject *retval;
     unsigned int digest_size;
 
-    locked_EVP_MD_CTX_copy(&temp_ctx, self);
-    digest_size = EVP_MD_CTX_size(&temp_ctx);
-    EVP_DigestFinal(&temp_ctx, digest, NULL);
+    temp_ctx = EVP_MD_CTX_new();
+    if (temp_ctx == NULL) {
+        PyErr_NoMemory();
+        return NULL;
+    }
 
+    if (!locked_EVP_MD_CTX_copy(temp_ctx, self)) {
+        return _setException(PyExc_ValueError);
+    }
+    digest_size = EVP_MD_CTX_size(temp_ctx);
+    EVP_DigestFinal(temp_ctx, digest, NULL);
+
     retval = PyBytes_FromStringAndSize((const char *)digest, digest_size);
-    EVP_MD_CTX_cleanup(&temp_ctx);
+    EVP_MD_CTX_free(temp_ctx);
     return retval;
 }
 
@@ -162,17 +226,25 @@
 EVP_hexdigest(EVPobject *self, PyObject *unused)
 {
     unsigned char digest[EVP_MAX_MD_SIZE];
-    EVP_MD_CTX temp_ctx;
+    EVP_MD_CTX *temp_ctx;
     PyObject *retval;
     char *hex_digest;
     unsigned int i, j, digest_size;
 
+    temp_ctx = EVP_MD_CTX_new();
+    if (temp_ctx == NULL) {
+        PyErr_NoMemory();
+        return NULL;
+    }
+
     /* Get the raw (binary) digest value */
-    locked_EVP_MD_CTX_copy(&temp_ctx, self);
-    digest_size = EVP_MD_CTX_size(&temp_ctx);
-    EVP_DigestFinal(&temp_ctx, digest, NULL);
+    if (!locked_EVP_MD_CTX_copy(temp_ctx, self)) {
+        return _setException(PyExc_ValueError);
+    }
+    digest_size = EVP_MD_CTX_size(temp_ctx);
+    EVP_DigestFinal(temp_ctx, digest, NULL);
 
-    EVP_MD_CTX_cleanup(&temp_ctx);
+    EVP_MD_CTX_free(temp_ctx);
 
     /* Allocate a new buffer */
     hex_digest = PyMem_Malloc(digest_size * 2 + 1);
@@ -241,7 +313,7 @@
 EVP_get_block_size(EVPobject *self, void *closure)
 {
     long block_size;
-    block_size = EVP_MD_CTX_block_size(&self->ctx);
+    block_size = EVP_MD_CTX_block_size(self->ctx);
     return PyLong_FromLong(block_size);
 }
 
@@ -249,7 +321,7 @@
 EVP_get_digest_size(EVPobject *self, void *closure)
 {
     long size;
-    size = EVP_MD_CTX_size(&self->ctx);
+    size = EVP_MD_CTX_size(self->ctx);
     return PyLong_FromLong(size);
 }
 
@@ -475,6 +547,7 @@
 
 #define PY_PBKDF2_HMAC 1
 
+#if !HAS_FAST_PKCS5_PBKDF2_HMAC
 /* Improved implementation of PKCS5_PBKDF2_HMAC()
  *
  * PKCS5_PBKDF2_HMAC_fast() hashes the password exactly one time instead of
@@ -556,38 +629,9 @@
     HMAC_CTX_cleanup(&hctx_tpl);
     return 1;
 }
+#endif
 
-/* LCOV_EXCL_START */
-static PyObject *
-_setException(PyObject *exc)
-{
-    unsigned long errcode;
-    const char *lib, *func, *reason;
 
-    errcode = ERR_peek_last_error();
-    if (!errcode) {
-        PyErr_SetString(exc, "unknown reasons");
-        return NULL;
-    }
-    ERR_clear_error();
-
-    lib = ERR_lib_error_string(errcode);
-    func = ERR_func_error_string(errcode);
-    reason = ERR_reason_error_string(errcode);
-
-    if (lib && func) {
-        PyErr_Format(exc, "[%s: %s] %s", lib, func, reason);
-    }
-    else if (lib) {
-        PyErr_Format(exc, "[%s] %s", lib, reason);
-    }
-    else {
-        PyErr_SetString(exc, reason);
-    }
-    return NULL;
-}
-/* LCOV_EXCL_STOP */
-
 PyDoc_STRVAR(pbkdf2_hmac__doc__,
 "pbkdf2_hmac(hash_name, password, salt, iterations, dklen=None) -> key\n\
 \n\
@@ -668,10 +712,17 @@
     key = PyBytes_AS_STRING(key_obj);
 
     Py_BEGIN_ALLOW_THREADS
+#if HAS_FAST_PKCS5_PBKDF2_HMAC
+    retval = PKCS5_PBKDF2_HMAC((char*)password.buf, (int)password.len,
+                               (unsigned char *)salt.buf, (int)salt.len,
+                               iterations, digest, dklen,
+                               (unsigned char *)key);
+#else
     retval = PKCS5_PBKDF2_HMAC_fast((char*)password.buf, (int)password.len,
                                     (unsigned char *)salt.buf, (int)salt.len,
                                     iterations, digest, dklen,
                                     (unsigned char *)key);
+#endif
     Py_END_ALLOW_THREADS
 
     if (!retval) {
@@ -873,6 +924,13 @@
 
     Py_INCREF((PyObject *)&EVPtype);
     PyModule_AddObject(m, "HASH", (PyObject *)&EVPtype);
+
+#define INIT_CONSTRUCTOR_CONSTANTS(NAME)  \
+    do { \
+        if (init_constructor_constant(&cached_info_ ## NAME, #NAME) < 0) { \
+            return NULL; \
+        } \
+    } while (0);
 
     /* these constants are used by the convenience constructors */
     INIT_CONSTRUCTOR_CONSTANTS(md5);
