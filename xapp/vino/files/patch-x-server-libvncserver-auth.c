--- ./server/libvncserver/auth.c.orig	2011-05-02 19:07:11.000000000 +0300
+++ ./server/libvncserver/auth.c	2016-03-29 12:41:48.826715000 +0200
@@ -64,13 +64,14 @@
 static rfbBool
 rfbAuthTLSHandshake(rfbClientPtr cl)
 {
-    static const int kx_priority[] = { GNUTLS_KX_ANON_DH, 0 };
     int              err;
+    static const char kx_priority[] = "NORMAL:+ANON-DH";
     
     gnutls_init(&cl->tlsSession, GNUTLS_SERVER);
 
     gnutls_set_default_priority(cl->tlsSession);
-    gnutls_kx_set_priority(cl->tlsSession, kx_priority);
+
+    gnutls_priority_set_direct(cl->tlsSession, kx_priority, NULL);
 
     gnutls_credentials_set(cl->tlsSession,
 			   GNUTLS_CRD_ANON,
@@ -78,6 +79,7 @@
     gnutls_transport_set_ptr(cl->tlsSession, (gnutls_transport_ptr_t) cl->sock);
 
     err = gnutls_handshake(cl->tlsSession);
+
     if (err != GNUTLS_E_SUCCESS && !gnutls_error_is_fatal(err)) {
 	cl->state = RFB_TLS_HANDSHAKE;
 	return FALSE;
