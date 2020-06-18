#include "stack_array.h"
#include <stdio.h>

void setup_largest_string_char(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%c", *(char*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}

void setup_largest_string_unsigned_char(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%c", *(unsigned char*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}
