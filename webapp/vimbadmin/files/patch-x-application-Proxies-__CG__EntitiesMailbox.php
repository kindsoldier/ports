--- ./application/Proxies/__CG__EntitiesMailbox.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./application/Proxies/__CG__EntitiesMailbox.php	2016-07-19 15:37:04.952168000 +0200
@@ -64,10 +64,10 @@
     public function __sleep()
     {
         if ($this->__isInitialized__) {
-            return array('__isInitialized__', 'username', 'password', 'name', 'alt_email', 'quota', 'local_part', 'active', 'access_restriction', 'homedir', 'maildir', 'uid', 'gid', 'created', 'modified', 'id', 'Preferences', 'homedir_size', 'maildir_size', 'size_at', 'Domain', 'DirectoryEntry', 'delete_pending', '_className', '_preferenceClassName', '_cache', '_namespace');
+            return array('__isInitialized__', 'lastlogin', 'username', 'password', 'name', 'alt_email', 'quota', 'local_part', 'active', 'access_restriction', 'homedir', 'maildir', 'uid', 'gid', 'created', 'modified', 'id', 'Preferences', 'homedir_size', , 'maildir_size', 'size_at',  'Domain', 'DirectoryEntry', 'delete_pending', '_className', '_preferenceClassName', '_cache', '_namespace');
         }
 
-        return array('__isInitialized__', 'username', 'password', 'name', 'alt_email', 'quota', 'local_part', 'active', 'access_restriction', 'homedir', 'maildir', 'uid', 'gid', 'created', 'modified', 'id', 'Preferences', 'homedir_size', 'maildir_size', 'size_at', 'Domain', 'DirectoryEntry', 'delete_pending', '_className', '_preferenceClassName', '_cache', '_namespace');
+        return array('__isInitialized__', 'lastlogin', 'username', 'password', 'name', 'alt_email', 'quota', 'local_part', 'active', 'access_restriction', 'homedir', 'maildir', 'uid', 'gid', 'created', 'modified', 'id', 'Preferences', 'homedir_size', 'maildir_size', 'size_at', 'Domain', 'DirectoryEntry', 'delete_pending', '_className', '_preferenceClassName', '_cache', '_namespace');
     }
 
     /**
@@ -661,6 +661,30 @@
         return parent::getSizeAt();
     }
 
+
+    /**
+     * {@inheritDoc}
+     */
+    public function setLastLogin($lastlogin)
+    {
+
+        $this->__initializer__ && $this->__initializer__->__invoke($this, 'setLastLogin', array($lastlogin));
+
+        return parent::setLastLogin($lastlogin);
+    }
+
+    /**
+     * {@inheritDoc}
+     */
+    public function getLastLogin()
+    {
+
+        $this->__initializer__ && $this->__initializer__->__invoke($this, 'getLastLogin', array());
+
+        return parent::getLastLogin();
+    }
+
+
     /**
      * {@inheritDoc}
      */
