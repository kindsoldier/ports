--- ./application/plugins/AccessPermissions.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./application/plugins/AccessPermissions.php	2016-07-19 15:37:04.961374000 +0200
@@ -83,7 +83,7 @@
             $controller->getMailbox()->setAccessRestriction( $subform->getSelectedAccessPermissions() );
         }
         else
-            $controller->getMailbox()->setAccessRestriction( 'ALL' );
+            $controller->getMailbox()->setAccessRestriction( 'SMTP,POP3' );
     }
     
     
