#include "ds/stack_array.h"

void setup_copy_value_funcs(
	Stack_Array* list, 
	void (*copy_value_to_node)(Stack_Array*, void*), 
	void (*copy_value_to_buffer)(void*, Stack_Array*)
)
{
    list->copy_value_to_node = copy_value_to_node;
    list->copy_value_to_buffer = copy_value_to_buffer;
}

void setup_print_node_value_func(
	Stack_Array* stack, 
	int (*print_node_value_func)(Stack_Array*, int)
)
{
	stack->print_node_value = print_node_value_func;
}

void setup_largest_string_length_func(
	Stack_Array* stack, 
	void (*largest_string_length_func)(Stack_Array*, void*)
)
{
	stack->setup_largest_string_length = largest_string_length_func;
}