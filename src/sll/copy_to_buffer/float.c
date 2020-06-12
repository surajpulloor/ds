#include "../../../include/single_linked_list.h"

void copy_value_to_buffer_float(void* buffer, SingleLinkedListNode* node)
{
    float* temp = (float*) buffer;

    *temp = *(float*) node->buffer;
}

void copy_value_to_buffer_double(void* buffer, SingleLinkedListNode* node)
{
    double* temp = (double*) buffer;

    *temp = *(double*) node->buffer;
}

void copy_value_to_buffer_long_double(void* buffer, SingleLinkedListNode* node)
{

}