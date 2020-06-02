#include "../../include/stack_array.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Stack_Array* init_stack()
{
    Stack_Array* stack = (Stack_Array*) malloc(sizeof(Stack_Array));
    stack->top = -1;
    stack->largestString = 0;

    return stack;
}

void print_stack(Stack_Array* stack, int top)
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

void free_stack(Stack_Array** stack)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return;
    }

    free(*stack);
    *stack = NULL;
}
