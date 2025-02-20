#include "ds/sll/single_linked_list.h"


SingleLinkedList* init_list_float()
{
    return init_list(
        sizeof(float), 

        NULL,
        NULL,

        copy_value_to_node_float,
        copy_value_to_buffer_float,

        print_node_value_float,

        setup_buffer_length_float,

        equal_float,

        less_than_float,
        less_than_equal_float,

        greater_than_float,
        greater_than_equal_float
    );
}

SingleLinkedList* init_list_double()
{
    return init_list(
        sizeof(double), 

        NULL,
        NULL,

        copy_value_to_node_double,
        copy_value_to_buffer_double,

        print_node_value_double,

        setup_buffer_length_double,

        equal_double,

        less_than_double,
        less_than_equal_double,

        greater_than_double,
        greater_than_equal_double
    );
}

SingleLinkedList* init_list_long_double()
{
    return init_list(
        sizeof(long double), 

        NULL,
        NULL,

        copy_value_to_node_long_double,
        copy_value_to_buffer_long_double,

        print_node_value_long_double,

        setup_buffer_length_long_double,

        equal_long_double,

        less_than_long_double,
        less_than_equal_long_double,

        greater_than_long_double,
        greater_than_equal_long_double
    );
}