#!/bin/sh


pkgs=$(pkg info | awk '{print $1}')

echo $pkgs
#exit

ports=""
for mk in $(find /usr/ports/ -name 'Makefile' -maxdepth 3); do
    portdir=$(dirname $mk)
    port=$(cd $portdir && make package-name)
    ports="$ports $portdir:$port"
    echo $port
done
echo $ports


echo "================"
for pkg in $pkgs;do 
    for port in $ports; do
	portname=$(echo $port | cut -d: -f2)
	test "xxx$pkg" == "xxx$portname" && echo "==:$port"
    done
done
