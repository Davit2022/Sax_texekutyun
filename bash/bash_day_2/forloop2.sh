#!/bin/bash
echo even numbers and odd numbers
for ((i=1;i<10;i++))
do
if [ $(($i%2)) == 0 ];
 then
        echo $i 
    fi
if [ $(($i%2)) != 0 ];
then
    echo $i
fi
done
