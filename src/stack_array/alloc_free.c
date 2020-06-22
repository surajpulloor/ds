#include "ds/stack_array.h"
#include <stdio.h>
#include <stdlib.h>

void* alloc_buffer(Stack_Array* stack)
{
    stack->buffer[stack->top] = malloc(stack->type_size);
}

void free_buffer(Stack_Array* stack)
{
    free(stack->buffer[stack->top]);
}



void free_stack(Stack_Array** stack)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return;
    }

    // free all the elements in the buffer
    for (; (*stack)->top >= 0; (*stack)->top--)
        free_buffer((*stack));

    // then free the buffer
    free((*stack)->buffer);

    // then free the stack
    free(*stack);
    *stack = NULL;
}
