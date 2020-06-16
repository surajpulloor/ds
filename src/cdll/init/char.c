#include "circular_double_linked_list.h"

CircularDoubleLinkedList* init_list_char()
{
    CircularDoubleLinkedList* list = init_list(sizeof(char));
    
    list->copy_value_to_node = copy_value_to_node_char;
    list->copy_value_to_buffer = copy_value_to_buffer_char;
    list->print_node_value = print_node_value_char;
    list->setup_buffer_length = setup_buffer_length_char;

    return list;
}

CircularDoubleLinkedList* init_list_unsigned_char()
{
    CircularDoubleLinkedList* list = init_list(sizeof(unsigned char));
    
    list->copy_value_to_node = copy_value_to_node_unsigned_char;
    list->copy_value_to_buffer = copy_value_to_buffer_unsigned_char;
    list->print_node_value = print_node_value_unsigned_char;
    list->setup_buffer_length = setup_buffer_length_unsigned_char;

    return list;
}