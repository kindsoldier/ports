--- ./lib/CGI.pm.orig	2016-03-14 09:14:13.000000000 +0200
+++ ./lib/CGI.pm	2016-07-11 14:04:12.559760000 +0200
@@ -404,8 +404,8 @@
 		my ( $package, $filename, $line ) = caller;
 		if ( $package ne 'CGI' ) {
 			$LIST_CONTEXT_WARN++; # only warn once
-			warn "CGI::param called in list context from $filename line $line, this can lead to vulnerabilities. "
-				. 'See the warning in "Fetching the value or values of a single named parameter"';
+#			warn "CGI::param called in list context from $filename line $line, this can lead to vulnerabilities. "
+#				. 'See the warning in "Fetching the value or values of a single named parameter"';
 		}
 	}
 
