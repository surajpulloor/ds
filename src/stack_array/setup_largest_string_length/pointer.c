#include "stack_array.h"
#include <stdio.h>

void setup_largest_string_length_char_ptr(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%s", (char*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}