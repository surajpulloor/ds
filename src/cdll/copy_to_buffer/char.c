#include "ds/circular_double_linked_list.h"

void copy_value_to_buffer_char(void* buffer, CircularDoubleLinkedListNode* node)
{
    char* temp = (char*) buffer;

    *temp = *(char*) node->buffer;
}

void copy_value_to_buffer_unsigned_char(void* buffer, CircularDoubleLinkedListNode* node)
{
    unsigned char* temp = (unsigned char*) buffer;

    *temp = *(unsigned char*) node->buffer;
}