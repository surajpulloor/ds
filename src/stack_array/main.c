#include "stack_array.h"
#include <stdio.h>

int main()
{
    Stack_Array* stack = init_stack_char_ptr();

    push(stack, "Oh mu God");
    push(stack, "kick");
    push(stack, "me in teh");
    push(stack, "cv");
    push(stack, "lax");

    print_stack(stack, stack->top);

    char buffer[MAX_CHARS_BUFFER];
    printf("Value = %s\n", (char*) pop(stack, buffer));
    printf("Value = %s\n", (char*) pop(stack, buffer));
    printf("Value = %s\n", (char*) pop(stack, buffer));
    printf("Value = %s\n", (char*) pop(stack, buffer));
    printf("Value = %s\n", (char*) pop(stack, buffer));
    printf("Value = %s\n", (char*) pop(stack, buffer));

    print_stack(stack, stack->top);

    free_stack(&stack);
}