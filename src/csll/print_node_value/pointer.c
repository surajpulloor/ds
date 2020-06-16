#include "circular_single_linked_list.h"

void print_node_value_char_ptr(CircularSingleLinkedListNode* node)
{
    printf("%s", (char*) node->buffer);
}