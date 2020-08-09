#include "ds/sll/single_linked_list.h"

int print_node_value_short(SingleLinkedListNode* node)
{
	PRINT_NODE(%hi, short)
}

int print_node_value_unsigned_short(SingleLinkedListNode* node)
{
	PRINT_NODE(%hu, unsigned short)
}

int print_node_value_int(SingleLinkedListNode* node)
{
	PRINT_NODE(%d, int)
}

int print_node_value_unsigned_int(SingleLinkedListNode* node)
{
	PRINT_NODE(%u, unsigned int)
}

int print_node_value_long(SingleLinkedListNode* node)
{
	PRINT_NODE(%ld, long)
}

int print_node_value_unsigned_long(SingleLinkedListNode* node)
{
	PRINT_NODE(%lu, unsigned long)
}

int print_node_value_long_long(SingleLinkedListNode* node)
{
	PRINT_NODE(%lld, long long)
}

int print_node_value_unsigned_long_long(SingleLinkedListNode* node)
{
	PRINT_NODE(%llu, unsigned long long)
}
