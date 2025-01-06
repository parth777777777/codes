#!/usr/bin/env bash

echo "Helloooooo worldddddd"

name="partttt"
echo "Hellooooo $name"

name2=""
echo "hellooo ${name2:-"anon"}"
echo "hellooo ${name3:="unknown"}"
echo $name2
echo $name3

echo ""
echo "what is your age?"
read -r age
echo "You are $age years old"
