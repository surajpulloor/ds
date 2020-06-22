#include "ds/stack_array.h"

void copy_value_to_buffer_float(void* buffer, Stack_Array* stack)
{
    float* temp = (float*) buffer;

    *temp = *(float*) stack->buffer[stack->top];
}

void copy_value_to_buffer_double(void* buffer, Stack_Array* stack)
{
    double* temp = (double*) buffer;

    *temp = *(double*) stack->buffer[stack->top];
}

void copy_value_to_buffer_long_double(void* buffer, Stack_Array* stack)
{
    long double* temp = (long double*) buffer;

    *temp = *(long double*) stack->buffer[stack->top];
}