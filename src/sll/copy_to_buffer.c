#include "../../include/single_linked_list.h"
#include <string.h>

void copyValueToBuffer_int(SingleLinkedListNode* node, void* buffer)
{
    int* temp = (int*) buffer;

    *temp = *(int*) node->buffer;
}

void copyValueToBuffer_float(SingleLinkedListNode* node, void* buffer)
{
    float* temp = (float*) buffer;

    *temp = *(float*) node->buffer;
}

void copyValueToBuffer_double(SingleLinkedListNode* node, void* buffer)
{
    double* temp = (double*) buffer;

    *temp = *(double*) node->buffer;
}

void copyValueToBuffer_char(SingleLinkedListNode* node, void* buffer)
{
    char* temp = (char*) buffer;

    *temp = *(char*) node->buffer;
}

void copyValueToBuffer_char_ptr(SingleLinkedListNode* node, void* buffer)
{
    char* temp = (char*) buffer;

    strcpy(temp, (char*) node->buffer);
}
