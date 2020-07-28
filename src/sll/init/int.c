#include "ds/sll/single_linked_list.h"

SingleLinkedList* init_list_short()
{
    return init_list_number(
        sizeof(short), 

        copy_value_to_node_short,
        copy_value_to_buffer_short,

        print_node_value_short,

        setup_buffer_length_short

    );
        
}

SingleLinkedList* init_list_unsigned_short()
{
    return init_list_number(
        sizeof(unsigned short),

        copy_value_to_node_unsigned_short,
        copy_value_to_buffer_unsigned_short,

        print_node_value_unsigned_short,

        setup_buffer_length_unsigned_short

    );
        
}


SingleLinkedList* init_list_int()
{
    return init_list_number(
        sizeof(int), 

        copy_value_to_node_int,
        copy_value_to_buffer_int,

        print_node_value_int,

        setup_buffer_length_int

    );
    
}

SingleLinkedList* init_list_unsigned_int()
{
    return init_list_number(
        sizeof(unsigned int), 

        copy_value_to_node_unsigned_int,
        copy_value_to_buffer_unsigned_int,

        print_node_value_unsigned_int,

        setup_buffer_length_unsigned_int

    );
    
}

SingleLinkedList* init_list_long()
{
    return init_list_number(
        sizeof(long), 

        copy_value_to_node_long,
        copy_value_to_buffer_long,

        print_node_value_long,

        setup_buffer_length_long

    );
    
    
    
}

SingleLinkedList* init_list_unsigned_long()
{
    return init_list_number(
        sizeof(unsigned long), 

        copy_value_to_node_unsigned_long,
        copy_value_to_buffer_unsigned_long,

        print_node_value_unsigned_long,
        
        setup_buffer_length_unsigned_long

    );
    
}

SingleLinkedList* init_list_long_long()
{
    return init_list_number(
        sizeof(long long),
        
        copy_value_to_node_long_long,
        copy_value_to_buffer_long_long,
        
        print_node_value_long_long,
        
        setup_buffer_length_long_long

    );
    
    
    
}

SingleLinkedList* init_list_unsigned_long_long()
{
    return init_list_number(
        sizeof(unsigned long long), 

        copy_value_to_node_unsigned_long_long,
        copy_value_to_buffer_unsigned_long_long,

        print_node_value_unsigned_long_long,

        setup_buffer_length_unsigned_long_long
   );
    
}