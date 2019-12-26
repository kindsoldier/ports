--- ./application/Repositories/Mailbox.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./application/Repositories/Mailbox.php	2016-07-19 15:37:04.954499000 +0200
@@ -47,8 +47,9 @@
     public function loadForMailboxList( $admin, $domain = null )
     {
         $qb = $this->getEntityManager()->createQueryBuilder()
+
             ->select( 'm.id as id, m.username as username, m.name as name, m.active as active, m.maildir_size as maildir_size,
-                    m.homedir_size as homedir_size, m.size_at as size_at, m.quota as quota, d.domain as domain, m.delete_pending' )
+                    m.homedir_size as homedir_size, m.size_at as size_at, m.quota as quota, d.domain as domain, m.created as created,  m.lastlogin as lastlogin, m.delete_pending' )
             ->from( '\\Entities\\Mailbox', 'm' )
             ->where( 'm.delete_pending = FALSE' )
             ->join( 'm.Domain', 'd' );
@@ -88,7 +89,7 @@
         
         $qb = $this->getEntityManager()->createQueryBuilder()
             ->select( 'm.id as id, m.username as username, m.name as name, m.active as active, m.maildir_size as maildir_size,
-                    m.homedir_size as homedir_size, m.size_at as size_at, m.quota as quota, d.domain as domain, m.delete_pending' )
+                    m.homedir_size as homedir_size, m.size_at as size_at, m.quota as quota, d.domain as domain, m.created as created, m.lastlogin as lastlogin, m.delete_pending' )
             ->from( '\\Entities\\Mailbox', 'm' )
             ->join( 'm.Domain', 'd' )
             ->where( "m.delete_pending = FALSE AND ( m.username LIKE '{$filter}%' OR m.name LIKE '{$filter}%' OR d.domain LIKE '{$filter}%' )" );
