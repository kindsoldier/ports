--- ./public/js/910-vimbadmin.functions.js.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./public/js/910-vimbadmin.functions.js	2016-07-19 15:37:04.975475000 +0200
@@ -221,7 +221,7 @@
      */
     function isValidEmail( str )
     {
-        return /^([A-Za-z0-9_\-\+\.])+\@([A-Za-z0-9_\-\.])+\.([A-Za-z]{2,})$/.test( str );
+        return /^([A-Za-z0-9_\-\+\.])+\@([A-Za-z0-9_\-\.])+\.([A-Za-z]{2,4})$/.test( str );
     }
 
 
@@ -233,5 +233,5 @@
      */
     function isValidEmailDomain( str )
     {
-        return /^([A-Za-z0-9_\-\.])+\.([A-Za-z]{2,})$/.test( str );
+        return /^([A-Za-z0-9_\-\.])+\.([A-Za-z]{2,4})$/.test( str );
     }
