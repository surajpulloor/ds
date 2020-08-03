#include "ds/sll/single_linked_list.h"

bool less_than_float(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(float, <)
}

bool less_than_double(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(double, <)
}

bool less_than_long_double(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(long double, <)
}
