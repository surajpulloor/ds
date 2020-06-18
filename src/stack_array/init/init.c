#include "stack_array.h"
#include <stdio.h>
#include <stdlib.h>


Stack_Array* init_stack(size_t type_size, size_t type_ptr_size)
{
    Stack_Array* stack = (Stack_Array*) malloc(sizeof(Stack_Array));

    // alloc buffer array
    stack->buffer = malloc(type_ptr_size * MAX_BUFFER);

    stack->top = -1;
    stack->largestString = 0;

    stack->type_size = type_size;

    return stack;
}