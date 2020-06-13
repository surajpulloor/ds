#include "single_linked_list.h"

void print_node_value_float(SingleLinkedListNode* node)
{
    printf("%f", *(float*) node->buffer);
}

void print_node_value_double(SingleLinkedListNode* node)
{
    printf("%lf", *(double*) node->buffer);
}

void print_node_value_long_double(SingleLinkedListNode* node)
{
    printf("%Lf", *(long double*) node->buffer);
}