#include "stack_array.h"

#include <stdio.h>
#include <string.h>

void push(Stack_Array* stack, void* value)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return;
    }

    if (stack->top == MAX_BUFFER - 1) {
        printf("error: cannot push anymore. the stack is full.\n");
        return;
    }

    stack->top++;

    alloc_buffer(stack);

    stack->copy_value_to_node(stack, value);
}

void* pop(Stack_Array* stack, void* buffer)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return NULL;
    }

    if (stack->top == -1) {
        printf("error: cannot pop anymore. the stack is empty.\n");
        return NULL;
    }

    if (stack->top == 0)
        stack->largest_string = 0;

    
    stack->copy_value_to_buffer(buffer, stack);

    free_buffer(stack);
    stack->top--;

    return buffer;
}
