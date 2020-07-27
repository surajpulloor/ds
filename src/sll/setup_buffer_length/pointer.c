#include "ds/sll/single_linked_list.h"
#include <stdio.h>

void setup_buffer_length_char_ptr(SingleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%s", (char*) value);
}