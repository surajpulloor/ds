#include "circular_single_linked_list.h"

void setup_copy_value_funcs(
	CircularSingleLinkedList* list, 
	void (*copy_value_to_node)(CircularSingleLinkedListNode*, void*), 
	void (*copy_value_to_buffer)(void*, CircularSingleLinkedListNode*)
)
{
    list->copy_value_to_node = copy_value_to_node;
    list->copy_value_to_buffer = copy_value_to_buffer;
}

void setup_print_node_value_func(
	CircularSingleLinkedList* list, 
	void (*print_node_value)(CircularSingleLinkedListNode*)
)
{
    list->print_node_value = print_node_value;
}

void setup_buffer_length_func(
	CircularSingleLinkedList* list, 
	void (*setup_buffer_length)(CircularSingleLinkedListNode*, void*)
)
{
    list->setup_buffer_length = setup_buffer_length;
}