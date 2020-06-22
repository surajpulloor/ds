#include "ds/stack_array.h"

int print_node_value_char(Stack_Array* stack, int top)
{
    return printf("%c", *(char*) stack->buffer[top]);
}

int print_node_value_unsigned_char(Stack_Array* stack, int top)
{
    return printf("%c", *(unsigned char*) stack->buffer[top]);
}
