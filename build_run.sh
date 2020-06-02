#!/bin/bash

clear

echo "Targets:"
echo "1) ll"
echo "2) dll"
echo "3) cdll"
echo "4) cll"
echo "5) stack_array"
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

    5)
        make stack_array
        clear
        ./bin/stack_array
        ;;
    *)
        echo "Wrong input"
        ;;
esac