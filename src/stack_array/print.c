#include "stack_array.h"

#include <stdio.h>
#include <string.h>


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

    for (int i = 1; i <= stack->largest_string; i++)
        printf("-");
    
    printf(" +\n");

    printf("| %s", stack->buffer[top]);

    int len = strlen(stack->buffer[top]);

    for (int i = 1; i <= stack->largest_string - len; i++)
        printf(" ");
    
    printf(" |\n");

    if (top == 0) {
        
        printf("+ ");

        for (int i = 1; i <= stack->largest_string; i++)
            printf("-");
        
        printf(" +\n");

    }

    print_stack(stack, top - 1);
}