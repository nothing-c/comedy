#!/bin/sh

#script to find how many times rust is mentioned in a thread

list=`nc-get $1 stdout | ncfind 'rust'`

for x in $list; do
    x=$((x+1))
done

echo '$x Rust mentions'
