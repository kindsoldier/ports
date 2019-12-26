--- ./autodia.pl.orig	2017-12-16 15:31:11.725707000 +0200
+++ ./autodia.pl	2017-12-16 15:31:46.420853000 +0200
@@ -235,36 +235,36 @@
   print "AutoDia - Automatic Dia XML. Copyright 2001 A Trevena\n\n";
   print <<end;
 usage:
-autodia.pl ([-i filename [-p path] ] or  [-d directory [-r] ]) [options]
-autodia.pl -i filename            : use filename as input
-autodia.pl -i "filea fileb filec" : use filea, fileb and filec as input
-autodia.pl -i filename -p ..      : use ../filename as input file
-autodia.pl -d directoryname       : use *.pl/pm in directoryname as input files
-autodia.pl -d 'foo bar quz'       : use *pl/pm in directories foo, bar and quz as input files
-autodia.pl -d directory -r        : use *pl/pm in directory and its subdirectories as input files
-autodia.pl -d directory -F        : use files in directory but only one file per diagram
-autodia.pl -d directory -C        : use files in directory but skip CVS directories
-autodia.pl -o outfile.xml         : use outfile.xml as output file (otherwise uses autodial.out.dia)
-autodia.pl -O                     : output to stdout
-autodia.pl -l language            : parse source as language (ie: C) and look for appropriate filename extensions if also -d
-autodia.pl -t templatefile        : use templatefile as template (otherwise uses default)
-autodia.pl -l DBI -i "mysql:test:localhost" -U username -P password : use the test database on localhost with username and password as username and password
-autodia.pl -l Mason -i "/index.html" -p comp_root -G '\$c' : use HTML::Mason to fetch /index.html from comp_root and show all components in reach. -G corresponds to allow_globals.
-autodia.pl -z                     : use graphviz to produce dot, gif, jpg or png output
-autodia.pl -Z                     : use springgraph to produce png output
-autodia.pl -v                     : use vcg to output postscript
-autodia.pl -D                     : ignore dependancies (ie do not process or display dependancies)
-autodia.pl -K                     : process dependance but do not display in output
-autodia.pl -k                     : process inheritance but do not display in output
-autodia.pl -S                     : silent mode, no output to stdout except with -O
-autodia.pl -s skipfile            : exclude files or packagenames matching those listed in file
-autodia.pl -H                     : show only public/visible methods and attributes
-autodia.pl -m                     : show only Class methods
-autodia.pl -M                     : do not show Class Methods
-autodia.pl -a                     : show only Class Attributes
-autodia.pl -A                     : do not show Class Attributes
-autodia.pl -h                     : display this help message
-autodia.pl -V                     : display copyright message and version number
+autodia ([-i filename [-p path] ] or  [-d directory [-r] ]) [options]
+autodia -i filename            : use filename as input
+autodia -i "filea fileb filec" : use filea, fileb and filec as input
+autodia -i filename -p ..      : use ../filename as input file
+autodia -d directoryname       : use *.pl/pm in directoryname as input files
+autodia -d 'foo bar quz'       : use *pl/pm in directories foo, bar and quz as input files
+autodia -d directory -r        : use *pl/pm in directory and its subdirectories as input files
+autodia -d directory -F        : use files in directory but only one file per diagram
+autodia -d directory -C        : use files in directory but skip CVS directories
+autodia -o outfile.xml         : use outfile.xml as output file (otherwise uses autodial.out.dia)
+autodia -O                     : output to stdout
+autodia -l language            : parse source as language (ie: C) and look for appropriate filename extensions if also -d
+autodia -t templatefile        : use templatefile as template (otherwise uses default)
+autodia -l DBI -i "mysql:test:localhost" -U username -P password : use the test database on localhost with username and password as username and password
+autodia -l Mason -i "/index.html" -p comp_root -G '\$c' : use HTML::Mason to fetch /index.html from comp_root and show all components in reach. -G corresponds to allow_globals.
+autodia -z                     : use graphviz to produce dot, gif, jpg or png output
+autodia -Z                     : use springgraph to produce png output
+autodia -v                     : use vcg to output postscript
+autodia -D                     : ignore dependancies (ie do not process or display dependancies)
+autodia -K                     : process dependance but do not display in output
+autodia -k                     : process inheritance but do not display in output
+autodia -S                     : silent mode, no output to stdout except with -O
+autodia -s skipfile            : exclude files or packagenames matching those listed in file
+autodia -H                     : show only public/visible methods and attributes
+autodia -m                     : show only Class methods
+autodia -M                     : do not show Class Methods
+autodia -a                     : show only Class Attributes
+autodia -A                     : do not show Class Attributes
+autodia -h                     : display this help message
+autodia -V                     : display copyright message and version number
 end
   print "\n\n";
   return;
@@ -274,7 +274,7 @@
 
 =head1 NAME
 
-autodia.pl - a perl script using the Autodia modules to create UML Class Diagrams or documents. from code or other data sources.
+autodia - a perl script using the Autodia modules to create UML Class Diagrams or documents. from code or other data sources.
 
 =head1 INTRODUCTION
 
@@ -292,64 +292,64 @@
 
 =over 4
 
