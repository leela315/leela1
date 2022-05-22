#!/bin/bash
num1=$1
num2=$2
num3=$3
if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]; then
echo " $num1 is greatest of 3"
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]; then
echo "$num2 is gretest of 3 nom"
else
echo "$num3 is gretest "
fi
