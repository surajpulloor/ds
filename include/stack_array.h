#ifndef _STACK_ARRAY_H
#define _STACK_ARRAY_H

#define MAX_BUFFER 1000
#define MAX_CHARS 1000
#define MAX_CHARS_BUFFER_SPRINTF 10000

#include <stdio.h>

typedef struct {
    void** buffer;
    int top;
    int largestString;

	size_t type_size;

	void (*copy_value_to_node)(Stack_Array*, void*);
	void (*copy_value_to_buffer)(void*, Stack_Array*);

} Stack_Array;


// **** START: INIT FUNCTIONS *** //

// Main init function
Stack_Array* init_stack(size_t);


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


void push(Stack_Array*, void*);
void* pop(Stack_Array*, void*);
void print_stack(Stack_Array*, int);
void free_stack(Stack_Array**);

#endif