--- ./application/controllers/AliasController.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./application/controllers/AliasController.php	2016-07-19 15:37:04.957442000 +0200
@@ -271,6 +271,7 @@
 
                     $this->getAlias()->setDomain( $this->getDomain() );
                     $this->getAlias()->setActive( 1 );
+                    $this->getAlias()->setInternal( 1 );
 
                     if( !$this->_setAddress( $form ) )
                         return;
@@ -316,7 +317,6 @@
         if( !$this->getAlias() )
             print 'ko';
 
-        if($this->notify( 'alias', 'toggleActive', 'preToggle', $this, [ 'active' => $this->getAlias()->getActive() ]) === true) {
             $this->getAlias()->setActive( !$this->getAlias()->getActive() );
             $this->getAlias()->setModified( new \DateTime() );
 
@@ -327,9 +327,28 @@
             $this->notify( 'alias', 'toggleActive', 'preflush', $this, [ 'active' => $this->getAlias()->getActive() ] );
             $this->getD2EM()->flush();
             $this->notify( 'alias', 'toggleActive', 'postflush', $this, [ 'active' => $this->getAlias()->getActive() ] );
-        } else {
-            print 'ko';
+        print 'ok';
         }
+
+
+    /**
+     * Toggles the active property of an alias. Prints 'ok' on success or 'ko' otherwise to stdout.
+     */
+    public function ajaxToggleInternalAction()
+    {
+        if( !$this->getAlias() )
+            print 'ko';
+
+        $this->getAlias()->setInternal( !$this->getAlias()->getInternal() );
+        $this->getAlias()->setModified( new \DateTime() );
+
+        $this->log(
+            $this->getAlias()->getInternal() ? \Entities\Log::ACTION_ALIAS_ACTIVATE : \Entities\Log::ACTION_ALIAS_DEACTIVATE,
+            "{$this->getAdmin()->getFormattedName()} " . ( $this->getAlias()->getInternal() ? 'activated' : 'deactivated' ) . " alias {$this->getAlias()->getAddress()}"
+        );
+        $this->notify( 'alias', 'toggleInternal', 'preflush', $this, [ 'internal' => $this->getAlias()->getInternal() ] );
+        $this->getD2EM()->flush();
+        $this->notify( 'alias', 'toggleInternal', 'postflush', $this, [ 'internal' => $this->getAlias()->getInternal() ] );
         print 'ok';
     }
 
@@ -345,7 +364,7 @@
         foreach( $this->getAlias()->getPreferences() as $pref )
                 $this->getD2EM()->remove( $pref );
 
-        if( $this->notify( 'alias', 'delete', 'preRemove', $this ) !== false ) {
+        $this->notify( 'alias', 'delete', 'preRemove', $this );
             $this->getD2EM()->remove( $this->getAlias() );
             if( $this->getAlias()->getAddress() != $this->getAlias()->getGoto() )
                 $this->getDomain()->setAliasCount( $this->getDomain()->getAliasCount() - 1 );
@@ -360,7 +379,6 @@
             $this->notify( 'alias', 'delete', 'postFlush', $this );
 
             $this->addMessage( 'Alias has bean removed successfully', OSS_Message::SUCCESS );
-        }
         $this->redirect( 'alias/list' );
     }
 
@@ -396,7 +414,7 @@
                     unset( $gotos[ $key ] );
                 else
                 {
-                    if( substr( $goto, 0, 1 ) != '@' && !Zend_Validate::is( $goto, 'EmailAddress', array('domain' => FALSE) ) )
+                    if( substr( $goto, 0, 1 ) != '@' && !Zend_Validate::is( $goto, 'EmailAddress', array( 1, null ) ) )
                     {
                         $form->getElement( 'goto' )->addError( 'Invalid email address(es).' );
                         return false;
@@ -431,7 +449,7 @@
         $address = sprintf( "%s@%s", $form->getValue( 'local_part'), $this->getDomain()->getDomain() );
 
         // is the alias valid (allowing for wildcard domains (i.e. with no local part)
-        if( $form->getValue( "local_part" ) &&  !Zend_Validate::is( "{$address}", 'EmailAddress', array('domain' => FALSE) ) )
+        if( $form->getValue( "local_part" ) &&  !Zend_Validate::is( "{$address}", 'EmailAddress', array( 1, null ) ) )
         {
             $form->getElement( 'local_part' )->addError( _( 'Invalid email address.' ) );
             return false;
