#!/bin/bash
n=$1
fact=1
while  [ $n -gt 1 ]
do 
	fact=`expr $fact \* $n`
	n=`expr $n - 1`
done
	echo " factorial of $n is $fact "

