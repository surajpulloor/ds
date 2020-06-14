#ifndef _DOUBLE_LINKED_LIST_
#define _DOUBLE_LINKED_LIST_

#include <stdbool.h>
#include <stdio.h>

#define MAX_BUFFER 1000
#define MAX_CHARS_BUFFER 10000

typedef struct DLLNode {
	void* buffer;
	struct DLLNode* prev;
	struct DLLNode* next;

	// used in print_node()
	unsigned int buffer_length;
} DoubleLinkedListNode;

typedef struct {
	DoubleLinkedListNode* front;
	DoubleLinkedListNode* rear;

	int size;
	size_t type_size;

	void (*copy_value_to_node)(DoubleLinkedListNode*, void*);
	void (*copy_value_to_buffer)(void*, DoubleLinkedListNode*);

	// generic print_node_value function
	void (*print_node_value)(DoubleLinkedListNode*);
	void (*setup_buffer_length)(DoubleLinkedListNode*, void*);

} DoubleLinkedList;

// **** START: INIT FUNCTIONS *** //

// Main init function
DoubleLinkedList* init_list(size_t);


// Integer init function
DoubleLinkedList* init_list_short();
DoubleLinkedList* init_list_unsigned_short();
DoubleLinkedList* init_list_int();
DoubleLinkedList* init_list_unsigned_int();
DoubleLinkedList* init_list_long();
DoubleLinkedList* init_list_unsigned_long();
DoubleLinkedList* init_list_long_long();
DoubleLinkedList* init_list_unsigned_long_long();


// Float init function
DoubleLinkedList* init_list_float();
DoubleLinkedList* init_list_double();
DoubleLinkedList* init_list_long_double();


// Char init function
DoubleLinkedList* init_list_char();
DoubleLinkedList* init_list_unsigned_char();


// Pointer init function
DoubleLinkedList* init_list_char_ptr();

// **** END: INIT FUNCTIONS *** //


// **** START: ALLOC&FREE FUNCTIONS *** //

// Allocation and Free buffer functions
void* alloc_buffer(DoubleLinkedList*, DoubleLinkedListNode*);
void free_buffer(DoubleLinkedListNode*);

// **** END: ALLOC&FREE FUNCTIONS *** //


// **** START: COPY_TO_NODE FUNCTIONS *** //

