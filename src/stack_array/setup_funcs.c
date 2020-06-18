#include "stack_array.h"

void setup_copy_value_funcs(
	Stack_Array* list, 
	void (*copy_value_to_node)(Stack_Array*, void*), 
	void (*copy_value_to_buffer)(void*, Stack_Array*)
)
{
    list->copy_value_to_node = copy_value_to_node;
    list->copy_value_to_buffer = copy_value_to_buffer;
}