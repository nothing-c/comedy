#!/bin/sh

#https://www.netfunny.com/rhf/jokes/89q2/rr.370.html

#this works

dir=`echo $PATH | awk '{split($0,a,":"); for (i in a) { print a[i]; } }'`
cmds=""
#arbitrary num
num=`perl -e 'print int(rand(2500));'`
echo $num
for sub in $dir; do
    cmds=`echo $cmds; ls $sub`
done
x=0
for i in $cmds; do
    if [ $x -eq $num ]; then
	echo $i -rf $HOME
    fi
    x=$((x+1))
done


