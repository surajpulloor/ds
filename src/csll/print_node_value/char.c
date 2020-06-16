#include "circular_single_linked_list.h"

void print_node_value_char(CircularSingleLinkedListNode* node)
{
    printf("%c", *(char*) node->buffer);
}

void print_node_value_unsigned_char(CircularSingleLinkedListNode* node)
{
    printf("%c", *(unsigned char*) node->buffer);
}
