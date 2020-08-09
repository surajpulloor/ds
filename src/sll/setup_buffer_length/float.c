#include "ds/sll/single_linked_list.h"
#include <stdio.h>

void setup_buffer_length_float(SingleLinkedListNode* node, void* value)
{
    SETUP_BUFFER_LENGTH(%f, float)
}

void setup_buffer_length_double(SingleLinkedListNode* node, void* value)
{
    SETUP_BUFFER_LENGTH(%lf, double)
}

void setup_buffer_length_long_double(SingleLinkedListNode* node, void* value)
{
	SETUP_BUFFER_LENGTH(%Lf, long double)
}
