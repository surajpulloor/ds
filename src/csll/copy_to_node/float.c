#include "ds/circular_single_linked_list.h"

void copy_value_to_node_float(CircularSingleLinkedListNode* node, void* value)
{
    float* temp = (float*) node->buffer;

    *temp = *(float*) value;
}

void copy_value_to_node_double(CircularSingleLinkedListNode* node, void* value)
{
    double* temp = (double*) node->buffer;

    *temp = *(double*) value;
}

void copy_value_to_node_long_double(CircularSingleLinkedListNode* node, void* value)
{
    long double* temp = (long double*) node->buffer;

    *temp = *(long double*) value;
}