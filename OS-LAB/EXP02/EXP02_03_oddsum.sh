#!/bin/bash
# EXP2_03_SUM_OF_ODD_NUMBERS
n=10
echo "ENTER THE RANGE:"
echo "$n"
x=1; sum=0
while [ $x -le $n ]; do sum=$((sum+x)); x=$((x+2)); done
echo "SUM = $sum"
