#include "stack_array.h"

Stack_Array* init_stack_char_ptr()
{
    Stack_Array* stack = init_stack(sizeof(char) * MAX_CHARS_BUFFER, sizeof(char*));
    
    stack->copy_value_to_node = copy_value_to_node_char_ptr;
    stack->copy_value_to_buffer = copy_value_to_buffer_char_ptr;
    
    return stack;
}
