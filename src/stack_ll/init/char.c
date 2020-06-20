#include "stack_ll.h"

Stack_Linked_List* init_stack_char()
{
    Stack_Linked_List* stack = init_stack(sizeof(char));
    
    stack->top = -1;
    stack->largestString = 0;

    stack->list = init_list_char();

    return stack;
}

Stack_Linked_List* init_stack_unsigned_char()
{
    Stack_Linked_List* stack = init_stack(sizeof(unsigned char));
    
    stack->top = -1;
    stack->largestString = 0;

    stack->list = init_list_unsigned_char();

    return stack;
}