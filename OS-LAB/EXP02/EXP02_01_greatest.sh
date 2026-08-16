#!/bin/bash
# EXP2_01_GREATEST
 a=10; b=25; c=15
echo "ENTER THREE NUMBERS"
echo "$a $b $c"
if [ $a -gt $b ] && [ $a -gt $c ]; then echo "$a is greater"; elif [ $b -gt $c ]; then echo "$b is greater"; else echo "$c is greater"; fi
