#!/bin/bash
# EXP2_02_FACTORIAL
n=5
echo "ENTER THE NUMBER:"
echo "$n"
fact=1
while [ $n -gt 1 ]; do fact=$((fact*n)); n=$((n-1)); done
echo "FACTORIAL = $fact"
