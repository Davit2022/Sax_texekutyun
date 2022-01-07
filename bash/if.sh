#!/bin/bash
echo Enter first number
read num1
echo Enter secound number
read num2


if [ $num1 -lt $num2 ];
then
echo "$num1 is less then $num2"
elif [ $num1 -gt $num2 ]
then
echo "$num1 is greater then $num2"
else
    echo "$num1 is equal to $num2"
fi
