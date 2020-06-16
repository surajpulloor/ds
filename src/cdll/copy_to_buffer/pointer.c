#include "circular_double_linked_list.h"
#include <string.h>

void copy_value_to_buffer_char_ptr(void* buffer, CircularDoubleLinkedListNode* node)
{
    char* temp = (char*) buffer;

    strcpy(temp, (char*) node->buffer);
}
