#include "../../include/single_linked_list.h"
#include <stdlib.h>

void* allocBuffer_int(SingleLinkedListNode* node)
{
    node->buffer = malloc(sizeof(int));
}

void* allocBuffer_float(SingleLinkedListNode* node)
{
    node->buffer = malloc(sizeof(float));
}

void* allocBuffer_double(SingleLinkedListNode* node)
{
    node->buffer = malloc(sizeof(double));
}

void* allocBuffer_char(SingleLinkedListNode* node)
{
    node->buffer = malloc(sizeof(char));
}

void* allocBuffer_char_ptr(SingleLinkedListNode* node)
{
    node->buffer = malloc(sizeof(char) * MAX_BUFFER);
}
