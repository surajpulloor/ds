#include "circular_single_linked_list.h"

void copy_value_to_buffer_float(void* buffer, CircularSingleLinkedListNode* node)
{
    float* temp = (float*) buffer;

    *temp = *(float*) node->buffer;
}

void copy_value_to_buffer_double(void* buffer, CircularSingleLinkedListNode* node)
{
    double* temp = (double*) buffer;

    *temp = *(double*) node->buffer;
}

void copy_value_to_buffer_long_double(void* buffer, CircularSingleLinkedListNode* node)
{
    long double* temp = (long double*) buffer;

    *temp = *(long double*) node->buffer;
}