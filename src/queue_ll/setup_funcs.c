#include "queue_ll.h"

void setup_copy_value_funcs(
	Queue_Linked_List* queue, 
	void (*copy_value_to_node)(SingleLinkedListNode*, void*), 
	void (*copy_value_to_buffer)(void*, SingleLinkedListNode*)
)
{
    queue->list->copy_value_to_node = copy_value_to_node;
    queue->list->copy_value_to_buffer = copy_value_to_buffer;
}

void setup_print_node_value_func(
	Queue_Linked_List* queue, 
	int (*print_node_value)(SingleLinkedListNode*)
)
{
    queue->list->print_node_value = print_node_value;
}