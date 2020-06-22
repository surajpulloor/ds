#include "ds/circular_double_linked_list.h"
#include <stdio.h>

void setup_buffer_length_float(CircularDoubleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%f", *(float*) value);
}

void setup_buffer_length_double(CircularDoubleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%lf", *(double*) value);
}

void setup_buffer_length_long_double(CircularDoubleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%Lf", *(long double*) value);
}
