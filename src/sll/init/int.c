#include "ds/sll/single_linked_list.h"

SingleLinkedList* init_list_short()
{
    return init_list(
        sizeof(short), 

        NULL,
        NULL,

        copy_value_to_node_short,
        copy_value_to_buffer_short,

        print_node_value_short,

        setup_buffer_length_short,

        equal_short,

        less_than_short,
        less_than_equal_short,

        greater_than_short,
        greater_than_equal_short

    );
        
}

SingleLinkedList* init_list_unsigned_short()
{
    return init_list(
        sizeof(unsigned short),

       
        NULL,
        NULL,

        copy_value_to_node_unsigned_short,
        copy_value_to_buffer_unsigned_short,

        print_node_value_unsigned_short,

        setup_buffer_length_unsigned_short,

        equal_unsigned_short,

        less_than_unsigned_short,
        less_than_equal_unsigned_short,

        greater_than_unsigned_short,
        greater_than_equal_unsigned_short

    );
        
}


SingleLinkedList* init_list_int()
{
    return init_list(
        sizeof(int), 

        NULL,
        NULL,

        copy_value_to_node_int,
        copy_value_to_buffer_int,

        print_node_value_int,

        setup_buffer_length_int,

        equal_int,

        less_than_int,
        less_than_equal_int,

        greater_than_int,
        greater_than_equal_int

    );
    
}

SingleLinkedList* init_list_unsigned_int()
{
    return init_list(
        sizeof(unsigned int), 

       
        NULL,
        NULL,

        copy_value_to_node_unsigned_int,
        copy_value_to_buffer_unsigned_int,

        print_node_value_unsigned_int,

        setup_buffer_length_unsigned_int,

        equal_unsigned_int,

        less_than_unsigned_int,
        less_than_equal_unsigned_int,

        greater_than_unsigned_int,
        greater_than_equal_unsigned_int

    );
    
}

SingleLinkedList* init_list_long()
{
    return init_list(
        sizeof(long), 

        
        NULL,
        NULL,

        copy_value_to_node_long,
        copy_value_to_buffer_long,

        print_node_value_long,

        setup_buffer_length_long,

        equal_long,

        less_than_long,
        less_than_equal_long,

        greater_than_long,
        greater_than_equal_long
    );
    
    
    
}

SingleLinkedList* init_list_unsigned_long()
{
    return init_list(
        sizeof(unsigned long), 

        
        NULL,
        NULL,

        copy_value_to_node_unsigned_long,
        copy_value_to_buffer_unsigned_long,

        print_node_value_unsigned_long,

        setup_buffer_length_unsigned_long,

        equal_unsigned_long,

        less_than_unsigned_long,
        less_than_equal_unsigned_long,

        greater_than_unsigned_long,
        greater_than_equal_unsigned_long

    );
    
}

SingleLinkedList* init_list_long_long()
{
    return init_list(
        sizeof(long long),
        
        NULL,
        NULL,

        copy_value_to_node_long_long,
        copy_value_to_buffer_long_long,

        print_node_value_long_long,

        setup_buffer_length_long_long,

        equal_long_long,

        less_than_long_long,
        less_than_equal_long_long,

        greater_than_long_long,
        greater_than_equal_long_long

    );
    
    
    
}

SingleLinkedList* init_list_unsigned_long_long()
{
    return init_list(
        sizeof(unsigned long long), 

        
        NULL,
        NULL,

        copy_value_to_node_unsigned_long_long,
        copy_value_to_buffer_unsigned_long_long,

        print_node_value_unsigned_long_long,

        setup_buffer_length_unsigned_long_long,

        equal_unsigned_long_long,

        less_than_unsigned_long_long,
        less_than_equal_unsigned_long_long,

        greater_than_unsigned_long_long,
        greater_than_equal_unsigned_long_long
   );
    
}