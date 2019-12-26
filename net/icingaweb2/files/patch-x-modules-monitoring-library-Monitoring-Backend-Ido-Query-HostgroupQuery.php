--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/HostgroupQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/HostgroupQuery.php	2019-10-14 15:53:03.868660000 +0200
@@ -31,8 +31,8 @@
             'host_contactgroup' => 'hcgo.name1'
         ],
         'hostgroups' => array(
-            'hostgroup'         => 'hgo.name1 COLLATE latin1_general_ci',
-            'hostgroup_alias'   => 'hg.alias COLLATE latin1_general_ci',
+            'hostgroup'         => 'hgo.name1 COLLATE utf8_unicode_ci',
+            'hostgroup_alias'   => 'hg.alias COLLATE utf8_unicode_ci',
             'hostgroup_name'    => 'hgo.name1'
         ),
         'hoststatus' => array(
