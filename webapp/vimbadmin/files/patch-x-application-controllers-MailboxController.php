--- ./application/controllers/MailboxController.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./application/controllers/MailboxController.php	2016-07-19 15:37:04.960395000 +0200
@@ -272,7 +272,7 @@
 
                     // is the mailbox address valid?
                     $username = sprintf( "%s@%s", $form->getValue( 'local_part' ), $this->_domain->getDomain() );
-                    if( !Zend_Validate::is( $username, 'EmailAddress', array('domain' => FALSE) ) )
+                    if( !Zend_Validate::is( $username, 'EmailAddress', array( 1, null ) ) )
                     {
                         $form->getElement( 'local_part' )->addError( 'Invalid email address.' );
                         return;
@@ -300,8 +300,10 @@
                     $this->getMailbox()->formatMaildir( $this->_options['defaults']['mailbox']['maildir'] );
                     $this->getMailbox()->setActive( 1 );
                     $this->getMailbox()->setDeletePending( false );
+                    $this->getMailbox()->setLastLogin( new \DateTime () );
                     $this->getMailbox()->setCreated( new \DateTime () );
 
+
                     $password = $this->getMailbox()->getPassword();
                     $this->getMailbox()->setPassword(
                          OSS_Auth_Password::hash(
