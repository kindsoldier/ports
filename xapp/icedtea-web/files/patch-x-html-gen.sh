--- ./html-gen.sh.orig	2016-02-03 15:47:43.234432000 +0200
+++ ./html-gen.sh	2016-04-06 11:27:51.769114000 +0200
@@ -1,4 +1,4 @@
-#!/bin/bash
+#!/usr/local/bin/bash
 
 # html-gen.sh
 #   Copyright (C) 2013  Red Hat
@@ -69,12 +69,12 @@
 NEWS_ITEMS=2
 
 if [ -d .hg ]; then
-    REPO_URL="$(hg paths default | sed -r 's/.*icedtea.classpath.org\/(.*)/\1/')"
+    REPO_URL="$(hg paths default | gsed -r 's/.*icedtea.classpath.org\/(.*)/\1/')"
 else
     unset REPO_URL
 fi
 
-start_time="$(date +%s.%N)"
+start_time="$(date +%s)"
 
 if [ ! -e html-gen ]; then
 	echo "No html-gen directory, exiting. See Makefile.am for usage"
@@ -84,29 +84,29 @@
 cd html-gen
 
 print_debug "Generating HTML content for javaws -about${REPO_URL:+ for }$REPO_URL. $CHANGESETS changesets, $NEWS_ITEMS news items"
-print_debug "Starting sed substitutions"
+print_debug "Starting gsed substitutions"
 for FILE in NEWS AUTHORS COPYING ChangeLog
 do
     print_debug "Processing $FILE..."
-    sed -i -r 's/\t/    /g' "./$FILE" # Convert tabs into four spaces
-    sed -i -r 's/\&/\&amp;/g' "./$FILE" # "&" -> "&amp;"
-    sed -i -r 's/  /\&ensp;\&ensp;/g' "./$FILE" # Double-spaces into HTML whitespace for format preservation
-    sed -i -r 's/</\&lt;/g' "./$FILE" # "<" -> "&lt;"
-    sed -i -r 's/>/\&gt;/g' "./$FILE" # ">" -> "&gt;"
-    sed -i -r 's_(\&lt;)?(https?://[^ ]*)(\&gt;| |$)_\1<a href="\2">\2</a>\3_i' "./$FILE" # Create hyperlinks from http(s) URLs
-    sed -i -r 's/\&lt;(.*@.*)\&gt;/\&lt;<a href="mailto:\1\?subject=IcedTea-Web">\1<\/a>\&gt;/i' "./$FILE" # Create mailto links from email addresses formatted as <email@example.com>
-    sed -i -r 's/$/<br>/' "./$FILE" # "\n" -> "<br>"
+    gsed -i -r 's/\t/    /g' "./$FILE" # Convert tabs into four spaces
+    gsed -i -r 's/\&/\&amp;/g' "./$FILE" # "&" -> "&amp;"
+    gsed -i -r 's/  /\&ensp;\&ensp;/g' "./$FILE" # Double-spaces into HTML whitespace for format preservation
+    gsed -i -r 's/</\&lt;/g' "./$FILE" # "<" -> "&lt;"
+    gsed -i -r 's/>/\&gt;/g' "./$FILE" # ">" -> "&gt;"
+    gsed -i -r 's_(\&lt;)?(https?://[^ ]*)(\&gt;| |$)_\1<a href="\2">\2</a>\3_i' "./$FILE" # Create hyperlinks from http(s) URLs
+    gsed -i -r 's/\&lt;(.*@.*)\&gt;/\&lt;<a href="mailto:\1\?subject=IcedTea-Web">\1<\/a>\&gt;/i' "./$FILE" # Create mailto links from email addresses formatted as <email@example.com>
+    gsed -i -r 's/$/<br>/' "./$FILE" # "\n" -> "<br>"
 
     mv "$FILE" "$FILE.html"
     print_debug "$FILE.html finished."
 done
 
-print_debug "Done sed subs. Starting in-place additions"
+print_debug "Done gsed subs. Starting in-place additions"
 
 # Centre the column of author names in the Authors file
-sed -i '4i <center>' AUTHORS.html
+gsed -i '4i <center>' AUTHORS.html
 # Insert jamIcon above author names
-sed -i '5i <br><img src="jamIcon.jpg" alt="Jam Icon" width="87" height="84"><br><br>' AUTHORS.html
+gsed -i '5i <br><img src="jamIcon.jpg" alt="Jam Icon" width="87" height="84"><br><br>' AUTHORS.html
 echo "</center>" >> AUTHORS.html
 
 if [ -n "${REPO_URL}" ]; then
@@ -147,7 +147,7 @@
                 if [ -n "${REPO_URL}" ]; then
                     REV="${REVS["$COUNTER"]}"
                     # Turn the date into a hyperlink for the revision this changelog entry describes
-                    LINE=$(echo "$LINE" | sed -r "s|($date_regex)($html_space.*$html_space.*)|<a href=http://icedtea.classpath.org/$REPO_URL/rev/$REV>\1</a>\2|")
+                    LINE=$(echo "$LINE" | gsed -r "s|($date_regex)($html_space.*$html_space.*)|<a href=http://icedtea.classpath.org/$REPO_URL/rev/$REV>\1</a>\2|")
                 fi
                 COUNTER="$(( COUNTER + 1 ))"
             fi
@@ -166,9 +166,9 @@
     print_debug "$FILE finished"
 done
 
-sed -i -r 's|(\*\ .*):|<u>\1</u>:|' ChangeLog.html # Underline changed files in ChangeLog, eg "* Makefile.am:"
+gsed -i -r 's|(\*\ .*):|<u>\1</u>:|' ChangeLog.html # Underline changed files in ChangeLog, eg "* Makefile.am:"
 
-end_time="$(date +%s.%N)"
+end_time="$(date +%s)"
 
 print_debug "HTML generation complete"
 print_debug "Total elapsed time: $(echo "$end_time - $start_time" | bc )"
