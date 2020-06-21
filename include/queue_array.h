#ifndef _QUEUE_ARRAY_H
#define _QUEUE_ARRAY_H

#define MAX_BUFFER 1000
#define MAX_CHARS_BUFFER 500

#include <stdio.h>

typedef struct QA Queue_Array;

struct QA {
    void** buffer;
    int front;
    int rear;
    
    size_t type_size;

	void (*copy_value_to_node)(Queue_Array*, void*);
	void (*copy_value_to_buffer)(void*, Queue_Array*);

	// generic print_node_value function
	void (*print_node_value)(Queue_Array*, int);

};


// **** START: INIT FUNCTIONS *** //

// Main init function
Queue_Array* init_queue(size_t, size_t);


// Integer init function
Queue_Array* init_queue_short();
Queue_Array* init_queue_unsigned_short();
Queue_Array* init_queue_int();
Queue_Array* init_queue_unsigned_int();
Queue_Array* init_queue_long();
Queue_Array* init_queue_unsigned_long();
Queue_Array* init_queue_long_long();
Queue_Array* init_queue_unsigned_long_long();


// Float init function
Queue_Array* init_queue_float();
Queue_Array* init_queue_double();
Queue_Array* init_queue_long_double();


// Char init function
Queue_Array* init_queue_char();
Queue_Array* init_queue_unsigned_char();


// Pointer init function
Queue_Array* init_queue_char_ptr();

// **** END: INIT FUNCTIONS *** //


// **** START: ALLOC&FREE FUNCTIONS *** //

// Allocation and Free buffer functions
void* alloc_buffer(Queue_Array*);
void free_buffer(Queue_Array*);

// **** END: ALLOC&FREE FUNCTIONS *** //


// **** START: COPY_TO_NODE FUNCTIONS *** //

// copy_to_node (int)
void copy_value_to_node_short(Queue_Array*, void*);
void copy_value_to_node_unsigned_short(Queue_Array*, void*);
void copy_value_to_node_int(Queue_Array*, void*);
void copy_value_to_node_unsigned_int(Queue_Array*, void*);
void copy_value_to_node_long(Queue_Array*, void*);
void copy_value_to_node_unsigned_long(Queue_Array*, void*);
void copy_value_to_node_long_long(Queue_Array*, void*);
void copy_value_to_node_unsigned_long_long(Queue_Array*, void*);

// copy_to_node (float)
void copy_value_to_node_float(Queue_Array*, void*);
void copy_value_to_node_double(Queue_Array*, void*);
void copy_value_to_node_long_double(Queue_Array*, void*);

// copy_to_node (char)
void copy_value_to_node_char(Queue_Array*, void*);
void copy_value_to_node_unsigned_char(Queue_Array*, void*);

// copy_to_node (pointer)
void copy_value_to_node_char_ptr(Queue_Array*, void*);


// **** END: COPY_TO_NODE FUNCTIONS *** //


// **** START: COPY_TO_BUFFER FUNCTIONS *** //

// copy_to_buffer (int)
void copy_value_to_buffer_short(void*, Queue_Array*);
void copy_value_to_buffer_unsigned_short(void*, Queue_Array*);
void copy_value_to_buffer_int(void*, Queue_Array*);
void copy_value_to_buffer_unsigned_int(void*, Queue_Array*);
void copy_value_to_buffer_long(void*, Queue_Array*);
void copy_value_to_buffer_unsigned_long(void*, Queue_Array*);
void copy_value_to_buffer_long_long(void*, Queue_Array*);
void copy_value_to_buffer_unsigned_long_long(void*, Queue_Array*);

// copy_to_buffer (float)
void copy_value_to_buffer_float(void*, Queue_Array*);
void copy_value_to_buffer_double(void*, Queue_Array*);
void copy_value_to_buffer_long_double(void*, Queue_Array*);

// copy_to_buffer (char)
void copy_value_to_buffer_char(void*, Queue_Array*);
void copy_value_to_buffer_unsigned_char(void*, Queue_Array*);

// copy_to_buffer (pointer)
void copy_value_to_buffer_char_ptr(void*, Queue_Array*);


void setup_copy_value_funcs(
	Queue_Array*, 
	void (*)(Queue_Array*, void*), 
	void (*)(void*, Queue_Array*)
);



// **** END: COPY_TO_BUFFER FUNCTIONS *** //


// **** START: PRINT_NODE_VALUE FUNCTIONS *** //

// print_node_value (int)
void print_node_value_short(Queue_Array*, int);
void print_node_value_unsigned_short(Queue_Array*, int);
void print_node_value_int(Queue_Array*, int);
void print_node_value_unsigned_int(Queue_Array*, int);
void print_node_value_long(Queue_Array*, int);
void print_node_value_unsigned_long(Queue_Array*, int);
void print_node_value_long_long(Queue_Array*, int);
void print_node_value_unsigned_long_long(Queue_Array*, int);

// print_node_value (float)
void print_node_value_float(Queue_Array*, int);
void print_node_value_double(Queue_Array*, int);
void print_node_value_long_double(Queue_Array*, int);

// print_node_value (char)
void print_node_value_char(Queue_Array*, int);
void print_node_value_unsigned_char(Queue_Array*, int);

// print_node_value (pointer)
void print_node_value_char_ptr(Queue_Array*, int);


void setup_print_node_value_func(
	Queue_Array*, 
	void (*)(Queue_Array*, int)
);

// **** END: PRINT_NODE_VALUE FUNCTIONS *** //

void enqueue(Queue_Array*, void*);
void* dequeue(Queue_Array*, void*);
void print_queue(Queue_Array*);
void free_queue(Queue_Array**);

#endif