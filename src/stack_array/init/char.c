#include "stack_array.h"

Stack_Array* init_stack_char()
{
    Stack_Array* stack = init_stack(sizeof(char), sizeof(char*));
    
    stack->copy_value_to_node = copy_value_to_node_char;
    stack->copy_value_to_buffer = copy_value_to_buffer_char;
    stack->setup_largest_string_length = setup_largest_string_length_char;
    
    return stack;
}

Stack_Array* init_stack_unsigned_char()
{
    Stack_Array* stack = init_stack(sizeof(unsigned char), sizeof(unsigned char*));
    
    stack->copy_value_to_node = copy_value_to_node_unsigned_char;
    stack->copy_value_to_buffer = copy_value_to_buffer_unsigned_char;
    stack->setup_largest_string_length = setup_largest_string_length_unsigned_char;
    
    return stack;
}