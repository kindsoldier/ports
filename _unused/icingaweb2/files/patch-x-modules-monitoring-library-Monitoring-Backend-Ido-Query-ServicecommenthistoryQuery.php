--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicecommenthistoryQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicecommenthistoryQuery.php	2019-10-14 15:53:03.881171000 +0200
@@ -34,38 +34,38 @@
     protected $columnMap = array(
         'commenthistory' => array(
             'id'                    => 'sch.commenthistory_id',
-            'host'                  => 'so.name1 COLLATE latin1_general_ci',
+            'host'                  => 'so.name1 COLLATE utf8_unicode_ci',
             'host_name'             => 'so.name1',
             'object_id'             => 'sch.object_id',
             'object_type'           => '(\'service\')',
             'output'                => "('[' || sch.author_name || '] ' || sch.comment_data)",
-            'service'               => 'so.name2 COLLATE latin1_general_ci',
+            'service'               => 'so.name2 COLLATE utf8_unicode_ci',
             'service_description'   => 'so.name2',
-            'service_host'          => 'so.name1 COLLATE latin1_general_ci',
+            'service_host'          => 'so.name1 COLLATE utf8_unicode_ci',
             'service_host_name'     => 'so.name1',
             'state'                 => '(-1)',
             'timestamp'             => 'UNIX_TIMESTAMP(sch.comment_time)',
             'type'                  => "(CASE sch.entry_type WHEN 1 THEN 'comment' WHEN 2 THEN 'dt_comment' WHEN 3 THEN 'flapping' WHEN 4 THEN 'ack' END)"
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
-            'service_display_name'  => 's.display_name COLLATE latin1_general_ci'
+            'service_display_name'  => 's.display_name COLLATE utf8_unicode_ci'
         )
     );
 
