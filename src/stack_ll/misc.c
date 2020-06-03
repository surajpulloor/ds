#include "../../include/stack_ll.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Stack_Linked_List* init_stack()
{
    Stack_Linked_List* stack = (Stack_Linked_List*) malloc(sizeof(Stack_Linked_List));
    stack->list = init_list();
    stack->largestString = 0;
    stack->top = 0;

    return stack;
}

void print_stack(Stack_Linked_List* stack)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return;
    }

    if (stack->top == 0) {
        printf("error: cannot print stack, because its empty.\n");
        return;
    }

    int top = stack->top;

    for (SingleLinkedListNode* node = stack->list->front; node; node = node->next, top--) {
        
        printf("+ ");

        for (int i = 1; i <= stack->largestString; i++)
            printf("-");
        
        printf(" +\n");

        printf("| %s", node->data);

        int len = strlen(node->data);

        for (int i = 1; i <= stack->largestString - len; i++)
            printf(" ");
        
        printf(" |\n");

        if (top == 1) {
            
            printf("+ ");

            for (int i = 1; i <= stack->largestString; i++)
                printf("-");
            
            printf(" +\n");

        }

    }

}

void free_stack(Stack_Linked_List** stack)
{
    if (stack == NULL) {
        printf("error: stack doesn't exists. please create one.\n");
        return;
    }

    if ((*stack)->top != 0)
        free_list(&((*stack)->list));
        
    free(*stack);
    *stack = NULL;
}
