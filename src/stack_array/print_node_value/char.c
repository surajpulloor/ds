#include "stack_array.h"

void print_stack_value_char(Stack_Array* stack, int top)
{
    printf("%c", *(char*) stack->buffer[top]);
}

void print_stack_value_unsigned_char(Stack_Array* stack, int top)
{
    printf("%c", *(unsigned char*) stack->buffer[top]);
}
