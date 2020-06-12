#include "../../include/single_linked_list.h"
#include <stdlib.h>

void* alloc_buffer_int(SingleLinkedListNode* node)
{
    node->buffer = malloc(sizeof(int));
}

void* alloc_buffer_float(SingleLinkedListNode* node)
{
    node->buffer = malloc(sizeof(float));
}

void* alloc_buffer_double(SingleLinkedListNode* node)
{
    node->buffer = malloc(sizeof(double));
}

void* alloc_buffer_char(SingleLinkedListNode* node)
{
    node->buffer = malloc(sizeof(char));
}

void* alloc_buffer_char_ptr(SingleLinkedListNode* node)
{
    node->buffer = malloc(sizeof(char) * MAX_BUFFER);
}
