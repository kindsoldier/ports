--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicedowntimeQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicedowntimeQuery.php	2019-10-14 15:53:03.883816000 +0200
@@ -33,7 +33,7 @@
      */
     protected $columnMap = array(
         'downtimes' => array(
-            'downtime_author'           => 'sd.author_name COLLATE latin1_general_ci',
+            'downtime_author'           => 'sd.author_name COLLATE utf8_unicode_ci',
             'downtime_author_name'      => 'sd.author_name',
             'downtime_comment'          => 'sd.comment_data',
             'downtime_duration'         => 'sd.duration',
@@ -48,22 +48,22 @@
             'downtime_scheduled_start'  => 'UNIX_TIMESTAMP(sd.scheduled_start_time)',
             'downtime_start'            => 'UNIX_TIMESTAMP(CASE WHEN UNIX_TIMESTAMP(sd.trigger_time) > 0 then sd.trigger_time ELSE sd.scheduled_start_time END)',
             'downtime_triggered_by_id'  => 'sd.triggered_by_id',
-            'host'                      => 'so.name1 COLLATE latin1_general_ci',
+            'host'                      => 'so.name1 COLLATE utf8_unicode_ci',
             'host_name'                 => 'so.name1',
             'object_type'               => '(\'service\')',
-            'service'                   => 'so.name2 COLLATE latin1_general_ci',
+            'service'                   => 'so.name2 COLLATE utf8_unicode_ci',
             'service_description'       => 'so.name2',
-            'service_host'              => 'so.name1 COLLATE latin1_general_ci',
+            'service_host'              => 'so.name1 COLLATE utf8_unicode_ci',
             'service_host_name'         => 'so.name1'
         ),
         'hostgroups' => array(
-            'hostgroup'         => 'hgo.name1 COLLATE latin1_general_ci',
-            'hostgroup_alias'   => 'hg.alias COLLATE latin1_general_ci',
+            'hostgroup'         => 'hgo.name1 COLLATE utf8_unicode_ci',
+            'hostgroup_alias'   => 'hg.alias COLLATE utf8_unicode_ci',
             'hostgroup_name'    => 'hgo.name1'
         ),
         'hosts' => array(
             'host_alias'            => 'h.alias',
-            'host_display_name'     => 'h.display_name COLLATE latin1_general_ci'
+            'host_display_name'     => 'h.display_name COLLATE utf8_unicode_ci'
         ),
         'hoststatus' => array(
             'host_state' => 'CASE WHEN hs.has_been_checked = 0 OR hs.has_been_checked IS NULL THEN 99 ELSE hs.current_state END'
@@ -72,12 +72,12 @@
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
-            'service_display_name' => 's.display_name COLLATE latin1_general_ci'
+            'service_display_name' => 's.display_name COLLATE utf8_unicode_ci'
         ),
         'servicestatus' => array(
             'service_state' => 'CASE WHEN ss.has_been_checked = 0 OR ss.has_been_checked IS NULL THEN 99 ELSE ss.current_state END'
