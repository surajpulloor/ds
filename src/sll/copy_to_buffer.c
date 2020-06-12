#include "../../include/single_linked_list.h"
#include <string.h>

void copy_value_to_buffer_int(void* buffer, SingleLinkedListNode* node)
{
    int* temp = (int*) buffer;

    *temp = *(int*) node->buffer;
}

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

void copy_value_to_buffer_char(void* buffer, SingleLinkedListNode* node)
{
    char* temp = (char*) buffer;

    *temp = *(char*) node->buffer;
}

void copy_value_to_buffer_char_ptr(void* buffer, SingleLinkedListNode* node)
{
    char* temp = (char*) buffer;

    strcpy(temp, (char*) node->buffer);
}
