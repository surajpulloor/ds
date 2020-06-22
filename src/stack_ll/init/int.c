#include "ds/stack_ll.h"

Stack_Linked_List* init_stack_short()
{
    Stack_Linked_List* stack = init_stack(sizeof(short));
    
    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_short();
     
    return stack;
}

Stack_Linked_List* init_stack_unsigned_short()
{
    Stack_Linked_List* stack = init_stack(sizeof(unsigned short));
    
    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_unsigned_char();

    return stack;
}


Stack_Linked_List* init_stack_int()
{
    Stack_Linked_List* stack = init_stack(sizeof(int));
    
    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_int();

    return stack;
}

Stack_Linked_List* init_stack_unsigned_int()
{
    Stack_Linked_List* stack = init_stack(sizeof(unsigned int));
    
    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_unsigned_int();

    return stack;
}

Stack_Linked_List* init_stack_long()
{
    Stack_Linked_List* stack = init_stack(sizeof(long));
    
    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_long();
  
    return stack;
}

Stack_Linked_List* init_stack_unsigned_long()
{
    Stack_Linked_List* stack = init_stack(sizeof(unsigned long));
    
    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_unsigned_long();

    return stack;
}

Stack_Linked_List* init_stack_long_long()
{
    Stack_Linked_List* stack = init_stack(sizeof(long long));
    
    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_long_long();

    return stack;
}

Stack_Linked_List* init_stack_unsigned_long_long()
{
    Stack_Linked_List* stack = init_stack(sizeof(unsigned long long));
    
    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_unsigned_long_long();

    return stack;
}