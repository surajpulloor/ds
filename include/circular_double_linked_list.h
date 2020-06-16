#ifndef _CIRCULAR_DOUBLE_LINKED_LIST_
#define _CIRCULAR_DOUBLE_LINKED_LIST_

#define MAX_BUFFER 1000
#define MAX_CHARS_BUFFER 10000

#include <stdbool.h>
#include <stdio.h>

typedef struct CircularDLLNode {
	void* buffer;
	struct CircularDLLNode* prev;
	struct CircularDLLNode* next;

	// used in print_node()
	unsigned int buffer_length;
} CircularDoubleLinkedListNode;

typedef struct {
	CircularDoubleLinkedListNode* front;
	CircularDoubleLinkedListNode* rear;

	int size;

	size_t type_size;

	void (*copy_value_to_node)(CircularDoubleLinkedListNode*, void*);
	void (*copy_value_to_buffer)(void*, CircularDoubleLinkedListNode*);

	// generic print_node_value function
	void (*print_node_value)(CircularDoubleLinkedListNode*);
	void (*setup_buffer_length)(CircularDoubleLinkedListNode*, void*);
} CircularDoubleLinkedList;

// **** START: INIT FUNCTIONS *** //

// Main init function
CircularDoubleLinkedList* init_list(size_t);


// Integer init function
CircularDoubleLinkedList* init_list_short();
CircularDoubleLinkedList* init_list_unsigned_short();
CircularDoubleLinkedList* init_list_int();
CircularDoubleLinkedList* init_list_unsigned_int();
CircularDoubleLinkedList* init_list_long();
CircularDoubleLinkedList* init_list_unsigned_long();
CircularDoubleLinkedList* init_list_long_long();
CircularDoubleLinkedList* init_list_unsigned_long_long();


// Float init function
CircularDoubleLinkedList* init_list_float();
CircularDoubleLinkedList* init_list_double();
CircularDoubleLinkedList* init_list_long_double();


// Char init function
CircularDoubleLinkedList* init_list_char();
CircularDoubleLinkedList* init_list_unsigned_char();


// Pointer init function
CircularDoubleLinkedList* init_list_char_ptr();

// **** END: INIT FUNCTIONS *** //


// **** START: ALLOC&FREE FUNCTIONS *** //

// Allocation and Free buffer functions
void* alloc_buffer(CircularDoubleLinkedList*, CircularDoubleLinkedListNode*);
void free_buffer(CircularDoubleLinkedListNode*);

// **** END: ALLOC&FREE FUNCTIONS *** //


// **** START: COPY_TO_NODE FUNCTIONS *** //

