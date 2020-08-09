#include "ds/sll/single_linked_list.h"

void copy_value_to_buffer_float(void* buffer, SingleLinkedListNode* node)
{
    COPY_TO_BUFFER(float)
}

void copy_value_to_buffer_double(void* buffer, SingleLinkedListNode* node)
{
    COPY_TO_BUFFER(double)
}

void copy_value_to_buffer_long_double(void* buffer, SingleLinkedListNode* node)
{
    COPY_TO_BUFFER(long double)
}