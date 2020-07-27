#include "ds/sll/single_linked_list.h"
#include <stdio.h>

void setup_buffer_length_char(SingleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%c", *(char*) value);
}

void setup_buffer_length_unsigned_char(SingleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%c", *(unsigned char*) value);
}
