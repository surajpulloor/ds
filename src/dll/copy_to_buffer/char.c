#include "double_linked_list.h"

void copy_value_to_buffer_char(void* buffer, DoubleLinkedListNode* node)
{
    char* temp = (char*) buffer;

    *temp = *(char*) node->buffer;
}

void copy_value_to_buffer_unsigned_char(void* buffer, DoubleLinkedListNode* node)
{
    unsigned char* temp = (unsigned char*) buffer;

    *temp = *(unsigned char*) node->buffer;
}