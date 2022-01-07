#!/bin/bash

if [ -d newDir ];
then
echo "NewDir already exists"
else
    mkdir newDir
fi
cd newDir
if [ -f file122.txt ];
then
echo Debil es ara ka @tenc file Error 404
else
    touch file122.txt
echo debil ara sarqeci
fi
