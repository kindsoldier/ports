--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/HostdowntimestarthistoryQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/HostdowntimestarthistoryQuery.php	2019-10-14 15:53:03.866625000 +0200
@@ -34,7 +34,7 @@
     protected $columnMap = array(
         'downtimehistory' => array(
             'id'            => 'hdh.downtimehistory_id',
-            'host'          => 'ho.name1 COLLATE latin1_general_ci',
+            'host'          => 'ho.name1 COLLATE utf8_unicode_ci',
             'host_name'     => 'ho.name1',
             'object_id'     => 'hdh.object_id',
             'object_type'   => '(\'host\')',
@@ -44,26 +44,26 @@
             'type'          => "('dt_start')"
         ),
         'hostgroups' => array(
-            'hostgroup'         => 'hgo.name1 COLLATE latin1_general_ci',
-            'hostgroup_alias'   => 'hg.alias COLLATE latin1_general_ci',
+            'hostgroup'         => 'hgo.name1 COLLATE utf8_unicode_ci',
+            'hostgroup_alias'   => 'hg.alias COLLATE utf8_unicode_ci',
             'hostgroup_name'    => 'hgo.name1'
         ),
         'hosts' => array(
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
