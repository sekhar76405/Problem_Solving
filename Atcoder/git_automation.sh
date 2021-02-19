#! /bin/bash

git add .

echo "Enter the commit message: "
read message

echo "${message}" > cache.txt

git commit -m " ${message} "

#git push
