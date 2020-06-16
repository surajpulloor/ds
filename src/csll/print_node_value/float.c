#include "circular_single_linked_list.h"

void print_node_value_float(CircularSingleLinkedListNode* node)
{
    printf("%f", *(float*) node->buffer);
}

void print_node_value_double(CircularSingleLinkedListNode* node)
{
    printf("%lf", *(double*) node->buffer);
}

void print_node_value_long_double(CircularSingleLinkedListNode* node)
{
    printf("%Lf", *(long double*) node->buffer);
}