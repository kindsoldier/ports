--- ./libraries/libldap/tls_o.c.orig	2015-08-14 17:25:28.000000000 +0200
+++ ./libraries/libldap/tls_o.c	2015-09-23 13:55:00.891905000 +0200
@@ -475,7 +475,7 @@
 	xn = X509_get_subject_name(x);
 	der_dn->bv_len = i2d_X509_NAME( xn, NULL );
 	der_dn->bv_val = xn->bytes->data;
-	X509_free(x);
+	/* Don't X509_free, the session is still using it */
 	return 0;
 }
 
