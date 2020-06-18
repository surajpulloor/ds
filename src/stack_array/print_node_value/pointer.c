#include "stack_array.h"

void print_stack_value_char_ptr(Stack_Array* stack, int top)
{
    printf("%s", (char*) stack->buffer[top]);
}