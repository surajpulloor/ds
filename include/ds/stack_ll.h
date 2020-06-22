#ifndef _STACK_LINKED_LIST_H
#define _STACK_LINKED_LIST_H

#define MAX_CHARS 1000

#include "single_linked_list.h"
#include <stdio.h>

typedef struct {
    SingleLinkedList* list;
    int top;
    int largestString;
} Stack_Linked_List;


Stack_Linked_List* init_stack(size_t);

// Integer init function
Stack_Linked_List* init_stack_short();
Stack_Linked_List* init_stack_unsigned_short();
Stack_Linked_List* init_stack_int();
Stack_Linked_List* init_stack_unsigned_int();
Stack_Linked_List* init_stack_long();
Stack_Linked_List* init_stack_unsigned_long();
Stack_Linked_List* init_stack_long_long();
Stack_Linked_List* init_stack_unsigned_long_long();


// Float init function
Stack_Linked_List* init_stack_float();
Stack_Linked_List* init_stack_double();
Stack_Linked_List* init_stack_long_double();


// Char init function
Stack_Linked_List* init_stack_char();
Stack_Linked_List* init_stack_unsigned_char();


// Pointer init function
Stack_Linked_List* init_stack_char_ptr();

// **** END: INIT FUNCTIONS *** //


// **** START: SETUP FUNCTIONS **** //

void setup_copy_value_funcs(
	SingleLinkedList*, 
	void (*)(SingleLinkedListNode*, void*), 
	void (*)(void*, SingleLinkedListNode*)
);

void setup_print_node_value_func(
	SingleLinkedList*, 
	int (*)(SingleLinkedListNode*)
);

// **** END: SETUP FUNCTIONS **** //


void push(Stack_Linked_List*, void*);
void* pop(Stack_Linked_List*, void*);
void print_stack(Stack_Linked_List*);
void free_stack(Stack_Linked_List**);

#endif