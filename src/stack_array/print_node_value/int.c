#include "stack_array.h"

int print_node_value_short(Stack_Array* stack, int top)
{
    return printf("%hi", *(short*) stack->buffer[top]);
}

int print_node_value_unsigned_short(Stack_Array* stack, int top)
{
    return printf("%hu", *(unsigned short*) stack->buffer[top]);
}

int print_node_value_int(Stack_Array* stack, int top)
{
    return printf("%d", *(int*) stack->buffer[top]);
}

int print_node_value_unsigned_int(Stack_Array* stack, int top)
{
    return printf("%u", *(unsigned int*) stack->buffer[top]);
}

int print_node_value_long(Stack_Array* stack, int top)
{
    return printf("%ld", *(long*) stack->buffer[top]);
}

int print_node_value_unsigned_long(Stack_Array* stack, int top)
{
    return printf("%lu", *(unsigned long*) stack->buffer[top]);
}

int print_node_value_long_long(Stack_Array* stack, int top)
{
    return printf("%lld", *(long long*) stack->buffer[top]);
}

int print_node_value_unsigned_long_long(Stack_Array* stack, int top)
{
    return printf("%llu", *(unsigned long long*) stack->buffer[top]);
}
