#include "ds/sll/single_linked_list.h"

void setup_copy_value_funcs(
	SingleLinkedList* list, 
	void (*copy_value_to_node)(SingleLinkedListNode*, void*), 
	void (*copy_value_to_buffer)(void*, SingleLinkedListNode*)
)
{
    list->copy_value_to_node = copy_value_to_node;
    list->copy_value_to_buffer = copy_value_to_buffer;
}

void setup_print_node_value_func(
	SingleLinkedList* list, 
	int (*print_node_value)(SingleLinkedListNode*)
)
{
    list->print_node_value = print_node_value;
}

void setup_buffer_length_func(
	SingleLinkedList* list, 
	void (*setup_buffer_length)(SingleLinkedListNode*, void*)
)
{
    list->setup_buffer_length = setup_buffer_length;
}