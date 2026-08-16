#!/bin/bash
# EXP2_06_LARGEST_DIGIT
a=58329
echo "ENTER THE NUMBER:"; echo "$a"; max=0
while [ $a -gt 0 ]; do r=$((a%10)); if [ $r -gt $max ]; then max=$r; fi; a=$((a/10)); done
echo "LARGEST DIGIT = $max"
