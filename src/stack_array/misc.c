#include "../../include/stack_array.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Stack* init_stack()
{
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    stack->top = -1;
    stack->largestString = 0;

    return stack;
}

void print_stack(Stack* stack, int top)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return;
    }

    if (top == -1) {
        printf("\n");
        return;
    }

    printf("+ ");

    for (int i = 1; i <= stack->largestString; i++)
        printf("-");
    
    printf(" +\n");

    printf("| %s", stack->buffer[top]);

    int len = strlen(stack->buffer[top]);

    for (int i = 1; i <= stack->largestString - len; i++)
        printf(" ");
    
    printf(" |\n");

    if (top == 0) {
        
        printf("+ ");

        for (int i = 1; i <= stack->largestString; i++)
            printf("-");
        
        printf(" +\n");

    }

    print_stack(stack, top - 1);
}

void free_stack(Stack** stack)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return;
    }

    free(*stack);
    *stack = NULL;
}
