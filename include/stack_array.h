#ifndef _STACK_ARRAY_H
#define _STACK_ARRAY_H

#define MAX_BUFFER 1000
#define MAX_CHARS_BUFFER 1000

#include <stdio.h>

typedef struct SA Stack_Array;

struct SA{
    void** buffer;
    int top;
    int largest_string;

	size_t type_size;

	void (*copy_value_to_node)(Stack_Array*, void*);
	void (*copy_value_to_buffer)(void*, Stack_Array*);

	// generic print_node_value function
	void (*print_node_value)(Stack_Array*);
	void (*setup_largest_string_length)(Stack_Array*, void*);

};


// **** START: INIT FUNCTIONS *** //

// Main init function
Stack_Array* init_stack(size_t, size_t);


// Integer init function
Stack_Array* init_stack_short();
Stack_Array* init_stack_unsigned_short();
Stack_Array* init_stack_int();
Stack_Array* init_stack_unsigned_int();
Stack_Array* init_stack_long();
Stack_Array* init_stack_unsigned_long();
Stack_Array* init_stack_long_long();
Stack_Array* init_stack_unsigned_long_long();


// Float init function
Stack_Array* init_stack_float();
Stack_Array* init_stack_double();
Stack_Array* init_stack_long_double();


// Char init function
Stack_Array* init_stack_char();
Stack_Array* init_stack_unsigned_char();


// Pointer init function
Stack_Array* init_stack_char_ptr();

// **** END: INIT FUNCTIONS *** //


// **** START: ALLOC&FREE FUNCTIONS *** //

// Allocation and Free buffer functions
void* alloc_buffer(Stack_Array*);
void free_buffer(Stack_Array*);

// **** END: ALLOC&FREE FUNCTIONS *** //


// **** START: COPY_TO_NODE FUNCTIONS *** //

// copy_to_node (int)
void copy_value_to_node_short(Stack_Array*, void*);
void copy_value_to_node_unsigned_short(Stack_Array*, void*);
void copy_value_to_node_int(Stack_Array*, void*);
void copy_value_to_node_unsigned_int(Stack_Array*, void*);
void copy_value_to_node_long(Stack_Array*, void*);
void copy_value_to_node_unsigned_long(Stack_Array*, void*);
void copy_value_to_node_long_long(Stack_Array*, void*);
void copy_value_to_node_unsigned_long_long(Stack_Array*, void*);

// copy_to_node (float)
void copy_value_to_node_float(Stack_Array*, void*);
void copy_value_to_node_double(Stack_Array*, void*);
void copy_value_to_node_long_double(Stack_Array*, void*);

// copy_to_node (char)
void copy_value_to_node_char(Stack_Array*, void*);
void copy_value_to_node_unsigned_char(Stack_Array*, void*);

// copy_to_node (pointer)
void copy_value_to_node_char_ptr(Stack_Array*, void*);


// **** END: COPY_TO_NODE FUNCTIONS *** //


// **** START: COPY_TO_BUFFER FUNCTIONS *** //

// copy_to_buffer (int)
void copy_value_to_buffer_short(void*, Stack_Array*);
void copy_value_to_buffer_unsigned_short(void*, Stack_Array*);
void copy_value_to_buffer_int(void*, Stack_Array*);
void copy_value_to_buffer_unsigned_int(void*, Stack_Array*);
void copy_value_to_buffer_long(void*, Stack_Array*);
void copy_value_to_buffer_unsigned_long(void*, Stack_Array*);
void copy_value_to_buffer_long_long(void*, Stack_Array*);
void copy_value_to_buffer_unsigned_long_long(void*, Stack_Array*);

// copy_to_buffer (float)
void copy_value_to_buffer_float(void*, Stack_Array*);
void copy_value_to_buffer_double(void*, Stack_Array*);
void copy_value_to_buffer_long_double(void*, Stack_Array*);

// copy_to_buffer (char)
void copy_value_to_buffer_char(void*, Stack_Array*);
void copy_value_to_buffer_unsigned_char(void*, Stack_Array*);

// copy_to_buffer (pointer)
void copy_value_to_buffer_char_ptr(void*, Stack_Array*);


void setup_copy_value_funcs(
	Stack_Array*, 
	void (*)(Stack_Array*, void*), 
	void (*)(void*, Stack_Array*)
);



// **** END: COPY_TO_BUFFER FUNCTIONS *** //


// **** START: PRINT_NODE_VALUE FUNCTIONS *** //

// print_node_value (int)
void print_node_value_short(Stack_Array*, int);
void print_node_value_unsigned_short(Stack_Array*, int);
void print_node_value_int(Stack_Array*, int);
void print_node_value_unsigned_int(Stack_Array*, int);
void print_node_value_long(Stack_Array*, int);
void print_node_value_unsigned_long(Stack_Array*, int);
void print_node_value_long_long(Stack_Array*, int);
void print_node_value_unsigned_long_long(Stack_Array*, int);

// print_node_value (float)
void print_node_value_float(Stack_Array*, int);
void print_node_value_double(Stack_Array*, int);
void print_node_value_long_double(Stack_Array*, int);

// print_node_value (char)
void print_node_value_char(Stack_Array*, int);
void print_node_value_unsigned_char(Stack_Array*, int);

// print_node_value (pointer)
void print_node_value_char_ptr(Stack_Array*, int);


void setup_print_node_value_func(
	Stack_Array*, 
	void (*)(Stack_Array*, int)
);

// **** END: PRINT_NODE_VALUE FUNCTIONS *** //


// **** START: SETUP_LARGEST_STRING_LENGTH FUNCTIONS *** //

// setup_largest_string_length(int)
void setup_largest_string_length_short(Stack_Array*, void*);
void setup_largest_string_length_unsigned_short(Stack_Array*, void*);
void setup_largest_string_length_int(Stack_Array*, void*);
void setup_largest_string_length_unsigned_int(Stack_Array*, void*);
void setup_largest_string_length_long(Stack_Array*, void*);
void setup_largest_string_length_unsigned_long(Stack_Array*, void*);
void setup_largest_string_length_long_long(Stack_Array*, void*);
void setup_largest_string_length_unsigned_long_long(Stack_Array*, void*);

void setup_largest_string_length_float(Stack_Array*, void*);
void setup_largest_string_length_double(Stack_Array*, void*);
void setup_largest_string_length_long_double(Stack_Array*, void*);

void setup_largest_string_length_char(Stack_Array*, void*);
void setup_largest_string_length_unsigned_char(Stack_Array*, void*);

void setup_largest_string_length_char_ptr(Stack_Array*, void*);

void setup_largest_string_length_func(
	Stack_Array*, 
	void (*)(Stack_Array*, void*)
);

// **** END: SETUP_LARGEST_STRING_LENGTH FUNCTIONS *** //



void push(Stack_Array*, void*);
void* pop(Stack_Array*, void*);
void print_stack(Stack_Array*, int);
void free_stack(Stack_Array**);

#endif