// copy_to_node (int)
void copy_value_to_node_short(CircularDoubleLinkedListNode*, void*);
void copy_value_to_node_unsigned_short(CircularDoubleLinkedListNode*, void*);
void copy_value_to_node_int(CircularDoubleLinkedListNode*, void*);
void copy_value_to_node_unsigned_int(CircularDoubleLinkedListNode*, void*);
void copy_value_to_node_long(CircularDoubleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long(CircularDoubleLinkedListNode*, void*);
void copy_value_to_node_long_long(CircularDoubleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long_long(CircularDoubleLinkedListNode*, void*);

// copy_to_node (float)
void copy_value_to_node_float(CircularDoubleLinkedListNode*, void*);
void copy_value_to_node_double(CircularDoubleLinkedListNode*, void*);
void copy_value_to_node_long_double(CircularDoubleLinkedListNode*, void*);

// copy_to_node (char)
void copy_value_to_node_char(CircularDoubleLinkedListNode*, void*);
void copy_value_to_node_unsigned_char(CircularDoubleLinkedListNode*, void*);

// copy_to_node (pointer)
void copy_value_to_node_char_ptr(CircularDoubleLinkedListNode*, void*);


// **** END: COPY_TO_NODE FUNCTIONS *** //


// **** START: COPY_TO_BUFFER FUNCTIONS *** //

// copy_to_buffer (int)
void copy_value_to_buffer_short(void*, CircularDoubleLinkedListNode*);
void copy_value_to_buffer_unsigned_short(void*, CircularDoubleLinkedListNode*);
void copy_value_to_buffer_int(void*, CircularDoubleLinkedListNode*);
void copy_value_to_buffer_unsigned_int(void*, CircularDoubleLinkedListNode*);
void copy_value_to_buffer_long(void*, CircularDoubleLinkedListNode*);
void copy_value_to_buffer_unsigned_long(void*, CircularDoubleLinkedListNode*);
void copy_value_to_buffer_long_long(void*, CircularDoubleLinkedListNode*);
void copy_value_to_buffer_unsigned_long_long(void*, CircularDoubleLinkedListNode*);

// copy_to_buffer (float)
void copy_value_to_buffer_float(void*, CircularDoubleLinkedListNode*);
void copy_value_to_buffer_double(void*, CircularDoubleLinkedListNode*);
void copy_value_to_buffer_long_double(void*, CircularDoubleLinkedListNode*);

// copy_to_buffer (char)
void copy_value_to_buffer_char(void*, CircularDoubleLinkedListNode*);
void copy_value_to_buffer_unsigned_char(void*, CircularDoubleLinkedListNode*);

// copy_to_buffer (pointer)
void copy_value_to_buffer_char_ptr(void*, CircularDoubleLinkedListNode*);


void setup_copy_value_funcs(
	CircularDoubleLinkedList*, 
	void (*)(CircularDoubleLinkedListNode*, void*), 
	void (*)(void*, CircularDoubleLinkedListNode*)
);



// **** END: COPY_TO_BUFFER FUNCTIONS *** //


// **** START: PRINT_NODE_VALUE FUNCTIONS *** //

// print_node_value (int)
void print_node_value_short(CircularDoubleLinkedListNode*);
void print_node_value_unsigned_short(CircularDoubleLinkedListNode*);
void print_node_value_int(CircularDoubleLinkedListNode*);
void print_node_value_unsigned_int(CircularDoubleLinkedListNode*);
void print_node_value_long(CircularDoubleLinkedListNode*);
void print_node_value_unsigned_long(CircularDoubleLinkedListNode*);
void print_node_value_long_long(CircularDoubleLinkedListNode*);
void print_node_value_unsigned_long_long(CircularDoubleLinkedListNode*);

// print_node_value (float)
void print_node_value_float(CircularDoubleLinkedListNode*);
void print_node_value_double(CircularDoubleLinkedListNode*);
void print_node_value_long_double(CircularDoubleLinkedListNode*);

// print_node_value (char)
void print_node_value_char(CircularDoubleLinkedListNode*);
void print_node_value_unsigned_char(CircularDoubleLinkedListNode*);

// print_node_value (pointer)
void print_node_value_char_ptr(CircularDoubleLinkedListNode*);


void setup_print_node_value_func(
	CircularDoubleLinkedList*, 
	void (*)(CircularDoubleLinkedListNode*)
);

// **** END: PRINT_NODE_VALUE FUNCTIONS *** //


// **** START: SETUP_BUFFER_LENGTH FUNCTIONS *** //

// setup_buffer_length(int)
void setup_buffer_length_short(CircularDoubleLinkedListNode*, void*);
void setup_buffer_length_unsigned_short(CircularDoubleLinkedListNode*, void*);
void setup_buffer_length_int(CircularDoubleLinkedListNode*, void*);
void setup_buffer_length_unsigned_int(CircularDoubleLinkedListNode*, void*);
void setup_buffer_length_long(CircularDoubleLinkedListNode*, void*);
void setup_buffer_length_unsigned_long(CircularDoubleLinkedListNode*, void*);
void setup_buffer_length_long_long(CircularDoubleLinkedListNode*, void*);
void setup_buffer_length_unsigned_long_long(CircularDoubleLinkedListNode*, void*);

void setup_buffer_length_float(CircularDoubleLinkedListNode*, void*);
void setup_buffer_length_double(CircularDoubleLinkedListNode*, void*);
void setup_buffer_length_long_double(CircularDoubleLinkedListNode*, void*);

void setup_buffer_length_char(CircularDoubleLinkedListNode*, void*);
void setup_buffer_length_unsigned_char(CircularDoubleLinkedListNode*, void*);

void setup_buffer_length_char_ptr(CircularDoubleLinkedListNode*, void*);

void setup_buffer_length_func(
	CircularDoubleLinkedList*, 
	void (*)(CircularDoubleLinkedListNode*, void*)
);

// **** END: SETUP_BUFFER_LENGTH FUNCTIONS *** //

CircularDoubleLinkedListNode* push_before(CircularDoubleLinkedList*, void*, int);
CircularDoubleLinkedListNode* push_after(CircularDoubleLinkedList*, void*, int);
CircularDoubleLinkedListNode* push_back(CircularDoubleLinkedList*, void*);
CircularDoubleLinkedListNode* push_front(CircularDoubleLinkedList*, void*);

void pop_before(CircularDoubleLinkedList*, int);
void pop_after(CircularDoubleLinkedList*, int);
void pop_back(CircularDoubleLinkedList*);
void pop_front(CircularDoubleLinkedList*);

void* pop_before_v(CircularDoubleLinkedList*, int, void*);
void* pop_after_v(CircularDoubleLinkedList*, int, void*);
void* pop_back_v(CircularDoubleLinkedList*, void*);
void* pop_front_v(CircularDoubleLinkedList*, void*);

void* get(CircularDoubleLinkedList*, int, void*);
void set(CircularDoubleLinkedList*, int, void*);

void free_list(CircularDoubleLinkedList**);
void print_list(CircularDoubleLinkedList*);
void print_node(CircularDoubleLinkedList*, CircularDoubleLinkedListNode*, bool, bool);

#endif
