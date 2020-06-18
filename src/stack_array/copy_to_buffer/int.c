#include "stack_array.h"

void copy_value_to_buffer_short(void* buffer, Stack_Array* stack)
{
    short* temp = (short*) buffer;

    *temp = *(short*) stack->buffer[stack->top];
}

void copy_value_to_buffer_unsigned_short(void* buffer, Stack_Array* stack)
{
    unsigned short* temp = (unsigned short*) buffer;

    *temp = *(unsigned short*) stack->buffer[stack->top];
}


void copy_value_to_buffer_int(void* buffer, Stack_Array* stack)
{
    int* temp = (int*) buffer;

    *temp = *(int*) stack->buffer[stack->top];
}

void copy_value_to_buffer_unsigned_int(void* buffer, Stack_Array* stack)
{
    unsigned int* temp = (unsigned int*) buffer;

    *temp = *(unsigned int*) stack->buffer[stack->top];
}

void copy_value_to_buffer_long(void* buffer, Stack_Array* stack)
{
    long* temp = (long*) buffer;

    *temp = *(long*) stack->buffer[stack->top];
}

void copy_value_to_buffer_unsigned_long(void* buffer, Stack_Array* stack)
{
    unsigned long* temp = (unsigned long*) buffer;

    *temp = *(unsigned long*) stack->buffer[stack->top];
}

void copy_value_to_buffer_long_long(void* buffer, Stack_Array* stack)
{
    long long* temp = (long long*) buffer;

    *temp = *(long long*) stack->buffer[stack->top];
}

void copy_value_to_buffer_unsigned_long_long(void* buffer, Stack_Array* stack)
{
    unsigned long long* temp = (unsigned long long*) buffer;

    *temp = *(unsigned long long*) stack->buffer[stack->top];
}
