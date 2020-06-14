#include "double_linked_list.h"

void print_node_value_short(DoubleLinkedListNode* node)
{
    printf("%hi", *(short*) node->buffer);
}

void print_node_value_unsigned_short(DoubleLinkedListNode* node)
{
    printf("%hu", *(unsigned short*) node->buffer);
}

void print_node_value_int(DoubleLinkedListNode* node)
{
    printf("%d", *(int*) node->buffer);
}

void print_node_value_unsigned_int(DoubleLinkedListNode* node)
{
    printf("%u", *(unsigned int*) node->buffer);
}

void print_node_value_long(DoubleLinkedListNode* node)
{
    printf("%ld", *(long*) node->buffer);
}

void print_node_value_unsigned_long(DoubleLinkedListNode* node)
{
    printf("%lu", *(unsigned long*) node->buffer);
}

void print_node_value_long_long(DoubleLinkedListNode* node)
{
    printf("%lld", *(long long*) node->buffer);
}

void print_node_value_unsigned_long_long(DoubleLinkedListNode* node)
{
    printf("%llu", *(unsigned long long*) node->buffer);
}
