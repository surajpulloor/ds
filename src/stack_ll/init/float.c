#include "ds/stack_ll.h"


Stack_Linked_List* init_stack_float()
{
    Stack_Linked_List* stack = init_stack(sizeof(float));

    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_float();

    return stack;
}

Stack_Linked_List* init_stack_double()
{
    Stack_Linked_List* stack = init_stack(sizeof(double));
    
    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_double();

    return stack;
}

Stack_Linked_List* init_stack_long_double()
{
    Stack_Linked_List* stack = init_stack(sizeof(long double));
    
    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_long_double();

    return stack;
}