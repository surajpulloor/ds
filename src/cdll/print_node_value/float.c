#include "ds/circular_double_linked_list.h"

void print_node_value_float(CircularDoubleLinkedListNode* node)
{
    printf("%f", *(float*) node->buffer);
}

void print_node_value_double(CircularDoubleLinkedListNode* node)
{
    printf("%lf", *(double*) node->buffer);
}

void print_node_value_long_double(CircularDoubleLinkedListNode* node)
{
    printf("%Lf", *(long double*) node->buffer);
}