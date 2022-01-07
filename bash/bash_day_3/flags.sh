#!/bin/bash

while getopts f:u:a:u flag
do
echo "$flag ${OPTARG}" 
    if [ $flag = u ]; then
        username=${OPTARG}
   
    elif [ $flag = a ]; then
        age=${OPTARG}
        
    elif [ $flag = f ]; then
        fullname=${OPTARG}
        
    else
        echo undefined flag;
        fi
done
echo "Username: $username";
echo "Age: $age";
echo "Full Name: $fullname";
