--- ./modules/monitoring/library/Monitoring/Backend/Ido/Query/GroupsummaryQuery.php.orig	2019-08-14 13:10:19.000000000 +0200
+++ ./modules/monitoring/library/Monitoring/Backend/Ido/Query/GroupsummaryQuery.php	2019-10-14 15:53:03.862538000 +0200
@@ -15,8 +15,8 @@
      */
     protected $columnMap = array(
         'hoststatussummary' => array(
-            'hostgroup'                                     => 'hostgroup COLLATE latin1_general_ci',
-            'hostgroup_alias'                               => 'hostgroup_alias COLLATE latin1_general_ci',
+            'hostgroup'                                     => 'hostgroup COLLATE utf8_unicode_ci',
+            'hostgroup_alias'                               => 'hostgroup_alias COLLATE utf8_unicode_ci',
             'hostgroup_name'                                => 'hostgroup_name',
             'hosts_up'                                      => 'SUM(CASE WHEN object_type = \'host\' AND state = 0 THEN 1 ELSE 0 END)',
             'hosts_unreachable'                             => 'SUM(CASE WHEN object_type = \'host\' AND state = 2 THEN 1 ELSE 0 END)',
@@ -36,8 +36,8 @@
             'hosts_up_last_state_change'                    => 'MAX(CASE WHEN object_type = \'host\' AND state = 0 THEN state_change ELSE 0 END)'
         ),
         'servicestatussummary' => array(
-            'servicegroup'                                  => 'servicegroup COLLATE latin1_general_ci',
-            'servicegroup_alias'                            => 'servicegroup_alias COLLATE latin1_general_ci',
+            'servicegroup'                                  => 'servicegroup COLLATE utf8_unicode_ci',
+            'servicegroup_alias'                            => 'servicegroup_alias COLLATE utf8_unicode_ci',
             'servicegroup_name'                             => 'servicegroup_name',
             'services_critical'                             => 'SUM(CASE WHEN object_type = \'service\' AND state = 2 THEN 1 ELSE 0 END)',
             'services_critical_handled'                     => 'SUM(CASE WHEN object_type = \'service\' AND state = 2 AND acknowledged + in_downtime + host_state > 0 THEN 1 ELSE 0 END)',
