#include "ds/circular_double_linked_list.h"

void print_node_value_char(CircularDoubleLinkedListNode* node)
{
    printf("%c", *(char*) node->buffer);
}

void print_node_value_unsigned_char(CircularDoubleLinkedListNode* node)
{
    printf("%c", *(unsigned char*) node->buffer);
}
