#include "ds/stack_array.h"

void copy_value_to_node_short(Stack_Array* stack, void* value)
{
    short* temp = (short*) stack->buffer[stack->top];

    *temp = *(short*) value;
}

void copy_value_to_node_unsigned_short(Stack_Array* stack, void* value)
{
    unsigned short* temp = (unsigned short*) stack->buffer[stack->top];

    *temp = *(unsigned short*) value;
}


void copy_value_to_node_int(Stack_Array* stack, void* value)
{
    int* temp = (int*) stack->buffer[stack->top];

    *temp = *(int*) value;
}

void copy_value_to_node_unsigned_int(Stack_Array* stack, void* value)
{
    unsigned int* temp = (unsigned int*) stack->buffer[stack->top];

    *temp = *(unsigned int*) value;
}

void copy_value_to_node_long(Stack_Array* stack, void* value)
{
    long* temp = (long*) stack->buffer[stack->top];

    *temp = *(long*) value;
}

void copy_value_to_node_unsigned_long(Stack_Array* stack, void* value)
{
    unsigned long* temp = (unsigned long*) stack->buffer[stack->top];

    *temp = *(unsigned long*) value;
}

void copy_value_to_node_long_long(Stack_Array* stack, void* value)
{
    long long* temp = (long long*) stack->buffer[stack->top];

    *temp = *(long long*) value;
}

void copy_value_to_node_unsigned_long_long(Stack_Array* stack, void* value)
{
    unsigned long long* temp = (unsigned long long*) stack->buffer[stack->top];

    *temp = *(unsigned long long*) value;
}