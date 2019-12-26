--- ./application/Entities/Alias.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./application/Entities/Alias.php	2016-07-19 15:37:04.948295000 +0200
@@ -26,6 +26,13 @@
      */
     private $active;
 
+
+    /**
+     * @var boolean $internal
+     */
+    private $internal;
+
+
     /**
      * @var \DateTime $created
      */
@@ -116,6 +123,31 @@
         return $this->active;
     }
 
+
+    /**
+     * Set internal
+     *
+     * @param boolean $internal
+     * @return Alias
+     */
+    public function setInternal($internal)
+    {
+        $this->internal = $internal;
+    
+        return $this;
+    }
+
+    /**
+     * Get internal
+     *
+     * @return boolean 
+     */
+    public function getInternal()
+    {
+        return $this->internal;
+    }
+
+
     /**
      * Set created
      *
