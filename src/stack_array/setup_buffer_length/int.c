#include "stack_array.h"
#include <stdio.h>

void setup_largest_string_short(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%hi", *(short*) value);
}

void setup_largest_string_unsigned_short(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%hu", *(unsigned short*) value);
}

void setup_largest_string_int(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%d", *(int*) value);
}

void setup_largest_string_unsigned_int(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%u", *(unsigned int*) value);
}

void setup_largest_string_long(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%ld", *(long*) value);
}

void setup_largest_string_unsigned_long(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%lu", *(unsigned long*) value);
}

void setup_largest_string_long_long(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%lld", *(long long*) value);
}

void setup_largest_string_unsigned_long_long(Stack_Array* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->largest_string = sprintf(buffer, "%llu", *(unsigned long long*) value);
}

