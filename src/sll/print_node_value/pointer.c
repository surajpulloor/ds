#include "single_linked_list.h"

int print_node_value_char_ptr(SingleLinkedListNode* node)
{
    return printf("%s", (char*) node->buffer);
}