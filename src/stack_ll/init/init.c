#include "stack_ll.h"
#include <stdlib.h>


Stack_Linked_List* init_stack(size_t type_size)
{
    Stack_Linked_List* stack = (Stack_Linked_List*) malloc(sizeof(Stack_Linked_List));
    
    stack->top = -1;
    stack->largestString = 0;

    stack->list = init_list(type_size);

    return stack;
}