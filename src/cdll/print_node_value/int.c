#include "circular_double_linked_list.h"

void print_node_value_short(CircularDoubleLinkedListNode* node)
{
    printf("%hi", *(short*) node->buffer);
}

void print_node_value_unsigned_short(CircularDoubleLinkedListNode* node)
{
    printf("%hu", *(unsigned short*) node->buffer);
}

void print_node_value_int(CircularDoubleLinkedListNode* node)
{
    printf("%d", *(int*) node->buffer);
}

void print_node_value_unsigned_int(CircularDoubleLinkedListNode* node)
{
    printf("%u", *(unsigned int*) node->buffer);
}

void print_node_value_long(CircularDoubleLinkedListNode* node)
{
    printf("%ld", *(long*) node->buffer);
}

void print_node_value_unsigned_long(CircularDoubleLinkedListNode* node)
{
    printf("%lu", *(unsigned long*) node->buffer);
}

void print_node_value_long_long(CircularDoubleLinkedListNode* node)
{
    printf("%lld", *(long long*) node->buffer);
}

void print_node_value_unsigned_long_long(CircularDoubleLinkedListNode* node)
{
    printf("%llu", *(unsigned long long*) node->buffer);
}
