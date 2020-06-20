#include "stack_ll.h"

Stack_Linked_List* init_stack_char_ptr()
{
    Stack_Linked_List* stack = init_stack(sizeof(char) * MAX_BUFFER);
    
    stack->top = 0;
    stack->largestString = 0;

    stack->list = init_list_char_ptr();

    return stack;
}
