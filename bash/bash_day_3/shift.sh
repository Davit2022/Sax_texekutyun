#!/bin/bash

#i=1;
#j=$#;
#echo $j
#while [ $i -le $j ]
#do  
#    echo "Username - $i: $1";
#    i=$((i + 1));
#    shift 1;
#done
j=$#
for ((i=1;$i<=$j;i++))
do
    echo "Username - $i: $1"
    shift 1;
done
