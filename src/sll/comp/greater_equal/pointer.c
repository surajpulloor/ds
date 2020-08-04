#include "ds/sll/single_linked_list.h"
#include <string.h>

bool greater_than_equal_char_ptr(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    char* value1 = (char*) node1->buffer;
    char* value2 = (char*) node2->buffer;
    
    return strcmp(value1, value2) > 0 && strcmp(value1, value2) == 0;
}