#include "ds/stack_ll.h"

void setup_copy_value_funcs(
	Stack_Linked_List* stack, 
	void (*copy_value_to_node)(SingleLinkedListNode*, void*), 
	void (*copy_value_to_buffer)(void*, SingleLinkedListNode*)
)
{
    stack->list->copy_value_to_node = copy_value_to_node;
    stack->list->copy_value_to_buffer = copy_value_to_buffer;
}

void setup_print_node_value_func(
	Stack_Linked_List* stack, 
	int (*print_node_value)(SingleLinkedListNode*)
)
{
    stack->list->print_node_value = print_node_value;
}