#include "circular_single_linked_list.h"

CircularSingleLinkedList* init_list_char_ptr()
{
    CircularSingleLinkedList* list = init_list(sizeof(char) * MAX_BUFFER);
    
    list->copy_value_to_node = copy_value_to_node_char_ptr;
    list->copy_value_to_buffer = copy_value_to_buffer_char_ptr;
    list->print_node_value = print_node_value_char_ptr;
    list->setup_buffer_length = setup_buffer_length_char_ptr;

    return list;
}
