#include "stack_array.h"

void print_stack_value_short(Stack_Array* stack, int top)
{
    printf("%hi", *(short*) stack->buffer[top]);
}

void print_stack_value_unsigned_short(Stack_Array* stack, int top)
{
    printf("%hu", *(unsigned short*) stack->buffer[top]);
}

void print_stack_value_int(Stack_Array* stack, int top)
{
    printf("%d", *(int*) stack->buffer[top]);
}

void print_stack_value_unsigned_int(Stack_Array* stack, int top)
{
    printf("%u", *(unsigned int*) stack->buffer[top]);
}

void print_stack_value_long(Stack_Array* stack, int top)
{
    printf("%ld", *(long*) stack->buffer[top]);
}

void print_stack_value_unsigned_long(Stack_Array* stack, int top)
{
    printf("%lu", *(unsigned long*) stack->buffer[top]);
}

void print_stack_value_long_long(Stack_Array* stack, int top)
{
    printf("%lld", *(long long*) stack->buffer[top]);
}

void print_stack_value_unsigned_long_long(Stack_Array* stack, int top)
{
    printf("%llu", *(unsigned long long*) stack->buffer[top]);
}
