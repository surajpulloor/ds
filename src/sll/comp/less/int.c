#include "ds/sll/single_linked_list.h"

bool less_than_short(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(short, <)
}

bool less_than_unsigned_short(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(unsigned short, <)
}

bool less_than_int(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(int, <)
}

bool less_than_unsigned_int(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(unsigned int, <)
}

bool less_than_long(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(long, <)
}

bool less_than_unsigned_long(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(unsigned long, <)
}

bool less_than_long_long(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(long long, <)
}

bool less_than_unsigned_long_long(SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    COMP(unsigned long long, <)
}

