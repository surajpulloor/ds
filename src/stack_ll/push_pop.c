#include "../../include/stack_ll.h"

#include <stdio.h>
#include <string.h>

void push(Stack_Linked_List* stack, char* value)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return;
    }

    int len = strlen(value);

    if (stack->largestString < len)
        stack->largestString = len;

    stack->top++;

    push_front(stack->list, value);
}

char* pop(Stack_Linked_List* stack, char* buffer)
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
