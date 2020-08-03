#include "ds/sll/single_linked_list.h"


bool greater_than_char_ptr(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    char* value1 = (char*) node1->buffer;
    char* value2 = (char*) node2->buffer;
    
    return strcmp(value1, value2) > 0;
}