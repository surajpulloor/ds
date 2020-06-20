#include "../../include/stack_ll.h"

#include <stdio.h>
#include <string.h>

void push(Stack_Linked_List* stack, void* value)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return;
    }

    stack->top++;

    int len = push_front(stack->list, value)->buffer_length;

    if (stack->largestString < len)
        stack->largestString = len;
}

void* pop(Stack_Linked_List* stack, void* buffer)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return NULL;
    }

    if (stack->top == 0) {
        printf("error: cannot pop anymore. the stack is empty.\n");
        return NULL;
    }

    if (stack->top == 1)
        stack->largestString = 0;

    stack->top--;

    return pop_front_v(stack->list, buffer);
}
