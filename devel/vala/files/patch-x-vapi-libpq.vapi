--- ./vapi/libpq.vapi.orig	2011-05-29 11:58:02.000000000 +0300
+++ ./vapi/libpq.vapi	2011-11-09 17:13:33.000000000 +0300
@@ -20,7 +20,7 @@
  * 	Jukka-Pekka Iivonen <jp0409@jippii.fi>
  */
 
-[CCode (cprefix = "PQ", cheader_filename = "postgresql/libpq-fe.h")]
+[CCode (cprefix = "PQ", cheader_filename = "libpq-fe.h")]
 namespace Postgres {
 
 	[CCode (cname = "ConnStatusType", cprefix = "CONNECTION_")]
