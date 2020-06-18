#include "stack_array.h"
#include <stdio.h>

void setup_largest_string_float(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%f", *(float*) value);
}

void setup_largest_string_double(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%lf", *(double*) value);
}

void setup_largest_string_long_double(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%Lf", *(long double*) value);
}
