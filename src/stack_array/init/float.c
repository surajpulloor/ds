#include "stack_array.h"


Stack_Array* init_stack_float()
{
    Stack_Array* stack = init_stack(sizeof(float), sizeof(float*));
    
    stack->copy_value_to_node = copy_value_to_node_float;
    stack->copy_value_to_buffer = copy_value_to_buffer_float;
    stack->setup_largest_string_length = setup_largest_string_length_float;
    
    return stack;
}

Stack_Array* init_stack_double()
{
    Stack_Array* stack = init_stack(sizeof(double), sizeof(double*));
    
    stack->copy_value_to_node = copy_value_to_node_double;
    stack->copy_value_to_buffer = copy_value_to_buffer_double;
    stack->setup_largest_string_length = setup_largest_string_length_double;
    
    return stack;
}

Stack_Array* init_stack_long_double()
{
    Stack_Array* stack = init_stack(sizeof(long double), sizeof(long double*));
    
    stack->copy_value_to_node = copy_value_to_node_long_double;
    stack->copy_value_to_buffer = copy_value_to_buffer_long_double;
    stack->setup_largest_string_length = setup_largest_string_length_long_double;
    
    return stack;
}