#include "../../include/stack_array.h"

#include <stdio.h>
#include <string.h>

void push(Stack_Array* stack, char* value)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return;
    }

    if (stack->top == MAX_BUFFER - 1) {
        printf("error: cannot push anymore. the stack is full.\n");
        return;
    }

    int len = strlen(value);

    if (stack->largestString < len)
        stack->largestString = len;

    strcpy(stack->buffer[++stack->top], value);
}

char* pop(Stack_Array* stack, char* buffer)
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
        stack->largestString = 0;

    return strcpy(buffer, stack->buffer[stack->top--]);

}
