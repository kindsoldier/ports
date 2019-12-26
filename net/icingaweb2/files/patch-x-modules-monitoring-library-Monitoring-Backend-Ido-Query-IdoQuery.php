--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/IdoQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/IdoQuery.php	2019-10-14 15:56:44.056029000 +0200
@@ -937,7 +937,7 @@
         } elseif ($dbType === 'pgsql') {
             $this->initializeForPostgres();
         } else {
-            $charset = $this->ds->getConfig()->get('charset') ?: 'latin1';
+            $charset = $this->ds->getConfig()->get('charset') ?: 'utf8';
             $this->customVarsJoinTemplate .= " COLLATE {$charset}_general_ci";
         }
         $this->joinBaseTables();
