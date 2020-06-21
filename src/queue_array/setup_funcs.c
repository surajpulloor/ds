#include "queue_array.h"

void setup_copy_value_funcs(
	Queue_Array* queue, 
	void (*copy_value_to_node)(Queue_Array*, void*), 
	void (*copy_value_to_buffer)(void*, Queue_Array*)
)
{
    queue->copy_value_to_node = copy_value_to_node;
    queue->copy_value_to_buffer = copy_value_to_buffer;
}

void setup_print_node_value_func(
	Queue_Array* queue, 
	void (*print_node_value)(Queue_Array*, int)
)
{
	queue->print_node_value = print_node_value;
}