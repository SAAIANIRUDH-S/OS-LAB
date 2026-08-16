#!/bin/bash
# EXP2_07_PALINDROME_STRING
str=madam
echo "ENTER THE STRING TO CHECK PALINDROME"; echo "$str"
rev=$(echo "$str" | rev); if [ "$str" = "$rev" ]; then echo "$str is a palindrome"; else echo "$str is not a palindrome"; fi
