--- ./library/ViMbAdmin/Plugin.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./library/ViMbAdmin/Plugin.php	2016-07-19 15:37:04.973430000 +0200
@@ -70,8 +70,6 @@
         $hookfn = "{$controller}_{$action}_{$hook}";
         if( method_exists( $this, $hookfn ) )
             return $this->$hookfn( $controllerObject, $params );
-            
-        return true;
     }
 
 
