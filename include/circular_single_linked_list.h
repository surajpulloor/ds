#ifndef _CIRCULAR_SINGLE_LINKED_LIST_
#define _CIRCULAR_SINGLE_LINKED_LIST_

#define MAX_BUFFER 1000
#define MAX_CHARS_BUFFER 10000

#include <stdbool.h>
#include <stdio.h>

typedef struct CircularSLLNode {
	void* buffer;
	struct CircularSLLNode* next;

	// used in print_node()
	unsigned int buffer_length;
} CircularSingleLinkedListNode;

typedef struct {
	CircularSingleLinkedListNode* front;
	CircularSingleLinkedListNode* rear;

	int size;
	size_t type_size;

	void (*copy_value_to_node)(CircularSingleLinkedListNode*, void*);
	void (*copy_value_to_buffer)(void*, CircularSingleLinkedListNode*);

	// generic print_node_value function
	void (*print_node_value)(CircularSingleLinkedListNode*);
	void (*setup_buffer_length)(CircularSingleLinkedListNode*, void*);

} CircularSingleLinkedList;

// **** START: INIT FUNCTIONS *** //

// Main init function
CircularSingleLinkedList* init_list(size_t);


// Integer init function
CircularSingleLinkedList* init_list_short();
CircularSingleLinkedList* init_list_unsigned_short();
CircularSingleLinkedList* init_list_int();
CircularSingleLinkedList* init_list_unsigned_int();
CircularSingleLinkedList* init_list_long();
CircularSingleLinkedList* init_list_unsigned_long();
CircularSingleLinkedList* init_list_long_long();
CircularSingleLinkedList* init_list_unsigned_long_long();


// Float init function
CircularSingleLinkedList* init_list_float();
CircularSingleLinkedList* init_list_double();
CircularSingleLinkedList* init_list_long_double();


// Char init function
CircularSingleLinkedList* init_list_char();
CircularSingleLinkedList* init_list_unsigned_char();


// Pointer init function
CircularSingleLinkedList* init_list_char_ptr();

// **** END: INIT FUNCTIONS *** //


// **** START: ALLOC&FREE FUNCTIONS *** //

// Allocation and Free buffer functions
void* alloc_buffer(CircularSingleLinkedList*, CircularSingleLinkedListNode*);
void free_buffer(CircularSingleLinkedListNode*);

// **** END: ALLOC&FREE FUNCTIONS *** //


// **** START: COPY_TO_NODE FUNCTIONS *** //

