--- ./library/ViMbAdmin/Form/Mailbox/AddEdit.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./library/ViMbAdmin/Form/Mailbox/AddEdit.php	2016-07-19 15:37:04.972438000 +0200
@@ -94,7 +94,6 @@
             ->setLabel( _( 'Password' ) )
             ->setAttrib( 'title', _( 'Password' ) )
             ->setAttrib( 'size', 40 )
-            ->setAttrib( 'autocomplete', 'off' )
             ->setRequired( true )
             ->addValidator( 'NotEmpty', true )
             ->addValidator( 'StringLength', true, array( $this->getMinPasswordLength(), 255 ) )
@@ -162,11 +161,6 @@
     public function setMinPasswordLength( $len )
     {
         $this->minPasswordLength = $len;
-
-        if( $this->getElement( 'password' ) ) {
-            $this->getElement( 'password' )->getValidator( 'StringLength' )->setMin( $len );
-        }
-        
         return $this;
     }
 
