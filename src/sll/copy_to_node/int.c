#include "../../../include/single_linked_list.h"

void copy_value_to_node_short(SingleLinkedListNode* node, void* value)
{
    short* temp = (short*) node->buffer;

    *temp = *(short*) value;
}

void copy_value_to_node_unsigned_short(SingleLinkedListNode* node, void* value)
{
    unsigned short* temp = (unsigned short*) node->buffer;

    *temp = *(unsigned short*) value;
}


void copy_value_to_node_int(SingleLinkedListNode* node, void* value)
{
    int* temp = (int*) node->buffer;

    *temp = *(int*) value;
}

void copy_value_to_node_unsigned_int(SingleLinkedListNode* node, void* value)
{
    unsigned int* temp = (unsigned int*) node->buffer;

    *temp = *(unsigned int*) value;
}

void copy_value_to_node_long(SingleLinkedListNode* node, void* value)
{
    long* temp = (long*) node->buffer;

    *temp = *(long*) value;
}

void copy_value_to_node_unsigned_long(SingleLinkedListNode* node, void* value)
{
    unsigned long* temp = (unsigned long*) node->buffer;

    *temp = *(unsigned long*) value;
}

void copy_value_to_node_long_long(SingleLinkedListNode* node, void* value)
{
    long long* temp = (long long*) node->buffer;

    *temp = *(long long*) value;
}

void copy_value_to_node_unsigned_long_long(SingleLinkedListNode* node, void* value)
{
    unsigned long long* temp = (unsigned long long*) node->buffer;

    *temp = *(unsigned long long*) value;
}