// copy_to_node (int)
void copy_value_to_node_short(CircularSingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_short(CircularSingleLinkedListNode*, void*);
void copy_value_to_node_int(CircularSingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_int(CircularSingleLinkedListNode*, void*);
void copy_value_to_node_long(CircularSingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long(CircularSingleLinkedListNode*, void*);
void copy_value_to_node_long_long(CircularSingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long_long(CircularSingleLinkedListNode*, void*);

// copy_to_node (float)
void copy_value_to_node_float(CircularSingleLinkedListNode*, void*);
void copy_value_to_node_double(CircularSingleLinkedListNode*, void*);
void copy_value_to_node_long_double(CircularSingleLinkedListNode*, void*);

// copy_to_node (char)
void copy_value_to_node_char(CircularSingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_char(CircularSingleLinkedListNode*, void*);

// copy_to_node (pointer)
void copy_value_to_node_char_ptr(CircularSingleLinkedListNode*, void*);


// **** END: COPY_TO_NODE FUNCTIONS *** //


// **** START: COPY_TO_BUFFER FUNCTIONS *** //

// copy_to_buffer (int)
void copy_value_to_buffer_short(void*, CircularSingleLinkedListNode*);
void copy_value_to_buffer_unsigned_short(void*, CircularSingleLinkedListNode*);
void copy_value_to_buffer_int(void*, CircularSingleLinkedListNode*);
void copy_value_to_buffer_unsigned_int(void*, CircularSingleLinkedListNode*);
void copy_value_to_buffer_long(void*, CircularSingleLinkedListNode*);
void copy_value_to_buffer_unsigned_long(void*, CircularSingleLinkedListNode*);
void copy_value_to_buffer_long_long(void*, CircularSingleLinkedListNode*);
void copy_value_to_buffer_unsigned_long_long(void*, CircularSingleLinkedListNode*);

// copy_to_buffer (float)
void copy_value_to_buffer_float(void*, CircularSingleLinkedListNode*);
void copy_value_to_buffer_double(void*, CircularSingleLinkedListNode*);
void copy_value_to_buffer_long_double(void*, CircularSingleLinkedListNode*);

// copy_to_buffer (char)
void copy_value_to_buffer_char(void*, CircularSingleLinkedListNode*);
void copy_value_to_buffer_unsigned_char(void*, CircularSingleLinkedListNode*);

// copy_to_buffer (pointer)
void copy_value_to_buffer_char_ptr(void*, CircularSingleLinkedListNode*);


void setup_copy_value_funcs(
	CircularSingleLinkedList*, 
	void (*)(CircularSingleLinkedListNode*, void*), 
	void (*)(void*, CircularSingleLinkedListNode*)
);



// **** END: COPY_TO_BUFFER FUNCTIONS *** //


// **** START: PRINT_NODE_VALUE FUNCTIONS *** //

// print_node_value (int)
void print_node_value_short(CircularSingleLinkedListNode*);
void print_node_value_unsigned_short(CircularSingleLinkedListNode*);
void print_node_value_int(CircularSingleLinkedListNode*);
void print_node_value_unsigned_int(CircularSingleLinkedListNode*);
void print_node_value_long(CircularSingleLinkedListNode*);
void print_node_value_unsigned_long(CircularSingleLinkedListNode*);
void print_node_value_long_long(CircularSingleLinkedListNode*);
void print_node_value_unsigned_long_long(CircularSingleLinkedListNode*);

// print_node_value (float)
void print_node_value_float(CircularSingleLinkedListNode*);
void print_node_value_double(CircularSingleLinkedListNode*);
void print_node_value_long_double(CircularSingleLinkedListNode*);

// print_node_value (char)
void print_node_value_char(CircularSingleLinkedListNode*);
void print_node_value_unsigned_char(CircularSingleLinkedListNode*);

// print_node_value (pointer)
void print_node_value_char_ptr(CircularSingleLinkedListNode*);


void setup_print_node_value_func(
	CircularSingleLinkedList*, 
	void (*)(CircularSingleLinkedListNode*)
);

// **** END: PRINT_NODE_VALUE FUNCTIONS *** //


// **** START: SETUP_BUFFER_LENGTH FUNCTIONS *** //

// setup_buffer_length(int)
void setup_buffer_length_short(CircularSingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_short(CircularSingleLinkedListNode*, void*);
void setup_buffer_length_int(CircularSingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_int(CircularSingleLinkedListNode*, void*);
void setup_buffer_length_long(CircularSingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_long(CircularSingleLinkedListNode*, void*);
void setup_buffer_length_long_long(CircularSingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_long_long(CircularSingleLinkedListNode*, void*);

void setup_buffer_length_float(CircularSingleLinkedListNode*, void*);
void setup_buffer_length_double(CircularSingleLinkedListNode*, void*);
void setup_buffer_length_long_double(CircularSingleLinkedListNode*, void*);

void setup_buffer_length_char(CircularSingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_char(CircularSingleLinkedListNode*, void*);

void setup_buffer_length_char_ptr(CircularSingleLinkedListNode*, void*);

void setup_buffer_length_func(
	CircularSingleLinkedList*, 
	void (*)(CircularSingleLinkedListNode*, void*)
);

// **** END: SETUP_BUFFER_LENGTH FUNCTIONS *** //

CircularSingleLinkedListNode* push_before(CircularSingleLinkedList*, void*, int);
CircularSingleLinkedListNode* push_after(CircularSingleLinkedList*, void*, int);
CircularSingleLinkedListNode* push_back(CircularSingleLinkedList*, void*);
CircularSingleLinkedListNode* push_front(CircularSingleLinkedList*, void*);

void pop_before(CircularSingleLinkedList*, int);
void pop_after(CircularSingleLinkedList*, int);
void pop_back(CircularSingleLinkedList*);
void pop_front(CircularSingleLinkedList*);

void* pop_before_v(CircularSingleLinkedList*, int, void*);
void* pop_after_v(CircularSingleLinkedList*, int, void*);
void* pop_back_v(CircularSingleLinkedList*, void*);
void* pop_front_v(CircularSingleLinkedList*, void*);

void* get(CircularSingleLinkedList*, int, void*);
void set(CircularSingleLinkedList*, int, void*);

void free_list(CircularSingleLinkedList**);
void print_list(CircularSingleLinkedList*);
void print_node(CircularSingleLinkedList*, CircularSingleLinkedListNode*, bool, bool);

#endif
