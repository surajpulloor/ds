#include "single_linked_list.h"

int print_node_value_char(SingleLinkedListNode* node)
{
    return printf("%c", *(char*) node->buffer);
}

int print_node_value_unsigned_char(SingleLinkedListNode* node)
{
    return printf("%c", *(unsigned char*) node->buffer);
}
