#include "ds/double_linked_list.h"

void print_node_value_char(DoubleLinkedListNode* node)
{
    printf("%c", *(char*) node->buffer);
}

void print_node_value_unsigned_char(DoubleLinkedListNode* node)
{
    printf("%c", *(unsigned char*) node->buffer);
}
