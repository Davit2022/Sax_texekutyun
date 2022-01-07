#!/bin/bash
spinner=( Ooooo oOooo ooOoo oooOo ooooO )

counter=0
while [ $counter -lt 10 ]
do
    let counter+=1
    for i in "${spinner[@]}"
    do
     echo -ne "\r$i"
sleep 0.2
done
done
