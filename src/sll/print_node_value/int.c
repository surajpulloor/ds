#include "ds/sll/single_linked_list.h"

int print_node_value_short(SingleLinkedListNode* node)
{
    return printf("%hi", *(short*) node->buffer);
}

int print_node_value_unsigned_short(SingleLinkedListNode* node)
{
    return printf("%hu", *(unsigned short*) node->buffer);
}

int print_node_value_int(SingleLinkedListNode* node)
{
    return printf("%d", *(int*) node->buffer);
}

int print_node_value_unsigned_int(SingleLinkedListNode* node)
{
    return printf("%u", *(unsigned int*) node->buffer);
}

int print_node_value_long(SingleLinkedListNode* node)
{
    return printf("%ld", *(long*) node->buffer);
}

int print_node_value_unsigned_long(SingleLinkedListNode* node)
{
    return printf("%lu", *(unsigned long*) node->buffer);
}

int print_node_value_long_long(SingleLinkedListNode* node)
{
    return printf("%lld", *(long long*) node->buffer);
}

int print_node_value_unsigned_long_long(SingleLinkedListNode* node)
{
    return printf("%llu", *(unsigned long long*) node->buffer);
}
