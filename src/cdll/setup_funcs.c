#include "ds/circular_double_linked_list.h"

void setup_copy_value_funcs(
	CircularDoubleLinkedList* list, 
	void (*copy_value_to_node)(CircularDoubleLinkedListNode*, void*), 
	void (*copy_value_to_buffer)(void*, CircularDoubleLinkedListNode*)
)
{
    list->copy_value_to_node = copy_value_to_node;
    list->copy_value_to_buffer = copy_value_to_buffer;
}

void setup_print_node_value_func(
	CircularDoubleLinkedList* list, 
	void (*print_node_value)(CircularDoubleLinkedListNode*)
)
{
    list->print_node_value = print_node_value;
}

void setup_buffer_length_func(
	CircularDoubleLinkedList* list, 
	void (*setup_buffer_length)(CircularDoubleLinkedListNode*, void*)
)
{
    list->setup_buffer_length = setup_buffer_length;
}