--- ./src/http/cervlet.c.orig	2017-04-19 15:19:49.000000000 +0200
+++ ./src/http/cervlet.c	2017-09-22 11:35:12.151969000 +0200
@@ -566,8 +566,8 @@
                             "<style type=\"text/css\"> "\
                             " html, body {height: 100%%;margin: 0;} "\
                             " body {background-color: white;font: normal normal normal 16px/20px 'HelveticaNeue', Helvetica, Arial, sans-serif; color:#222;} "\
-                            " h1 {padding:30px 0 10px 0; text-align:center;color:#222;font-size:28px;} "\
-                            " h2 {padding:20px 0 10px 0; text-align:center;color:#555;font-size:22px;} "\
+                            " h1 {padding:30px 0 10px 0; text-align:center;color:#222;font-size:2em;} "\
+                            " h2 {padding:20px 0 10px 0; text-align:center;color:#555;font-size:1.8em;} "\
                             " a:hover {text-decoration: none;} "\
                             " a {text-decoration: underline;color:#222} "\
                             " table {border-collapse:collapse; border:0;} "\
@@ -587,22 +587,22 @@
                             " #wrap {min-height: 100%%;} "\
                             " #main {overflow:auto; padding-bottom:50px;} "\
                             " /*Opera Fix*/body:before {content:\"\";height:100%%;float:left;width:0;margin-top:-32767px;} "\
-                            " #footer {position: relative;margin-top: -50px; height: 50px; clear:both; font-size:11px;color:#777;text-align:center;} "\
+                            " #footer {position: relative;margin-top: -50px; height: 50px; clear:both; font-size:1em;color:#777;text-align:center;} "\
                             " #footer a {color:#333;} #footer a:hover {text-decoration: none;} "\
-                            " #nav {background:#ddd;font:normal normal normal 14px/0px 'HelveticaNeue', Helvetica;} "\
+                            " #nav {background:#ddd;font:normal normal normal 1em/1em 'HelveticaNeue', Helvetica;} "\
                             " #nav td {padding:5px 10px;} "\
                             " #header {margin-bottom:30px;background:#EFF7FF} "\
                             " #nav, #header {border-bottom:1px solid #ccc;} "\
                             " #header-row {width:95%%;} "\
-                            " #header-row th {padding:30px 10px 10px 10px;font-size:120%%;} "\
+                            " #header-row th {padding:30px 10px 10px 10px;font-size:100%%;} "\
                             " #header-row td {padding:3px 10px;} "\
                             " #header-row .first {min-width:200px;width:200px;white-space:nowrap;overflow:hidden;text-overflow:ellipsis;} "\
                             " #status-table {width:95%%;} "\
                             " #status-table th {text-align:left;background:#edf5ff;font-weight:normal;} "\
                             " #status-table th, #status-table td, #status-table tr {border:1px solid #ccc;padding:5px;} "\
-                            " #buttons {font-size:20px; margin:40px 0 20px 0;} "\
+                            " #buttons {font-size:1em; margin:40px 0 20px 0;} "\
                             " #buttons td {padding-right:50px;} "\
-                            " #buttons input {font-size:18px;padding:5px;} "\
+                            " #buttons input {font-size:1em;padding:5px;} "\
                             "</style>"\
                             "<meta HTTP-EQUIV='REFRESH' CONTENT=%d> "\
                             "<meta HTTP-EQUIV='Expires' Content=0> "\
