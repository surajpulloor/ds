#include "circular_single_linked_list.h"


CircularSingleLinkedList* init_list_float()
{
    CircularSingleLinkedList* list = init_list(sizeof(float));
    
    list->copy_value_to_node = copy_value_to_node_float;
    list->copy_value_to_buffer = copy_value_to_buffer_float;
    list->print_node_value = print_node_value_float;
    list->setup_buffer_length = setup_buffer_length_float;

    return list;
}

CircularSingleLinkedList* init_list_double()
{
    CircularSingleLinkedList* list = init_list(sizeof(double));
    
    list->copy_value_to_node = copy_value_to_node_double;
    list->copy_value_to_buffer = copy_value_to_buffer_double;
    list->print_node_value = print_node_value_double;
    list->setup_buffer_length = setup_buffer_length_double;

    return list;
}

CircularSingleLinkedList* init_list_long_double()
{
    CircularSingleLinkedList* list = init_list(sizeof(long double));
    
    list->copy_value_to_node = copy_value_to_node_long_double;
    list->copy_value_to_buffer = copy_value_to_buffer_long_double;
    list->print_node_value = print_node_value_long_double;
    list->setup_buffer_length = setup_buffer_length_long_double;

    return list;
}