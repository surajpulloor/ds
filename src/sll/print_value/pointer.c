#include "../../../include/single_linked_list.h"

void print_node_value_char_ptr(SingleLinkedListNode* node)
{
    printf("%s", (char*) node->buffer);
}