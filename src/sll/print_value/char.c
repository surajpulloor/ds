#include "../../../include/single_linked_list.h"

void print_node_value_char(SingleLinkedListNode* node)
{
    printf("%c", *(char*) node->buffer);
}

void print_node_value_unsigned_char(SingleLinkedListNode* node)
{
    printf("%c", *(unsigned char*) node->buffer);
}
