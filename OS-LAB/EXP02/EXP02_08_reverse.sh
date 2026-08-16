#!/bin/bash
# EXP2_08_REVERSE_NUMBER
n=12345
echo "ENTER THE NUMBER"; echo "$n"; r=0
while [ $n -ne 0 ]; do x=$((n%10)); r=$((r*10+x)); n=$((n/10)); done
echo "REVERSE OF THE NUMBER IS $r"
