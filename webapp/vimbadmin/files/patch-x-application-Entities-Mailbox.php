--- ./application/Entities/Mailbox.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./application/Entities/Mailbox.php	2016-07-19 15:37:04.949581000 +0200
@@ -107,6 +107,12 @@
     private $size_at;
 
     /**
+     * @var \DateTime
+     */
+    private $lastlogin;
+
+
+    /**
      * Constructor
      */
     public function __construct()
@@ -587,7 +593,6 @@
     {
         list( $un, $dn ) = explode( '@', $email );
 
-        $str = str_replace ( '%atmail', substr( $email, 0, 1 ) . '/' . substr( $email, 1, 1 ) . '/' . $email, $str );
         $str = str_replace ( '%u',      $un,    $str );
         $str = str_replace ( '%d',      $dn,    $str );
         $str = str_replace ( '%m',      $email, $str );
@@ -664,6 +669,32 @@
         return $this->size_at;
     }
 
+
+
+    /**
+     * Set lastlogin
+     *
+     * @param \DateTime $sizeAt
+     * @return Mailbox
+     */
+    public function setLastLogin($lastlogin)
+    {
+        $this->size_at = $lastlogin;
+    
+        return $this;
+    }
+
+    /**
+     * Get lastlogin
+     *
+     * @return \DateTime 
+     */
+    public function getLastLogin()
+    {
+        return $this->lastlogin;
+    }
+
+
     /**
      * Clean a maildir string into a standard filesystem path
      *
@@ -680,7 +711,13 @@
         if( substr( $maildir, 0, 8 ) == 'maildir:' )
         $maildir = substr( $maildir, 8 );
 
-        if( substr( $maildir, strrpos( $maildir, ':' ) + 1, 6 ) == 'LAYOUT' )
+        if( substr( $maildir, strrpos( $maildir, ':' ) + 1, 3 ) == 'UTF' )
+        $maildir = substr( $maildir, 0, strrpos( $maildir, ':' ) );
+
+        if( substr( $maildir, strrpos( $maildir, ':' ) + 1, 5 ) == 'LAYOU' )
+        $maildir = substr( $maildir, 0, strrpos( $maildir, ':' ) );
+
+        if( substr( $maildir, strrpos( $maildir, ':' ) + 1, 3 ) == 'UTF' )
         $maildir = substr( $maildir, 0, strrpos( $maildir, ':' ) );
 
         return $maildir;
