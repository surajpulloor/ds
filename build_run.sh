#!/bin/bash

clear

echo "Targets:"
echo "1) ll"
echo "2) dll"
echo "3) cdll"
read -p "Which build?" build

case $build in
    1)
        make ll
        clear
        ./ll
        ;;
    2)
        make double_ll
        clear
        ./double_ll
        ;;
    3)
        make double_cll
        clear
        ./double_cll
        ;;
    *)
        echo "Wrong input"
        ;;
esac