#include "../../../include/single_linked_list.h"


SingleLinkedList* init_list_float()
{
    SingleLinkedList* list = init_list(sizeof(float));
    
    list->copy_value_to_node = copy_value_to_node_float;
    list->copy_value_to_buffer = copy_value_to_buffer_float;

    return list;
}

SingleLinkedList* init_list_double()
{
    SingleLinkedList* list = init_list(sizeof(double));
    
    list->copy_value_to_node = copy_value_to_node_double;
    list->copy_value_to_buffer = copy_value_to_buffer_double;

    return list;
}

SingleLinkedList* init_list_long_double()
{

}