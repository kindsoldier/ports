--- ./application/Proxies/__CG__EntitiesAlias.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./application/Proxies/__CG__EntitiesAlias.php	2016-07-19 15:37:04.950784000 +0200
@@ -64,10 +64,10 @@
     public function __sleep()
     {
         if ($this->__isInitialized__) {
-            return array('__isInitialized__', 'address', 'goto', 'active', 'created', 'modified', 'id', 'Domain', 'Preferences', '_className', '_preferenceClassName', '_cache', '_namespace');
+            return array('__isInitialized__', 'address', 'goto', 'active', 'internal', 'created', 'modified', 'id', 'Domain', 'Preferences', '_className', '_preferenceClassName', '_cache', '_namespace');
         }
 
-        return array('__isInitialized__', 'address', 'goto', 'active', 'created', 'modified', 'id', 'Domain', 'Preferences', '_className', '_preferenceClassName', '_cache', '_namespace');
+        return array('__isInitialized__', 'address', 'goto', 'active', 'internal', 'created', 'modified', 'id', 'Domain', 'Preferences', '_className', '_preferenceClassName', '_cache', '_namespace');
     }
 
     /**
@@ -239,6 +239,30 @@
         return parent::getActive();
     }
 
+
+    /**
+     * {@inheritDoc}
+     */
+    public function setInternal($internal)
+    {
+
+        $this->__initializer__ && $this->__initializer__->__invoke($this, 'setInternal', array($internal));
+
+        return parent::setInternal($internal);
+    }
+
+    /**
+     * {@inheritDoc}
+     */
+    public function getInternal()
+    {
+
+        $this->__initializer__ && $this->__initializer__->__invoke($this, 'getInternal', array());
+
+        return parent::getInternal();
+    }
+
+
     /**
      * {@inheritDoc}
      */
