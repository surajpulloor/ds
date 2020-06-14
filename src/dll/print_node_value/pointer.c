#include "double_linked_list.h"

void print_node_value_char_ptr(DoubleLinkedListNode* node)
{
    printf("%s", (char*) node->buffer);
}