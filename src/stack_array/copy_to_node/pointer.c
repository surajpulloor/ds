#include "stack_array.h"
#include <string.h>

void copy_value_to_node_char_ptr(Stack_Array* stack, void* value)
{
    char* temp = (char*) stack->buffer[stack->top];

    strcpy(temp, (char*) value);
}
