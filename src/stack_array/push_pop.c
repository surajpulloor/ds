#include "../../include/stack_array.h"

#include <stdio.h>
#include <string.h>

void push(Stack* stack, char* value)
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

char* pop(Stack* stack, char* buffer)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return NULL;
    }

    if (stack->top == -1) {
        printf("error: cannot pop anymore. the stack is empty.\n");
        return NULL;
    }

    if (stack->top > 1) {
        int maxLen = strlen(stack->buffer[stack->top - 1]);

        // calculate largestString again
        for (int top = stack->top - 2; top >= 0; top--) {
            int len = strlen(stack->buffer[top]);

            if (maxLen < len)
                maxLen = len;
        }

        stack->largestString = maxLen;
    } else
        stack->largestString = 0;

    return strcpy(buffer, stack->buffer[stack->top--]);

}
