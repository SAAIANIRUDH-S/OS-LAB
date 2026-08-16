#!/bin/bash
# EXP2_05_ARITHMETIC_CALCULATOR
a=20; b=5; op=1
echo "ENTER VALUE OF A: $a"; echo "ENTER VALUE OF B: $b"; echo "1.ADD 2.SUBTRACT 3.MULTIPLY 4.DIVIDE"; echo "ENTER OPTION: $op"
case $op in 1) echo "RESULT = $((a+b))";;2) echo "RESULT = $((a-b))";;3) echo "RESULT = $((a*b))";;4) echo "RESULT = $((a/b))";;esac
