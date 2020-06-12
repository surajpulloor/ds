#include "../../include/single_linked_list.h"
#include <stdio.h>

SingleLinkedList* init_list()
{
    SingleLinkedList* list = (SingleLinkedList*) malloc(sizeof(SingleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;

    return list;
}

SingleLinkedList* init_list_int()
{
    SingleLinkedList* list = init_list();
    
    list->alloc_buffer = alloc_buffer_int;
    list->copy_value_to_node = copy_value_to_node_int;
    list->copy_value_to_buffer = copy_value_to_buffer_int;
    list->free_buffer = free_buffer;

    return list;
}

SingleLinkedList* init_list_float()
{
    SingleLinkedList* list = init_list();
    
    list->alloc_buffer = alloc_buffer_float;
    list->copy_value_to_node = copy_value_to_node_float;
    list->copy_value_to_buffer = copy_value_to_buffer_float;
    list->free_buffer = free_buffer;

    return list;
}

SingleLinkedList* init_list_double()
{
    SingleLinkedList* list = init_list();
    
    list->alloc_buffer = alloc_buffer_double;
    list->copy_value_to_node = copy_value_to_node_double;
    list->copy_value_to_buffer = copy_value_to_buffer_double;
    list->free_buffer = free_buffer;

    return list;
}

SingleLinkedList* init_list_char()
{
    SingleLinkedList* list = init_list();
    
    list->alloc_buffer = alloc_buffer_char;
    list->copy_value_to_node = copy_value_to_node_char;
    list->copy_value_to_buffer = copy_value_to_buffer_char;
    list->free_buffer = free_buffer;

    return list;
}

SingleLinkedList* init_list_char_ptr()
{
    SingleLinkedList* list = init_list();
    
    list->alloc_buffer = alloc_buffer_char_ptr;
    list->copy_value_to_node = copy_value_to_node_char_ptr;
    list->copy_value_to_buffer = copy_value_to_buffer_char_ptr;
    list->free_buffer = free_buffer;

    return list;
}
