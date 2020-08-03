#include "ds/sll/single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>


SingleLinkedList* init_list(
    size_t type_size, 

    void (*init_struct_members)(SingleLinkedListNode*), 
    void (*free_struct_members)(SingleLinkedListNode*),

    void (*copy_value_to_node)(SingleLinkedListNode*, void*),
	void (*copy_value_to_buffer)(void*, SingleLinkedListNode*),


	int (*print_node_value)(SingleLinkedListNode*),

	void (*setup_buffer_length)(SingleLinkedListNode*, void*),
    
    // Comparison funcs
	bool (*equal_nodes)(SingleLinkedListNode*, SingleLinkedListNode*),

	bool (*less_than_nodes)(SingleLinkedListNode*, SingleLinkedListNode*),
	bool (*less_than_equal_nodes)(SingleLinkedListNode*, SingleLinkedListNode*),

	bool (*greater_than_nodes)(SingleLinkedListNode*, SingleLinkedListNode*),
	bool (*greater_than_equal_nodes)(SingleLinkedListNode*, SingleLinkedListNode*)
) {
    SingleLinkedList* list = (SingleLinkedList*) malloc(sizeof(SingleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;
    list->type_size = type_size;

    list->init_struct_members = init_struct_members;
    list->free_struct_members = free_struct_members;

    list->copy_value_to_node = copy_value_to_node;
    list->copy_value_to_buffer = copy_value_to_buffer;

    list->print_node_value = print_node_value;
    list->setup_buffer_length = setup_buffer_length;

    list->equal_nodes = equal_nodes;
    
    list->less_than_nodes = less_than_nodes;
    list->less_than_equal_nodes = less_than_equal_nodes;
    
    list->greater_than_nodes = greater_than_nodes;
    list->greater_than_equal_nodes = greater_than_equal_nodes;


    return list;
}