#include "../../include/stack_array.h"
#include <stdio.h>

int main()
{
    Stack* stack = init_stack();

    push(stack, "Oh mu God");
    push(stack, "kick");
    push(stack, "me in teh");
    push(stack, "cv");
    push(stack, "lax");

    print_stack(stack, stack->top);

    char buffer[MAX_CHARS];
    printf("Value = %s\n", pop(stack, buffer));
    printf("Value = %s\n", pop(stack, buffer));
    printf("Value = %s\n", pop(stack, buffer));
    printf("Value = %s\n", pop(stack, buffer));
    printf("Value = %s\n", pop(stack, buffer));
    printf("Value = %s\n", pop(stack, buffer));

    print_stack(stack, stack->top);

    free_stack(&stack);
}