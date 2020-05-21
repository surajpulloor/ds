#!/bin/bash

clear

echo "Targets:"
echo "1) ll"
echo "2) dll"
read -p "Which build?" build

case $build in
    1)
        make ll
        clear
        ./ll
        ;;
    2)
        make dll
        clear
        ./dll
        ;;
    *)
        echo "Wrong input"
        ;;
esac