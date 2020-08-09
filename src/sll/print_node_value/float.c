#include "ds/sll/single_linked_list.h"

int print_node_value_float(SingleLinkedListNode* node)
{
	PRINT_NODE(%f, float)
}

int print_node_value_double(SingleLinkedListNode* node)
{
	PRINT_NODE(%lf, double)
}

int print_node_value_long_double(SingleLinkedListNode* node)
{
	PRINT_NODE(%Lf, long double)
}