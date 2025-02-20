#!/bin/bash

clear

echo "What do run:"
echo "1) Run tests"
echo "2) Build libraries"
echo "3) Clean builds"
read -p ": " option

clear

case $option in

    1)     
        echo "Targets:"
        echo "1) sll_test"
        echo "2) dll_test"
        echo "3) cdll_test"
        echo "4) csll_test"
        echo "5) stack_array_test"
        echo "6) stack_linked_list_test"
        echo "7) queue_array_test"
        echo "8) queue_ll_test"
        echo "9) string_test"
        read -p "Which test?" build

        case $build in
            1)
                make sll_test
                clear
                ./bin/sll_test
                ;;
            2)
                make dll_test
                clear
                ./bin/dll_test
                ;;
            3)
                make cdll_test
                clear
                ./bin/cdll_test
                ;;

            4)
                make csll_test
                clear
                ./bin/csll_test
                ;;

            5)
                make stack_array_test
                clear
                ./bin/stack_array_test
                ;;

            6)
                make stack_ll_test
                clear
                ./bin/stack_ll_test
                ;;

            7)
                make queue_array_test
                clear
                ./bin/queue_array_test
                ;;

            8)
                make queue_linked_list_test
                clear
                ./bin/queue_ll_test
                ;;

            9)
                make string_test
                clear
                ./bin/string_test
                ;;

            *)
                echo "Wrong input"
                ;;
        esac
        ;;
    
    2)

        echo "Targets:"
        echo "1) libsll"
        echo "2) libdll"
        echo "3) libcdll"
        echo "4) libcsll"
        echo "5) libstack_array"
        echo "6) libstack_linked_list"
        echo "7) libqueue_array"
        echo "8) libqueue_linked_list"
        echo "9) libstring"
        read -p "Which library?" build

        case $build in
            1)
                make sll_gen_lib
                ;;
            2)
                make dll_gen_lib
                ;;
            3)
                make cdll_gen_lib
                ;;

            4)
                make csll_gen_lib
                ;;

            5)
                make stack_array_gen_lib
                ;;

            6)
                make stack_linked_list_gen_lib
                ;;

            7)
                make queue_array_gen_lib
                ;;

            8)
                make queue_linked_list_gen_lib
                ;;

            9)
                make string_gen_lib
                ;;

            *)
                echo "Wrong input"
                ;;
        esac
        ;;

    3)
        make clean
        ;;

    *)
        echo "Wrong input"
        ;;

esac


