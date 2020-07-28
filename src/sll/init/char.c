#include "ds/sll/single_linked_list.h"

SingleLinkedList* init_list_char()
{
    return init_list_number(
        sizeof(char), 

        copy_value_to_node_char,
        copy_value_to_buffer_char,

        print_node_value_char,

        setup_buffer_length_char
    );
}

SingleLinkedList* init_list_unsigned_char()
{
    return init_list_number(
        sizeof(unsigned char), 

        copy_value_to_node_unsigned_char,
        copy_value_to_buffer_unsigned_char,

        print_node_value_unsigned_char,

        setup_buffer_length_unsigned_char
    );

}