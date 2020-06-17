#ifndef _STACK_ARRAY_H
#define _STACK_ARRAY_H

#define MAX_BUFFER 1000
#define MAX_CHARS 1000
#define MAX_CHARS_BUFFER_SPRINTF 10000

typedef struct {
    void** buffer;
    int top;
    int largestString;
} Stack_Array;


// **** START: INIT FUNCTIONS *** //

// Main init function
Stack_Array* init_list(size_t);


// Integer init function
Stack_Array* init_list_short();
Stack_Array* init_list_unsigned_short();
Stack_Array* init_list_int();
Stack_Array* init_list_unsigned_int();
Stack_Array* init_list_long();
Stack_Array* init_list_unsigned_long();
Stack_Array* init_list_long_long();
Stack_Array* init_list_unsigned_long_long();


// Float init function
Stack_Array* init_list_float();
Stack_Array* init_list_double();
Stack_Array* init_list_long_double();


// Char init function
Stack_Array* init_list_char();
Stack_Array* init_list_unsigned_char();


// Pointer init function
Stack_Array* init_list_char_ptr();

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



// **** START: SETUP_BUFFER_LENGTH FUNCTIONS *** //

// setup_buffer_length(int)
void setup_buffer_length_short(Stack_Array*, void*);
void setup_buffer_length_unsigned_short(Stack_Array*, void*);
void setup_buffer_length_int(Stack_Array*, void*);
void setup_buffer_length_unsigned_int(Stack_Array*, void*);
void setup_buffer_length_long(Stack_Array*, void*);
void setup_buffer_length_unsigned_long(Stack_Array*, void*);
void setup_buffer_length_long_long(Stack_Array*, void*);
void setup_buffer_length_unsigned_long_long(Stack_Array*, void*);

void setup_buffer_length_float(Stack_Array*, void*);
void setup_buffer_length_double(Stack_Array*, void*);
void setup_buffer_length_long_double(Stack_Array*, void*);

void setup_buffer_length_char(Stack_Array*, void*);
void setup_buffer_length_unsigned_char(Stack_Array*, void*);

void setup_buffer_length_char_ptr(Stack_Array*, void*);

void setup_buffer_length_func(
	Stack_Array*, 
	void (*)(Stack_Array*, void*)
);

// **** END: SETUP_BUFFER_LENGTH FUNCTIONS *** //


void push(Stack_Array*, void*);
void* pop(Stack_Array*, void*);
void print_stack(Stack_Array*, int);
void free_stack(Stack_Array**);

#endif