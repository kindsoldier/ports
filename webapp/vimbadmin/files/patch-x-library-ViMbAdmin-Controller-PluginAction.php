--- ./library/ViMbAdmin/Controller/PluginAction.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./library/ViMbAdmin/Controller/PluginAction.php	2016-07-19 15:37:04.970399000 +0200
@@ -166,12 +166,8 @@
      */
     public function notify( $controller, $action, $hook, OSS_Controller_Action $controllerObject, $params = null )
     {
-        foreach( $this->observers as $o ) {
-            if( $o->update( $controller, $action, $hook, $controllerObject, $params ) === false ) {
-                return false;
-            }
-        }
-        return true;
+        foreach( $this->observers as $o )
+            $o->update( $controller, $action, $hook, $controllerObject, $params );
     }
 
     /**
