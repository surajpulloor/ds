#!/bin/bash

clear

echo "Targets:"
echo "ll"
read -p "Which build?" build
case $build in
    ll)
        make ll
        ;;
    *)
        echo "Wrong input"
        ;;
esac