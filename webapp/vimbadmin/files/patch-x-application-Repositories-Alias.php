--- ./application/Repositories/Alias.php.orig	2016-04-11 19:28:04.000000000 +0200
+++ ./application/Repositories/Alias.php	2016-07-19 15:37:04.953268000 +0200
@@ -97,7 +97,7 @@
     public function loadForAliasList( $admin, $domain = null, $ima = false )
     {
         $qb = $this->getEntityManager()->createQueryBuilder()
-            ->select( 'a.id as id , a.address as address, a.goto as goto, a.active as active, d.domain as domain' )
+            ->select( 'a.id as id , a.address as address, a.goto as goto, a.active as active, a.internal as internal, d.domain as domain' )
             ->from( '\\Entities\\Alias', 'a' )
             ->join( 'a.Domain', 'd' );
 
@@ -138,7 +138,7 @@
             $filter = '%' . substr( $filter, 1 );
 
         $qb = $this->getEntityManager()->createQueryBuilder()
-            ->select( 'a.id as id , a.address as address, a.goto as goto, a.active as active, d.domain as domain' )
+            ->select( 'a.id as id , a.address as address, a.goto as goto, a.active as active, a.internal as internal, d.domain as domain' )
             ->from( '\\Entities\\Alias', 'a' )
             ->join( 'a.Domain', 'd' )
             ->where( "( a.goto LIKE '{$filter}%' OR a.address LIKE '{$filter}%' OR d.domain LIKE '{$filter}%')" );
