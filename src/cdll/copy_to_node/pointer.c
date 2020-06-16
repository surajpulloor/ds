#include "circular_double_linked_list.h"
#include <string.h>

void copy_value_to_node_char_ptr(CircularDoubleLinkedListNode* node, void* value)
{
    char* temp = (char*) node->buffer;

    strcpy(temp, (char*) value);
}
