#include "../../include/single_linked_list.h"
#include <string.h>

void copy_value_to_buffer_int(SingleLinkedListNode* node, void* buffer)
{
    int* temp = (int*) buffer;

    *temp = *(int*) node->buffer;
}

void copy_value_to_buffer_float(SingleLinkedListNode* node, void* buffer)
{
    float* temp = (float*) buffer;

    *temp = *(float*) node->buffer;
}

void copy_value_to_buffer_double(SingleLinkedListNode* node, void* buffer)
{
    double* temp = (double*) buffer;

    *temp = *(double*) node->buffer;
}

void copy_value_to_buffer_char(SingleLinkedListNode* node, void* buffer)
{
    char* temp = (char*) buffer;

    *temp = *(char*) node->buffer;
}

void copy_value_to_buffer_char_ptr(SingleLinkedListNode* node, void* buffer)
{
    char* temp = (char*) buffer;

    strcpy(temp, (char*) node->buffer);
}
