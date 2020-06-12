#include "../../include/single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

SingleLinkedList* init_list(size_t data_type_size)
{
    SingleLinkedList* list = (SingleLinkedList*) malloc(sizeof(SingleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;
    list->data_type_size = data_type_size;

    return list;
}

SingleLinkedList* init_list_int()
{
    SingleLinkedList* list = init_list(sizeof(int));
    
    list->copy_value_to_node = copy_value_to_node_int;
    list->copy_value_to_buffer = copy_value_to_buffer_int;

    return list;
}

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

SingleLinkedList* init_list_char()
{
    SingleLinkedList* list = init_list(sizeof(char));
    
    list->copy_value_to_node = copy_value_to_node_char;
    list->copy_value_to_buffer = copy_value_to_buffer_char;

    return list;
}

SingleLinkedList* init_list_char_ptr()
{
    SingleLinkedList* list = init_list(sizeof(char) * MAX_BUFFER);
    
    list->copy_value_to_node = copy_value_to_node_char_ptr;
    list->copy_value_to_buffer = copy_value_to_buffer_char_ptr;

    return list;
}
