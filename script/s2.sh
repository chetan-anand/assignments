#!/bin/bash
clear
for((i=1;i<=$1;i++))
do
	for((j=1;j<=$1-i;j++))
		do
			echo -n " "
		done
   for((j=1;j<=i;j++))
	do
		echo -n "$i "
	done
	printf "\n"
done
exit 0