// copy_to_node (int)
void copy_value_to_node_short(DoubleLinkedListNode*, void*);
void copy_value_to_node_unsigned_short(DoubleLinkedListNode*, void*);
void copy_value_to_node_int(DoubleLinkedListNode*, void*);
void copy_value_to_node_unsigned_int(DoubleLinkedListNode*, void*);
void copy_value_to_node_long(DoubleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long(DoubleLinkedListNode*, void*);
void copy_value_to_node_long_long(DoubleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long_long(DoubleLinkedListNode*, void*);

// copy_to_node (float)
void copy_value_to_node_float(DoubleLinkedListNode*, void*);
void copy_value_to_node_double(DoubleLinkedListNode*, void*);
void copy_value_to_node_long_double(DoubleLinkedListNode*, void*);

// copy_to_node (char)
void copy_value_to_node_char(DoubleLinkedListNode*, void*);
void copy_value_to_node_unsigned_char(DoubleLinkedListNode*, void*);

// copy_to_node (pointer)
void copy_value_to_node_char_ptr(DoubleLinkedListNode*, void*);


// **** END: COPY_TO_NODE FUNCTIONS *** //


// **** START: COPY_TO_BUFFER FUNCTIONS *** //

// copy_to_buffer (int)
void copy_value_to_buffer_short(void*, DoubleLinkedListNode*);
void copy_value_to_buffer_unsigned_short(void*, DoubleLinkedListNode*);
void copy_value_to_buffer_int(void*, DoubleLinkedListNode*);
void copy_value_to_buffer_unsigned_int(void*, DoubleLinkedListNode*);
void copy_value_to_buffer_long(void*, DoubleLinkedListNode*);
void copy_value_to_buffer_unsigned_long(void*, DoubleLinkedListNode*);
void copy_value_to_buffer_long_long(void*, DoubleLinkedListNode*);
void copy_value_to_buffer_unsigned_long_long(void*, DoubleLinkedListNode*);

// copy_to_buffer (float)
void copy_value_to_buffer_float(void*, DoubleLinkedListNode*);
void copy_value_to_buffer_double(void*, DoubleLinkedListNode*);
void copy_value_to_buffer_long_double(void*, DoubleLinkedListNode*);

// copy_to_buffer (char)
void copy_value_to_buffer_char(void*, DoubleLinkedListNode*);
void copy_value_to_buffer_unsigned_char(void*, DoubleLinkedListNode*);

// copy_to_buffer (pointer)
void copy_value_to_buffer_char_ptr(void*, DoubleLinkedListNode*);


void setup_copy_value_funcs(
	DoubleLinkedList*, 
	void (*)(DoubleLinkedListNode*, void*), 
	void (*)(void*, DoubleLinkedListNode*)
);



// **** END: COPY_TO_BUFFER FUNCTIONS *** //


// **** START: PRINT_NODE_VALUE FUNCTIONS *** //

// print_node_value (int)
void print_node_value_short(DoubleLinkedListNode*);
void print_node_value_unsigned_short(DoubleLinkedListNode*);
void print_node_value_int(DoubleLinkedListNode*);
void print_node_value_unsigned_int(DoubleLinkedListNode*);
void print_node_value_long(DoubleLinkedListNode*);
void print_node_value_unsigned_long(DoubleLinkedListNode*);
void print_node_value_long_long(DoubleLinkedListNode*);
void print_node_value_unsigned_long_long(DoubleLinkedListNode*);

// print_node_value (float)
void print_node_value_float(DoubleLinkedListNode*);
void print_node_value_double(DoubleLinkedListNode*);
void print_node_value_long_double(DoubleLinkedListNode*);

// print_node_value (char)
void print_node_value_char(DoubleLinkedListNode*);
void print_node_value_unsigned_char(DoubleLinkedListNode*);

// print_node_value (pointer)
void print_node_value_char_ptr(DoubleLinkedListNode*);


void setup_print_node_value_func(
	DoubleLinkedList*, 
	void (*)(DoubleLinkedListNode*)
);

// **** END: PRINT_NODE_VALUE FUNCTIONS *** //


// **** START: SETUP_BUFFER_LENGTH FUNCTIONS *** //

// setup_buffer_length(int)
void setup_buffer_length_short(DoubleLinkedListNode*, void*);
void setup_buffer_length_unsigned_short(DoubleLinkedListNode*, void*);
void setup_buffer_length_int(DoubleLinkedListNode*, void*);
void setup_buffer_length_unsigned_int(DoubleLinkedListNode*, void*);
void setup_buffer_length_long(DoubleLinkedListNode*, void*);
void setup_buffer_length_unsigned_long(DoubleLinkedListNode*, void*);
void setup_buffer_length_long_long(DoubleLinkedListNode*, void*);
void setup_buffer_length_unsigned_long_long(DoubleLinkedListNode*, void*);

void setup_buffer_length_float(DoubleLinkedListNode*, void*);
void setup_buffer_length_double(DoubleLinkedListNode*, void*);
void setup_buffer_length_long_double(DoubleLinkedListNode*, void*);

void setup_buffer_length_char(DoubleLinkedListNode*, void*);
void setup_buffer_length_unsigned_char(DoubleLinkedListNode*, void*);

void setup_buffer_length_char_ptr(DoubleLinkedListNode*, void*);

void setup_buffer_length_func(
	DoubleLinkedList*, 
	void (*)(DoubleLinkedListNode*, void*)
);

// **** END: SETUP_BUFFER_LENGTH FUNCTIONS *** //

DoubleLinkedListNode* push_before(DoubleLinkedList*, void*, int);
DoubleLinkedListNode* push_after(DoubleLinkedList*, void*, int);
DoubleLinkedListNode* push_back(DoubleLinkedList*, void*);
DoubleLinkedListNode* push_front(DoubleLinkedList*, void*);

void pop_before(DoubleLinkedList*, int);
void pop_after(DoubleLinkedList*, int);
void pop_back(DoubleLinkedList*);
void pop_front(DoubleLinkedList*);

void* pop_before_v(DoubleLinkedList*, int, void*);
void* pop_after_v(DoubleLinkedList*, int, void*);
void* pop_back_v(DoubleLinkedList*, void*);
void* pop_front_v(DoubleLinkedList*, void*);

void* get(DoubleLinkedList*, int, void*);
void set(DoubleLinkedList*, int, void*);

void free_list(DoubleLinkedList**);
void print_list(DoubleLinkedList*);
void print_node(DoubleLinkedList*, DoubleLinkedListNode*, bool, bool);

#endif
