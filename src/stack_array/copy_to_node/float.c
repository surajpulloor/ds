#include "stack_array.h"

void copy_value_to_node_float(Stack_Array* stack, void* value)
{
    float* temp = (float*) stack->buffer[stack->top];

    *temp = *(float*) value;
}

void copy_value_to_node_double(Stack_Array* stack, void* value)
{
    double* temp = (double*) stack->buffer[stack->top];

    *temp = *(double*) value;
}

void copy_value_to_node_long_double(Stack_Array* stack, void* value)
{
    long double* temp = (long double*) stack->buffer[stack->top];

    *temp = *(long double*) value;
}