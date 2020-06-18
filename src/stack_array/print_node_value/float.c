#include "stack_array.h"

void print_stack_value_float(Stack_Array* stack, int top)
{
    printf("%f", *(float*) stack->buffer[top]);
}

void print_stack_value_double(Stack_Array* stack, int top)
{
    printf("%lf", *(double*) stack->buffer[top]);
}

void print_stack_value_long_double(Stack_Array* stack, int top)
{
    printf("%Lf", *(long double*) stack->buffer[top]);
}