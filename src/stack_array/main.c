#include "stack_array.h"
#include <stdio.h>

int main()
{
    Stack_Array* stack = init_stack_int();

    // push(stack, "Oh mu God");
    // push(stack, "kick");
    // push(stack, "me in teh");
    // push(stack, "cv");
    // push(stack, "lax");

    for (int i = 1; i < 100; i++)
        push(stack, &i);

    print_stack(stack, stack->top);

    char buffer[MAX_CHARS_BUFFER];
    printf("Value = %d\n", *(int*) pop(stack, buffer));
    printf("Value = %d\n", *(int*) pop(stack, buffer));
    printf("Value = %d\n", *(int*) pop(stack, buffer));
    printf("Value = %d\n", *(int*) pop(stack, buffer));
    printf("Value = %d\n", *(int*) pop(stack, buffer));
    printf("Value = %d\n", *(int*) pop(stack, buffer));

    print_stack(stack, stack->top);

    free_stack(&stack);
}