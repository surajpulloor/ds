#include "ds/sll/single_linked_list.h"
#include <stdio.h>

void setup_buffer_length_char(SingleLinkedListNode* node, void* value)
{
    SETUP_BUFFER_LENGTH(%c, char)
}

void setup_buffer_length_unsigned_char(SingleLinkedListNode* node, void* value)
{
    SETUP_BUFFER_LENGTH(%c, unsigned char)
}
