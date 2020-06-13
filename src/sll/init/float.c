#include "../../../include/single_linked_list.h"


SingleLinkedList* init_list_float()
{
    SingleLinkedList* list = init_list(sizeof(float));
    
    list->copy_value_to_node = copy_value_to_node_float;
    list->copy_value_to_buffer = copy_value_to_buffer_float;
    list->print_node_value = print_node_value_float;

    return list;
}

SingleLinkedList* init_list_double()
{
    SingleLinkedList* list = init_list(sizeof(double));
    
    list->copy_value_to_node = copy_value_to_node_double;
    list->copy_value_to_buffer = copy_value_to_buffer_double;
    list->print_node_value = print_node_value_double;

    return list;
}

SingleLinkedList* init_list_long_double()
{
    SingleLinkedList* list = init_list(sizeof(long double));
    
    list->copy_value_to_node = copy_value_to_node_long_double;
    list->copy_value_to_buffer = copy_value_to_buffer_long_double;
    list->print_node_value = print_node_value_long_double;

    return list;
}