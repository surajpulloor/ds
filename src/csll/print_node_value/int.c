#include "circular_single_linked_list.h"

void print_node_value_short(CircularSingleLinkedListNode* node)
{
    printf("%hi", *(short*) node->buffer);
}

void print_node_value_unsigned_short(CircularSingleLinkedListNode* node)
{
    printf("%hu", *(unsigned short*) node->buffer);
}

void print_node_value_int(CircularSingleLinkedListNode* node)
{
    printf("%d", *(int*) node->buffer);
}

void print_node_value_unsigned_int(CircularSingleLinkedListNode* node)
{
    printf("%u", *(unsigned int*) node->buffer);
}

void print_node_value_long(CircularSingleLinkedListNode* node)
{
    printf("%ld", *(long*) node->buffer);
}

void print_node_value_unsigned_long(CircularSingleLinkedListNode* node)
{
    printf("%lu", *(unsigned long*) node->buffer);
}

void print_node_value_long_long(CircularSingleLinkedListNode* node)
{
    printf("%lld", *(long long*) node->buffer);
}

void print_node_value_unsigned_long_long(CircularSingleLinkedListNode* node)
{
    printf("%llu", *(unsigned long long*) node->buffer);
}
