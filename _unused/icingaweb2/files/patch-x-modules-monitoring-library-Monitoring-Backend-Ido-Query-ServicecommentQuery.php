--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicecommentQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/ServicecommentQuery.php	2019-10-14 15:53:03.881953000 +0200
@@ -33,7 +33,7 @@
      */
     protected $columnMap = array(
         'comments' => array(
-            'comment_author'        => 'c.author_name COLLATE latin1_general_ci',
+            'comment_author'        => 'c.author_name COLLATE utf8_unicode_ci',
             'comment_author_name'   => 'c.author_name',
             'comment_data'          => 'c.comment_data',
             'comment_expiration'    => 'CASE c.expires WHEN 1 THEN UNIX_TIMESTAMP(c.expiration_time) ELSE NULL END',
@@ -42,22 +42,22 @@
             'comment_name'          => 'c.name',
             'comment_timestamp'     => 'UNIX_TIMESTAMP(c.comment_time)',
             'comment_type'          => "CASE c.entry_type WHEN 1 THEN 'comment' WHEN 2 THEN 'downtime' WHEN 3 THEN 'flapping' WHEN 4 THEN 'ack' END",
-            'host'                  => 'so.name1 COLLATE latin1_general_ci',
+            'host'                  => 'so.name1 COLLATE utf8_unicode_ci',
             'host_name'             => 'so.name1',
             'object_type'           => '(\'service\')',
-            'service'               => 'so.name2 COLLATE latin1_general_ci',
+            'service'               => 'so.name2 COLLATE utf8_unicode_ci',
             'service_description'   => 'so.name2',
-            'service_host'          => 'so.name1 COLLATE latin1_general_ci',
+            'service_host'          => 'so.name1 COLLATE utf8_unicode_ci',
             'service_host_name'     => 'so.name1'
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
         'instances' => array(
             'instance_name' => 'i.instance_name'
@@ -66,12 +66,12 @@
             'host_state' => 'CASE WHEN hs.has_been_checked = 0 OR hs.has_been_checked IS NULL THEN 99 ELSE hs.current_state END'
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
