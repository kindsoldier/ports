--- ./application/controllers/ArchiveController.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./application/controllers/ArchiveController.php	2016-07-19 15:37:04.958934000 +0200
@@ -879,7 +879,6 @@
         $mailbox->setGid( $params['gid'] );
         $mailbox->setHomedirSize( $params['homedir_size'] );
         $mailbox->setMaildirSize( $params['maildir_size'] );
-        $mailbox->setDeletePending( $params['delete_pending'] );
         $mailbox->setCreated( new \DateTime( $params['created']['date'] ) );
         $mailbox->setSizeAt( new \DateTime( $params['size_at']['date'] ) );
         $mailbox->setModified( new \DateTime() );
