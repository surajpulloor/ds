#include "stack_array.h"
#include <stdio.h>

void setup_largest_string_char_ptr(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%s", (char*) value);
}