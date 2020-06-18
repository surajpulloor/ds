#include "stack_array.h"
#include <stdio.h>

void setup_largest_string_length_short(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%hi", *(short*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
    
}

void setup_largest_string_length_unsigned_short(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%hu", *(unsigned short*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}

void setup_largest_string_length_int(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%d", *(int*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}

void setup_largest_string_length_unsigned_int(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%u", *(unsigned int*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}

void setup_largest_string_length_long(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%ld", *(long*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}

void setup_largest_string_length_unsigned_long(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%lu", *(unsigned long*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}

void setup_largest_string_length_long_long(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%lld", *(long long*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}

void setup_largest_string_length_unsigned_long_long(Stack_Array* stack, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    int len = sprintf(buffer, "%llu", *(unsigned long long*) value);

    if (stack->largest_string < len)
        stack->largest_string = len;
}

