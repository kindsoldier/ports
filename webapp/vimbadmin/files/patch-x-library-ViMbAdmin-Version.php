--- ./library/ViMbAdmin/Version.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./library/ViMbAdmin/Version.php	2016-07-19 15:37:04.974429000 +0200
@@ -46,7 +46,7 @@
     /**
      * Version identification - see compareVersion()
      */
-    const VERSION = '3.0.15';
+    const VERSION = '3.0.12';
 
     /**
      * Database schema version
@@ -95,7 +95,7 @@
             $handle = fopen( 'http://www.opensolutions.ie/open-source/vimbadmin/latest-v3', 'r' );
             if( $handle !== false )
             {
-                self::$_lastestVersion = preg_replace( "/[^0-9\.]/", "", trim( stream_get_contents( $handle, 12 ) ) );
+                self::$_lastestVersion = trim( stream_get_contents( $handle ) );
                 fclose( $handle );
             }
         }
