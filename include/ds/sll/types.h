#ifndef _TYPES_H
#define _TYPES_H

#define MAX_BUFFER 1000
#define MAX_CHARS_BUFFER 10000

#include <stdio.h>
#include <stdbool.h>

typedef struct SLLNode {
	void* buffer;
	struct SLLNode* next;

	// used in print_node()
	unsigned int buffer_length;
} SingleLinkedListNode;

typedef struct {
	SingleLinkedListNode* front;
	SingleLinkedListNode* rear;
	int size;
	
	size_t type_size;

	void (*init_struct_members)(SingleLinkedListNode*);
	void (*free_struct_members)(SingleLinkedListNode*);

	void (*copy_value_to_node)(SingleLinkedListNode*, void*);
	void (*copy_value_to_buffer)(void*, SingleLinkedListNode*);

	// generic print_node_value function
	int (*print_node_value)(SingleLinkedListNode*);
	void (*setup_buffer_length)(SingleLinkedListNode*, void*);

	// Comparison funcs
	bool (*equal_nodes)(SingleLinkedListNode*, SingleLinkedListNode*);

	bool (*less_than_nodes)(SingleLinkedListNode*, SingleLinkedListNode*);
	bool (*less_than_equal_nodes)(SingleLinkedListNode*, SingleLinkedListNode*);

	bool (*greater_than_nodes)(SingleLinkedListNode*, SingleLinkedListNode*);
	bool (*greater_than_equal_nodes)(SingleLinkedListNode*, SingleLinkedListNode*);

} SingleLinkedList;

#endif