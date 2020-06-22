#include "ds/stack_ll.h"
#include <stdio.h>

int main()
{
    Stack_Linked_List* stack = init_stack_char_ptr();

    push(stack, "Oh mu God");
    push(stack, "kick");
    push(stack, "me in teh");
    push(stack, "cv");
    push(stack, "lax");

    print_stack(stack);

    char buffer[MAX_CHARS];
    printf("Value = %s\n", (char*) pop(stack, buffer));
    printf("Value = %s\n", (char*) pop(stack, buffer));
    printf("Value = %s\n", (char*) pop(stack, buffer));
    printf("Value = %s\n", (char*) pop(stack, buffer));
    printf("Value = %s\n", (char*) pop(stack, buffer));
    printf("Value = %s\n", (char*) pop(stack, buffer));

    print_stack(stack);

    free_stack(&stack);
}