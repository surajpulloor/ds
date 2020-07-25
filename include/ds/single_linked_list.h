#ifndef _SINGLE_LINKED_LIST_
#define _SINGLE_LINKED_LIST_

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

} SingleLinkedList;

// **** START: INIT FUNCTIONS *** //

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

// **** END: INIT FUNCTIONS *** //


// **** START: ALLOC&FREE FUNCTIONS *** //

// Allocation and Free buffer functions
void* alloc_buffer(SingleLinkedList*, SingleLinkedListNode*);
void free_buffer(SingleLinkedListNode*);

// **** END: ALLOC&FREE FUNCTIONS *** //


// **** START: COPY_TO_NODE FUNCTIONS *** //

// copy_to_node (int)
void copy_value_to_node_short(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_short(SingleLinkedListNode*, void*);
void copy_value_to_node_int(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_int(SingleLinkedListNode*, void*);
void copy_value_to_node_long(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long(SingleLinkedListNode*, void*);
void copy_value_to_node_long_long(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long_long(SingleLinkedListNode*, void*);

// copy_to_node (float)
void copy_value_to_node_float(SingleLinkedListNode*, void*);
void copy_value_to_node_double(SingleLinkedListNode*, void*);
void copy_value_to_node_long_double(SingleLinkedListNode*, void*);

// copy_to_node (char)
void copy_value_to_node_char(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_char(SingleLinkedListNode*, void*);

// copy_to_node (pointer)
void copy_value_to_node_char_ptr(SingleLinkedListNode*, void*);


// **** END: COPY_TO_NODE FUNCTIONS *** //


// **** START: COPY_TO_BUFFER FUNCTIONS *** //

// copy_to_buffer (int)
void copy_value_to_buffer_short(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_short(void*, SingleLinkedListNode*);
void copy_value_to_buffer_int(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_int(void*, SingleLinkedListNode*);
void copy_value_to_buffer_long(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_long(void*, SingleLinkedListNode*);
void copy_value_to_buffer_long_long(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_long_long(void*, SingleLinkedListNode*);

// copy_to_buffer (float)
void copy_value_to_buffer_float(void*, SingleLinkedListNode*);
void copy_value_to_buffer_double(void*, SingleLinkedListNode*);
void copy_value_to_buffer_long_double(void*, SingleLinkedListNode*);

// copy_to_buffer (char)
void copy_value_to_buffer_char(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_char(void*, SingleLinkedListNode*);

// copy_to_buffer (pointer)
void copy_value_to_buffer_char_ptr(void*, SingleLinkedListNode*);


void setup_copy_value_funcs(
	SingleLinkedList*, 
	void (*)(SingleLinkedListNode*, void*), 
	void (*)(void*, SingleLinkedListNode*)
);



// **** END: COPY_TO_BUFFER FUNCTIONS *** //


// **** START: PRINT_NODE_VALUE FUNCTIONS *** //

// print_node_value (int)
int print_node_value_short(SingleLinkedListNode*);
int print_node_value_unsigned_short(SingleLinkedListNode*);
int print_node_value_int(SingleLinkedListNode*);
int print_node_value_unsigned_int(SingleLinkedListNode*);
int print_node_value_long(SingleLinkedListNode*);
int print_node_value_unsigned_long(SingleLinkedListNode*);
int print_node_value_long_long(SingleLinkedListNode*);
int print_node_value_unsigned_long_long(SingleLinkedListNode*);

// print_node_value (float)
int print_node_value_float(SingleLinkedListNode*);
int print_node_value_double(SingleLinkedListNode*);
int print_node_value_long_double(SingleLinkedListNode*);

// print_node_value (char)
int print_node_value_char(SingleLinkedListNode*);
int print_node_value_unsigned_char(SingleLinkedListNode*);

// print_node_value (pointer)
int print_node_value_char_ptr(SingleLinkedListNode*);


void setup_print_node_value_func(
	SingleLinkedList*, 
	int (*)(SingleLinkedListNode*)
);

// **** END: PRINT_NODE_VALUE FUNCTIONS *** //


// **** START: SETUP_BUFFER_LENGTH FUNCTIONS *** //

// setup_buffer_length(int)
void setup_buffer_length_short(SingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_short(SingleLinkedListNode*, void*);
void setup_buffer_length_int(SingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_int(SingleLinkedListNode*, void*);
void setup_buffer_length_long(SingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_long(SingleLinkedListNode*, void*);
void setup_buffer_length_long_long(SingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_long_long(SingleLinkedListNode*, void*);

void setup_buffer_length_float(SingleLinkedListNode*, void*);
void setup_buffer_length_double(SingleLinkedListNode*, void*);
void setup_buffer_length_long_double(SingleLinkedListNode*, void*);

void setup_buffer_length_char(SingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_char(SingleLinkedListNode*, void*);

void setup_buffer_length_char_ptr(SingleLinkedListNode*, void*);

void setup_buffer_length_func(
	SingleLinkedList*, 
	void (*)(SingleLinkedListNode*, void*)
);

// **** END: SETUP_BUFFER_LENGTH FUNCTIONS *** //


SingleLinkedListNode* push_before(SingleLinkedList*, void*, int);
SingleLinkedListNode* push_after(SingleLinkedList*, void*, int);
SingleLinkedListNode* push_back(SingleLinkedList*, void*);
SingleLinkedListNode* push_front(SingleLinkedList*, void*);

void pop_before(SingleLinkedList*, int);
void pop_after(SingleLinkedList*, int);
void pop_back(SingleLinkedList*);
void pop_front(SingleLinkedList*);

void* pop_before_v(SingleLinkedList*, int, void*);
void* pop_after_v(SingleLinkedList*, int, void*);
void* pop_back_v(SingleLinkedList*, void*);
void* pop_front_v(SingleLinkedList*, void*);

void* get(SingleLinkedList*, int, void*);
void set(SingleLinkedList*, int, void*);

void free_list(SingleLinkedList**);
void print_list(SingleLinkedList*);
void print_node(SingleLinkedList*, SingleLinkedListNode*, bool);

#endif
