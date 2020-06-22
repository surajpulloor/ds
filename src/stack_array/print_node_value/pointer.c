#include "ds/stack_array.h"

int print_node_value_char_ptr(Stack_Array* stack, int top)
{
    return printf("%s", (char*) stack->buffer[top]);
}