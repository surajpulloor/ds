#include "circular_double_linked_list.h"

void print_node_value_char_ptr(CircularDoubleLinkedListNode* node)
{
    printf("%s", (char*) node->buffer);
}