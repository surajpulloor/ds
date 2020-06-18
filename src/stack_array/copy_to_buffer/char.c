#include "stack_array.h"

void copy_value_to_buffer_char(void* buffer, Stack_Array* stack)
{
    char* temp = (char*) buffer;

    *temp = *(char*) stack->buffer[stack->top];
}

void copy_value_to_buffer_unsigned_char(void* buffer, Stack_Array* stack)
{
    unsigned char* temp = (unsigned char*) buffer;

    *temp = *(unsigned char*) stack->buffer[stack->top];
}