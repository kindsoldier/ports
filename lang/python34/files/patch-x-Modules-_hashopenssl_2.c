--- Modules/_hashopenssl.c~	2019-12-25 16:54:46.745242000 +0200
+++ Modules/_hashopenssl.c	2019-12-25 16:59:43.252140000 +0200
@@ -27,6 +27,21 @@
 #include <openssl/objects.h>
 #include "openssl/err.h"
 
+struct evp_md_ctx_st {
+    const EVP_MD *digest;
+    ENGINE *engine;             /* functional reference if 'digest' is
+                                 * ENGINE-provided */
+    unsigned long flags;
+    void *md_data;
+    /* Public key context for sign/verify */
+    EVP_PKEY_CTX *pctx;
+    /* Update function: usually copied from EVP_MD */
+    int (*update) (EVP_MD_CTX *ctx, const void *data, size_t count);
+} /* EVP_MD_CTX */ ;
+
+
+
+
 #define MUNCH_SIZE INT_MAX
 
 #ifndef HASH_OBJ_CONSTRUCTOR
