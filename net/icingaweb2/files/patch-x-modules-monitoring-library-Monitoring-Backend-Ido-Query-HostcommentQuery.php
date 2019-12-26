--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/HostcommentQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/HostcommentQuery.php	2019-10-14 15:53:03.864131000 +0200
@@ -33,7 +33,7 @@
      */
     protected $columnMap = array(
         'comments' => array(
-            'comment_author'        => 'c.author_name COLLATE latin1_general_ci',
+            'comment_author'        => 'c.author_name COLLATE utf8_unicode_ci',
             'comment_author_name'   => 'c.author_name',
             'comment_data'          => 'c.comment_data',
             'comment_expiration'    => 'CASE c.expires WHEN 1 THEN UNIX_TIMESTAMP(c.expiration_time) ELSE NULL END',
@@ -42,18 +42,18 @@
             'comment_name'          => 'c.name',
             'comment_timestamp'     => 'UNIX_TIMESTAMP(c.comment_time)',
             'comment_type'          => "CASE c.entry_type WHEN 1 THEN 'comment' WHEN 2 THEN 'downtime' WHEN 3 THEN 'flapping' WHEN 4 THEN 'ack' END",
-            'host'                  => 'ho.name1 COLLATE latin1_general_ci',
+            'host'                  => 'ho.name1 COLLATE utf8_unicode_ci',
             'host_name'             => 'ho.name1',
             'object_type'           => '(\'host\')'
         ),
         'hostgroups' => array(
-            'hostgroup'             => 'hgo.name1 COLLATE latin1_general_ci',
-            'hostgroup_alias'       => 'hg.alias COLLATE latin1_general_ci',
+            'hostgroup'             => 'hgo.name1 COLLATE utf8_unicode_ci',
+            'hostgroup_alias'       => 'hg.alias COLLATE utf8_unicode_ci',
             'hostgroup_name'        => 'hgo.name1'
         ),
         'hosts' => array(
             'host_alias'            => 'h.alias',
-            'host_display_name'     => 'h.display_name COLLATE latin1_general_ci'
+            'host_display_name'     => 'h.display_name COLLATE utf8_unicode_ci'
         ),
         'hoststatus' => array(
             'host_state'            => 'CASE WHEN hs.has_been_checked = 0 OR hs.has_been_checked IS NULL THEN 99 ELSE hs.current_state END'
@@ -62,14 +62,14 @@
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
         )
     );
 
