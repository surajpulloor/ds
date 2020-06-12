#include "../../include/single_linked_list.h"
#include <string.h>

void copyValueToNode_int(SingleLinkedListNode* node, void* value)
{
    int* temp = (int*) node->buffer;

    *temp = *(int*) value;
}

void copyValueToNode_float(SingleLinkedListNode* node, void* value)
{
    float* temp = (float*) node->buffer;

    *temp = *(float*) value;
}

void copyValueToNode_double(SingleLinkedListNode* node, void* value)
{
    double* temp = (double*) node->buffer;

    *temp = *(double*) value;
}

void copyValueToNode_char(SingleLinkedListNode* node, void* value)
{
    char* temp = (char*) node->buffer;

    *temp = *(char*) value;
}

void copyValueToNode_char_ptr(SingleLinkedListNode* node, void* value)
{
    char* temp = (char*) node->buffer;

    strcpy(temp, (char*) value);
}
