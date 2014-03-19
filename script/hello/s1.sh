#!/bin/bash
clear
var=find . -type f -printf '%b\t%f\n' | sort -g | tail -n 1
echo "$var"
exit 0



