#!/bin/bash

clear

echo "Targets:"
echo "1) ll"
echo "2) dll"
echo "3) cdll"
echo "4) cll"
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

    4)
        make circular_ll
        clear
        ./circular_ll
        ;;
    *)
        echo "Wrong input"
        ;;
esac