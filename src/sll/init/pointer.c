#include "ds/single_linked_list.h"

SingleLinkedList* init_list_char_ptr()
{
    return init_list(
        sizeof(char) * MAX_BUFFER, 

        NULL, 
        NULL,
        
        copy_value_to_node_char_ptr,
        copy_value_to_buffer_char_ptr,

        print_node_value_char_ptr,
        
        setup_buffer_length_char_ptr
    );
}
