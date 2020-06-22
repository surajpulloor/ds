#include "ds/stack_array.h"

int print_node_value_float(Stack_Array* stack, int top)
{
    return printf("%f", *(float*) stack->buffer[top]);
}

int print_node_value_double(Stack_Array* stack, int top)
{
    return printf("%lf", *(double*) stack->buffer[top]);
}

int print_node_value_long_double(Stack_Array* stack, int top)
{
    return printf("%Lf", *(long double*) stack->buffer[top]);
}