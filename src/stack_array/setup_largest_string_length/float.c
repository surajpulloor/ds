#include "stack_array.h"
#include <stdio.h>

void setup_largest_string_float(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%f", *(float*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}

void setup_largest_string_double(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%lf", *(double*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}

void setup_largest_string_long_double(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%Lf", *(long double*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}
