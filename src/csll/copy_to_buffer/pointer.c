#include "ds/circular_single_linked_list.h"
#include <string.h>

void copy_value_to_buffer_char_ptr(void* buffer, CircularSingleLinkedListNode* node)
{
    char* temp = (char*) buffer;

    strcpy(temp, (char*) node->buffer);
}
