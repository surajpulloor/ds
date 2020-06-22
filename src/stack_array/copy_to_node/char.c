#include "ds/stack_array.h"

void copy_value_to_node_char(Stack_Array* stack, void* value)
{
    char* temp = (char*) stack->buffer[stack->top];

    *temp = *(char*) value;
}

void copy_value_to_node_unsigned_char(Stack_Array* stack, void* value)
{
    unsigned char* temp = (unsigned char*) stack->buffer[stack->top];

    *temp = *(unsigned char*) value;
}