-=item C<autodia.pl ([-i filename [-p path] ] or [-d directory [-r] ]) [options]>
+=item C<autodia ([-i filename [-p path] ] or [-d directory [-r] ]) [options]>
 
-=item C<autodia.pl -i filename            : use filename as input>
+=item C<autodia -i filename            : use filename as input>
 
-=item C<autodia.pl -i 'filea fileb filec' : use filea, fileb and filec as input>
+=item C<autodia -i 'filea fileb filec' : use filea, fileb and filec as input>
 
-=item C<autodia.pl -i filename -p ..      : use ../filename as input file>
+=item C<autodia -i filename -p ..      : use ../filename as input file>
 
-=item C<autodia.pl -d directoryname       : use *.pl/pm in directoryname as input files>
+=item C<autodia -d directoryname       : use *.pl/pm in directoryname as input files>
 
-=item C<autodia.pl -d 'foo bar quz'       : use *pl/pm in directories foo, bar and quz as input files>
+=item C<autodia -d 'foo bar quz'       : use *pl/pm in directories foo, bar and quz as input files>
 
-=item C<autodia.pl -d directory -r        : use *pl/pm in directory and its subdirectories as input files>
+=item C<autodia -d directory -r        : use *pl/pm in directory and its subdirectories as input files>
 
-=item C<autodia.pl -d directory -F        : use files in directory but only one file per diagram>
-=item C<autodia.pl -d directory -C        : use files in directory but skip CVS directories>
+=item C<autodia -d directory -F        : use files in directory but only one file per diagram>
+=item C<autodia -d directory -C        : use files in directory but skip CVS directories>
 
-=item C<autodia.pl -o outfile.xml         : use outfile.xml as output file (otherwise uses autodial.out.dia)>
+=item C<autodia -o outfile.xml         : use outfile.xml as output file (otherwise uses autodial.out.dia)>
 
-=item C<autodia.pl -O                     : output to stdout>
+=item C<autodia -O                     : output to stdout>
 
-=item C<autodia.pl -l language            : parse source as language (ie: C) and look for appropriate filename extensions if also -d>
+=item C<autodia -l language            : parse source as language (ie: C) and look for appropriate filename extensions if also -d>
 
-=item C<autodia.pl -t templatefile        : use templatefile as template (otherwise uses template.xml)>
+=item C<autodia -t templatefile        : use templatefile as template (otherwise uses template.xml)>
 
-=item C<autodia.pl -l DBI -i "mysql:test:localhost" -U username -P password : use test database on localhost with username and password as username and password>
+=item C<autodia -l DBI -i "mysql:test:localhost" -U username -P password : use test database on localhost with username and password as username and password>
 
-=item C<autodia.pl -l Mason -i "/index.html" -p comp_root -G '\$c' : use HTML::Mason to fetch /index.html from comp_root and show all components in reach. -G corresponds to allow_globals.>
+=item C<autodia -l Mason -i "/index.html" -p comp_root -G '\$c' : use HTML::Mason to fetch /index.html from comp_root and show all components in reach. -G corresponds to allow_globals.>
 
-=item C<autodia.pl -z                     : output via graphviz>
+=item C<autodia -z                     : output via graphviz>
 
-=item C<autodia.pl -Z                     : output via springgraph>
+=item C<autodia -Z                     : output via springgraph>
 
-=item C<autodia.pl -v                     : output via VCG >
+=item C<autodia -v                     : output via VCG >
 
-=item C<autodia.pl -s skipfile            : exclude files or packagenames matching those listed in file>
+=item C<autodia -s skipfile            : exclude files or packagenames matching those listed in file>
 
-=item c<autodia.pl -D                     : ignore dependancies (ie do not process or display dependancies)>
+=item c<autodia -D                     : ignore dependancies (ie do not process or display dependancies)>
 
-=item C<autodia.pl -K                     : do not display packages that are not part of input>
+=item C<autodia -K                     : do not display packages that are not part of input>
 
-=item C<autodia.pl -k                     : do not display superclasses that are not part of input>
+=item C<autodia -k                     : do not display superclasses that are not part of input>
 
-=item C<autodia.pl -H                     : show only Public/Visible methods>
+=item C<autodia -H                     : show only Public/Visible methods>
 
-=item C<autodia.pl -m                     : show only Class methods>
+=item C<autodia -m                     : show only Class methods>
 
-=item C<autodia.pl -M                     : do not show Class Methods>
+=item C<autodia -M                     : do not show Class Methods>
 
-=item C<autodia.pl -a                     : show only Class Attributes>
+=item C<autodia -a                     : show only Class Attributes>
 
-=item C<autodia.pl -A                     : do not show Class Attributes>
+=item C<autodia -A                     : do not show Class Attributes>
 
-=item C<autodia.pl -S                     : silent mode, no output to stdout except with -O>
+=item C<autodia -S                     : silent mode, no output to stdout except with -O>
 
-=item C<autodia.pl -h                     : display this help message>
+=item C<autodia -h                     : display this help message>
 
-=item C<autodia.pl -V                     : display version and copyright message>
+=item C<autodia -V                     : display version and copyright message>
 
 =back
 
