#include "stack_array.h"
#include <string.h>

void copy_value_to_buffer_char_ptr(void* buffer, Stack_Array* stack)
{
    char* temp = (char*) buffer;

    strcpy(temp, (char*) stack->buffer[stack->top]);
}
