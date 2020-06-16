#include "circular_double_linked_list.h"

void copy_value_to_node_char(CircularDoubleLinkedListNode* node, void* value)
{
    char* temp = (char*) node->buffer;

    *temp = *(char*) value;
}

void copy_value_to_node_unsigned_char(CircularDoubleLinkedListNode* node, void* value)
{
    unsigned char* temp = (unsigned char*) node->buffer;

    *temp = *(unsigned char*) value;
}