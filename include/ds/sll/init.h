#ifndef _INIT_H
#define _INIT_H

#include "types.h"

// Main init function
SingleLinkedList* init_list(
	size_t,

	// init/free_struct members
	void (*)(SingleLinkedListNode*), 
	void (*)(SingleLinkedListNode*),

	// copy functions
	void (*)(SingleLinkedListNode*, void*),
	void (*)(void*, SingleLinkedListNode*),

	// print node function
	int (*)(SingleLinkedListNode*),

	// buffer length function
	void (*)(SingleLinkedListNode*, void*)
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