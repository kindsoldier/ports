--- ./library/ViMbAdmin/Form/Admin/AddEdit.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./library/ViMbAdmin/Form/Admin/AddEdit.php	2016-07-19 15:37:04.971344000 +0200
@@ -64,7 +64,6 @@
         $username->addValidator( new OSS_Validate_OSSDoctrine2Uniqueness( array( 'entity' => '\\Entities\\Admin', 'property' => 'username' ) ), true );
 
         $password = OSS_Form_Auth::createPasswordElement();
-        $password->setAttrib( 'autocomplete', 'off' );
 
         $active = $this->createElement( 'checkbox', 'active' )
             ->setLabel( _( 'Active' ) )
