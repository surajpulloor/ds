#include "double_linked_list.h"

void copy_value_to_node_float(DoubleLinkedListNode* node, void* value)
{
    float* temp = (float*) node->buffer;

    *temp = *(float*) value;
}

void copy_value_to_node_double(DoubleLinkedListNode* node, void* value)
{
    double* temp = (double*) node->buffer;

    *temp = *(double*) value;
}

void copy_value_to_node_long_double(DoubleLinkedListNode* node, void* value)
{
    long double* temp = (long double*) node->buffer;

    *temp = *(long double*) value;
}