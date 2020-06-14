#include "double_linked_list.h"

void print_node_value_float(DoubleLinkedListNode* node)
{
    printf("%f", *(float*) node->buffer);
}

void print_node_value_double(DoubleLinkedListNode* node)
{
    printf("%lf", *(double*) node->buffer);
}

void print_node_value_long_double(DoubleLinkedListNode* node)
{
    printf("%Lf", *(long double*) node->buffer);
}