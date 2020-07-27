#include "ds/sll/single_linked_list.h"

int print_node_value_float(SingleLinkedListNode* node)
{
    return printf("%f", *(float*) node->buffer);
}

int print_node_value_double(SingleLinkedListNode* node)
{
    return printf("%lf", *(double*) node->buffer);
}

int print_node_value_long_double(SingleLinkedListNode* node)
{
    return printf("%Lf", *(long double*) node->buffer);
}