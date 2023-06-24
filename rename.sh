#!/bin/bash

for dir in C*
do 
echo "$dir"
new_name="$(echo "$dir" | sed 's/ /-/g')"
mv "$dir" "$new_name"
echo "$new_name"
done