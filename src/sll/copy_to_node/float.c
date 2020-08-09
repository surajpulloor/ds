#include "ds/sll/single_linked_list.h"

void copy_value_to_node_float(SingleLinkedListNode* node, void* value)
{
	COPY_TO_NODE(float)
}

void copy_value_to_node_double(SingleLinkedListNode* node, void* value)
{
	COPY_TO_NODE(double)
}

void copy_value_to_node_long_double(SingleLinkedListNode* node, void* value)
{
	COPY_TO_NODE(long double)
}