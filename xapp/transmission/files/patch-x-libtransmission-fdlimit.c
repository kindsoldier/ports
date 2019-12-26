--- ./libtransmission/fdlimit.c.orig	2012-07-06 04:24:40.083657000 +0300
+++ ./libtransmission/fdlimit.c	2013-09-22 19:27:19.000000000 +0300
@@ -678,7 +678,7 @@
 
     if( gFd->peerCount < session->peerLimit )
         if(( s = socket( domain, type, 0 )) < 0 )
-            if( sockerrno != EAFNOSUPPORT )
+            if( sockerrno != EPROTONOSUPPORT )
                 tr_err( _( "Couldn't create socket: %s" ), tr_strerror( sockerrno ) );
 
     if( s > -1 )
