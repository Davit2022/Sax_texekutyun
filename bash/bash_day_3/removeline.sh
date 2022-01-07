#!/bin/bash

index=1
echo write your filename
read filename
echo write your lastname for removing
read y
echo write your colomn
read c
while read line
do
arr=($line)
if [ ${arr[$c]} = $y ]
then
sed -i "${index}d" $filename
echo $index
fi
index=$(($index + 1))
done < $filename
