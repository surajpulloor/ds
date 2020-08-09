#include "ds/sll/single_linked_list.h"
#include <stdio.h>

void setup_buffer_length_short(SingleLinkedListNode* node, void* value)
{
	SETUP_BUFFER_LENGTH(%hi, short)
}

void setup_buffer_length_unsigned_short(SingleLinkedListNode* node, void* value)
{
	SETUP_BUFFER_LENGTH(%hu, unsigned short)
}

void setup_buffer_length_int(SingleLinkedListNode* node, void* value)
{
	SETUP_BUFFER_LENGTH(%d, int)
}

void setup_buffer_length_unsigned_int(SingleLinkedListNode* node, void* value)
{
	SETUP_BUFFER_LENGTH(%u, unsigned int)
}

void setup_buffer_length_long(SingleLinkedListNode* node, void* value)
{
	SETUP_BUFFER_LENGTH(%ld, long)
}

void setup_buffer_length_unsigned_long(SingleLinkedListNode* node, void* value)
{
	SETUP_BUFFER_LENGTH(%lu, unsigned long)
}

void setup_buffer_length_long_long(SingleLinkedListNode* node, void* value)
{
	SETUP_BUFFER_LENGTH(%lld, long long)
}

void setup_buffer_length_unsigned_long_long(SingleLinkedListNode* node, void* value)
{
	SETUP_BUFFER_LENGTH(%llu, unsigned long long)
}

