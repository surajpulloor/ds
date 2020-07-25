#include "ds/single_linked_list.h"


SingleLinkedList* init_list_float()
{
    SingleLinkedList* list = init_list(sizeof(float), NULL, NULL);
    
    list->copy_value_to_node = copy_value_to_node_float;
    list->copy_value_to_buffer = copy_value_to_buffer_float;
    list->print_node_value = print_node_value_float;
    list->setup_buffer_length = setup_buffer_length_float;

    return list;
}

SingleLinkedList* init_list_double()
{
    SingleLinkedList* list = init_list(sizeof(double), NULL, NULL);
    
    list->copy_value_to_node = copy_value_to_node_double;
    list->copy_value_to_buffer = copy_value_to_buffer_double;
    list->print_node_value = print_node_value_double;
    list->setup_buffer_length = setup_buffer_length_double;

    return list;
}

SingleLinkedList* init_list_long_double()
{
    SingleLinkedList* list = init_list(sizeof(long double), NULL, NULL);
    
    list->copy_value_to_node = copy_value_to_node_long_double;
    list->copy_value_to_buffer = copy_value_to_buffer_long_double;
    list->print_node_value = print_node_value_long_double;
    list->setup_buffer_length = setup_buffer_length_long_double;

    return list;
}