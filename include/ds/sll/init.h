#ifndef _INIT_H
#define _INIT_H

#include "types.h"

// Main init function
SingleLinkedList* init_list(
	size_t type_size,

	// init/free_struct members
	void (*init_struct_members)(SingleLinkedListNode*), 
	void (*free_struct_members)(SingleLinkedListNode*),

	// copy functions
	void (*copy_value_to_node)(SingleLinkedListNode*, void*),
	void (*copy_value_to_buffer)(void*, SingleLinkedListNode*),

	// print node function
	int (*print_node_value)(SingleLinkedListNode*),

	// buffer length function
	void (*setup_buffer_length)(SingleLinkedListNode*, void*),

	// Comparison funcs
	bool (*equal_nodes)(SingleLinkedListNode*, SingleLinkedListNode*),

	bool (*less_than_nodes)(SingleLinkedListNode*, SingleLinkedListNode*),
	bool (*less_than_equal_nodes)(SingleLinkedListNode*, SingleLinkedListNode*),

	bool (*greater_than_nodes)(SingleLinkedListNode*, SingleLinkedListNode*),
	bool (*greater_than_equal_nodes)(SingleLinkedListNode*, SingleLinkedListNode*)
);


// Integer init function
SingleLinkedList* init_list_short();
SingleLinkedList* init_list_unsigned_short();
SingleLinkedList* init_list_int();
SingleLinkedList* init_list_unsigned_int();
SingleLinkedList* init_list_long();
SingleLinkedList* init_list_unsigned_long();
SingleLinkedList* init_list_long_long();
SingleLinkedList* init_list_unsigned_long_long();


// Float init function
SingleLinkedList* init_list_float();
SingleLinkedList* init_list_double();
SingleLinkedList* init_list_long_double();


// Char init function
SingleLinkedList* init_list_char();
SingleLinkedList* init_list_unsigned_char();


// Pointer init function
SingleLinkedList* init_list_char_ptr();


void free_list(SingleLinkedList**);

#endif