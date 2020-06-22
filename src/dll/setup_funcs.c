#include "ds/double_linked_list.h"

void setup_copy_value_funcs(
	DoubleLinkedList* list, 
	void (*copy_value_to_node)(DoubleLinkedListNode*, void*), 
	void (*copy_value_to_buffer)(void*, DoubleLinkedListNode*)
)
{
    list->copy_value_to_node = copy_value_to_node;
    list->copy_value_to_buffer = copy_value_to_buffer;
}

void setup_print_node_value_func(
	DoubleLinkedList* list, 
	void (*print_node_value)(DoubleLinkedListNode*)
)
{
    list->print_node_value = print_node_value;
}

void setup_buffer_length_func(
	DoubleLinkedList* list, 
	void (*setup_buffer_length)(DoubleLinkedListNode*, void*)
)
{
    list->setup_buffer_length = setup_buffer_length;
}