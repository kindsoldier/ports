--- ./security/nss/lib/util/secasn1d.c.orig	2017-05-08 11:24:51.272918000 +0200
+++ ./security/nss/lib/util/secasn1d.c	2017-05-08 11:26:11.340634000 +0200
@@ -1608,25 +1608,25 @@
 	}
         offset = item->len;
         if (state->underlying_kind == SEC_ASN1_BIT_STRING) {
-            // The previous bit string must have no unused bits.
+            /* The previous bit string must have no unused bits. */
             if (item->len & 0x7) {
                 PORT_SetError (SEC_ERROR_BAD_DER);
                 state->top->status = decodeError;
                 return 0;
             }
-            // If this is a bit string, the length is bits, not bytes.
+            /* If this is a bit string, the length is bits, not bytes. */
             offset = item->len >> 3;
         }
         if (state->underlying_kind == SEC_ASN1_BIT_STRING) {
             unsigned long len_in_bits;
-            // Protect against overflow during the bytes-to-bits conversion.
+            /* Protect against overflow during the bytes-to-bits conversion. */
             if (len >= (ULONG_MAX >> 3) + 1) {
                 PORT_SetError (SEC_ERROR_BAD_DER);
                 state->top->status = decodeError;
                 return 0;
             }
             len_in_bits = (len << 3) - state->bit_string_unused_bits;
-            // Protect against overflow when computing the total length in bits.
+            /* Protect against overflow when computing the total length in bits. */
             if (UINT_MAX - item->len < len_in_bits) {
                 PORT_SetError (SEC_ERROR_BAD_DER);
                 state->top->status = decodeError;
