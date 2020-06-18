#include "stack_array.h"

Stack_Array* init_stack_short()
{
    Stack_Array* stack = init_stack(sizeof(short), sizeof(short*));
    
    stack->copy_value_to_node = copy_value_to_node_short;
    stack->copy_value_to_buffer = copy_value_to_buffer_short;
    stack->setup_largest_string_length = setup_largest_string_length_short;
    stack->print_node_value = print_node_value_short;


    return stack;
}

Stack_Array* init_stack_unsigned_short()
{
    Stack_Array* stack = init_stack(sizeof(unsigned short), sizeof(unsigned short*));
    
    stack->copy_value_to_node = copy_value_to_node_unsigned_short;
    stack->copy_value_to_buffer = copy_value_to_buffer_unsigned_short;
    stack->setup_largest_string_length = setup_largest_string_length_unsigned_short;
    stack->print_node_value = print_node_value_unsigned_short;


    return stack;
}


Stack_Array* init_stack_int()
{
    Stack_Array* stack = init_stack(sizeof(int), sizeof(int*));
    
    stack->copy_value_to_node = copy_value_to_node_int;
    stack->copy_value_to_buffer = copy_value_to_buffer_int;
    stack->setup_largest_string_length = setup_largest_string_length_int;
    stack->print_node_value = print_node_value_int;


    return stack;
}

Stack_Array* init_stack_unsigned_int()
{
    Stack_Array* stack = init_stack(sizeof(unsigned int), sizeof(unsigned int*));
    
    stack->copy_value_to_node = copy_value_to_node_unsigned_int;
    stack->copy_value_to_buffer = copy_value_to_buffer_unsigned_int;
    stack->setup_largest_string_length = setup_largest_string_length_unsigned_int;
    stack->print_node_value = print_node_value_unsigned_int;


    return stack;
}

Stack_Array* init_stack_long()
{
    Stack_Array* stack = init_stack(sizeof(long), sizeof(long*));
    
    stack->copy_value_to_node = copy_value_to_node_long;
    stack->copy_value_to_buffer = copy_value_to_buffer_long;
    stack->setup_largest_string_length = setup_largest_string_length_long;
    stack->print_node_value = print_node_value_long;


    return stack;
}

Stack_Array* init_stack_unsigned_long()
{
    Stack_Array* stack = init_stack(sizeof(unsigned long), sizeof(unsigned long*));
    
    stack->copy_value_to_node = copy_value_to_node_unsigned_long;
    stack->copy_value_to_buffer = copy_value_to_buffer_unsigned_long;
    stack->setup_largest_string_length = setup_largest_string_length_unsigned_long;
    stack->print_node_value = print_node_value_unsigned_long;


    return stack;
}

Stack_Array* init_stack_long_long()
{
    Stack_Array* stack = init_stack(sizeof(long long), sizeof(long long*));
    
    stack->copy_value_to_node = copy_value_to_node_long_long;
    stack->copy_value_to_buffer = copy_value_to_buffer_long_long;
    stack->setup_largest_string_length = setup_largest_string_length_long_long;
    stack->print_node_value = print_node_value_long_long;


    return stack;
}

Stack_Array* init_stack_unsigned_long_long()
{
    Stack_Array* stack = init_stack(sizeof(unsigned long long), sizeof(unsigned long long*));
    
    stack->copy_value_to_node = copy_value_to_node_unsigned_long_long;
    stack->copy_value_to_buffer = copy_value_to_buffer_unsigned_long_long;
    stack->setup_largest_string_length = setup_largest_string_length_unsigned_long_long;
    stack->print_node_value = print_node_value_unsigned_long_long;


    return stack;
}