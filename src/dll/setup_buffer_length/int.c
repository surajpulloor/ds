#include "ds/double_linked_list.h"
#include <stdio.h>

void setup_buffer_length_short(DoubleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%hi", *(short*) value);
}

void setup_buffer_length_unsigned_short(DoubleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%hu", *(unsigned short*) value);
}

void setup_buffer_length_int(DoubleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%d", *(int*) value);
}

void setup_buffer_length_unsigned_int(DoubleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%u", *(unsigned int*) value);
}

void setup_buffer_length_long(DoubleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%ld", *(long*) value);
}

void setup_buffer_length_unsigned_long(DoubleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%lu", *(unsigned long*) value);
}

void setup_buffer_length_long_long(DoubleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%lld", *(long long*) value);
}

void setup_buffer_length_unsigned_long_long(DoubleLinkedListNode* node, void* value)
{
    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%llu", *(unsigned long long*) value);
}

