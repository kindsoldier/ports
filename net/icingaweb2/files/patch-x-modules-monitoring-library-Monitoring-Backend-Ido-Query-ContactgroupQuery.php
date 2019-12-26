--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ContactgroupQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ContactgroupQuery.php	2019-10-14 15:53:03.856513000 +0200
@@ -33,36 +33,36 @@
      */
     protected $columnMap = array(
         'contactgroups' => array(
-            'contactgroup'          => 'cgo.name1 COLLATE latin1_general_ci',
+            'contactgroup'          => 'cgo.name1 COLLATE utf8_unicode_ci',
             'contactgroup_name'     => 'cgo.name1',
-            'contactgroup_alias'    => 'cg.alias COLLATE latin1_general_ci'
+            'contactgroup_alias'    => 'cg.alias COLLATE utf8_unicode_ci'
         ),
         'members' => array(
             'contact_count' => 'SUM(CASE WHEN cgmo.object_id IS NOT NULL THEN 1 ELSE 0 END)'
         ),
         'hostgroups' => array(
-            'hostgroup'         => 'hgo.name1 COLLATE latin1_general_ci',
-            'hostgroup_alias'   => 'hg.alias COLLATE latin1_general_ci',
+            'hostgroup'         => 'hgo.name1 COLLATE utf8_unicode_ci',
+            'hostgroup_alias'   => 'hg.alias COLLATE utf8_unicode_ci',
             'hostgroup_name'    => 'hgo.name1'
         ),
         'hosts' => array(
-            'host'              => 'ho.name1 COLLATE latin1_general_ci',
+            'host'              => 'ho.name1 COLLATE utf8_unicode_ci',
             'host_name'         => 'ho.name1',
             'host_alias'        => 'h.alias',
-            'host_display_name' => 'h.display_name COLLATE latin1_general_ci'
+            'host_display_name' => 'h.display_name COLLATE utf8_unicode_ci'
         ),
         'instances' => array(
             'instance_name' => 'i.instance_name'
         ),
         'servicegroups' => array(
-            'servicegroup'          => 'sgo.name1 COLLATE latin1_general_ci',
+            'servicegroup'          => 'sgo.name1 COLLATE utf8_unicode_ci',
             'servicegroup_name'     => 'sgo.name1',
-            'servicegroup_alias'    => 'sg.alias COLLATE latin1_general_ci'
+            'servicegroup_alias'    => 'sg.alias COLLATE utf8_unicode_ci'
         ),
         'services' => array(
-            'service'               => 'so.name2 COLLATE latin1_general_ci',
+            'service'               => 'so.name2 COLLATE utf8_unicode_ci',
             'service_description'   => 'so.name2',
-            'service_display_name'  => 's.display_name COLLATE latin1_general_ci',
+            'service_display_name'  => 's.display_name COLLATE utf8_unicode_ci',
             'service_host_name'     => 'so.name1'
         )
     );
