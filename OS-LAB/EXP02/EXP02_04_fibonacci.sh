#!/bin/bash
# EXP2_04_FIBONACCI
n=7
echo "ENTER THE LIMIT:"
echo "$n"
p=-1; q=1; i=1
while [ $i -le $n ]; do r=$((p+q)); p=$q; q=$r; printf "%s " "$r"; i=$((i+1)); done
echo
