#include "stack_array.h"
#include <stdio.h>

void setup_largest_string_char(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%c", *(char*) value);
}

void setup_largest_string_unsigned_char(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%c", *(unsigned char*) value);
}
