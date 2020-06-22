#include "ds/single_linked_list.h"

void copy_value_to_buffer_short(void* buffer, SingleLinkedListNode* node)
{
    short* temp = (short*) buffer;

    *temp = *(short*) node->buffer;
}

void copy_value_to_buffer_unsigned_short(void* buffer, SingleLinkedListNode* node)
{
    unsigned short* temp = (unsigned short*) buffer;

    *temp = *(unsigned short*) node->buffer;
}


void copy_value_to_buffer_int(void* buffer, SingleLinkedListNode* node)
{
    int* temp = (int*) buffer;

    *temp = *(int*) node->buffer;
}

void copy_value_to_buffer_unsigned_int(void* buffer, SingleLinkedListNode* node)
{
    unsigned int* temp = (unsigned int*) buffer;

    *temp = *(unsigned int*) node->buffer;
}

void copy_value_to_buffer_long(void* buffer, SingleLinkedListNode* node)
{
    long* temp = (long*) buffer;

    *temp = *(long*) node->buffer;
}

void copy_value_to_buffer_unsigned_long(void* buffer, SingleLinkedListNode* node)
{
    unsigned long* temp = (unsigned long*) buffer;

    *temp = *(unsigned long*) node->buffer;
}

void copy_value_to_buffer_long_long(void* buffer, SingleLinkedListNode* node)
{
    long long* temp = (long long*) buffer;

    *temp = *(long long*) node->buffer;
}

void copy_value_to_buffer_unsigned_long_long(void* buffer, SingleLinkedListNode* node)
{
    unsigned long long* temp = (unsigned long long*) buffer;

    *temp = *(unsigned long long*) node->buffer;
}
