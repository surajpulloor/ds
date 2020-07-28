#include "ds/sll/single_linked_list.h"


SingleLinkedList* init_list_float()
{
    return init_list_number(
        sizeof(float), 

        copy_value_to_node_float,
        copy_value_to_buffer_float,

        print_node_value_float,

        setup_buffer_length_float
    );
}

SingleLinkedList* init_list_double()
{
    return init_list_number(
        sizeof(double), 

        copy_value_to_node_double,
        copy_value_to_buffer_double,

        print_node_value_double,

        setup_buffer_length_double
    );
}

SingleLinkedList* init_list_long_double()
{
    return init_list_number(
        sizeof(long double), 

        copy_value_to_node_long_double,
        copy_value_to_buffer_long_double,

        print_node_value_long_double,

        setup_buffer_length_long_double
    );
}