#!/bin/sh
for file in `find . -type f|grep "/man.\?/.*.\?"|sort`; do
	base=`basename $file`;
	sect=`echo $base|cut -d"." -f2`
	echo MAN$sect += $base
done
#EOF

