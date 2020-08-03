#include "ds/sll/single_linked_list.h"

bool equal_float(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(float, ==)
}

bool equal_double(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(double, ==)
}

bool equal_long_double(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(long double, ==)
}
