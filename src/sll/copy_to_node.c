#include "../../include/single_linked_list.h"
#include <string.h>

void copy_value_to_node_int(SingleLinkedListNode* node, void* value)
{
    int* temp = (int*) node->buffer;

    *temp = *(int*) value;
}

void copy_value_to_node_float(SingleLinkedListNode* node, void* value)
{
    float* temp = (float*) node->buffer;

    *temp = *(float*) value;
}

void copy_value_to_node_double(SingleLinkedListNode* node, void* value)
{
    double* temp = (double*) node->buffer;

    *temp = *(double*) value;
}

void copy_value_to_node_char(SingleLinkedListNode* node, void* value)
{
    char* temp = (char*) node->buffer;

    *temp = *(char*) value;
}

void copy_value_to_node_char_ptr(SingleLinkedListNode* node, void* value)
{
    char* temp = (char*) node->buffer;

    strcpy(temp, (char*) value);
}
