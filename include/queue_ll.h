#ifndef _QUEUE_LINKED_LIST
#define _QUEUE_LINKED_LIST

#include "single_linked_list.h"

typedef struct {
    SingleLinkedList* list;
    int size;
} Queue_Linked_List;

Queue_Linked_List* init_queue(size_t);

// Integer init function
Queue_Linked_List* init_queue_short();
Queue_Linked_List* init_queue_unsigned_short();
Queue_Linked_List* init_queue_int();
Queue_Linked_List* init_queue_unsigned_int();
Queue_Linked_List* init_queue_long();
Queue_Linked_List* init_queue_unsigned_long();
Queue_Linked_List* init_queue_long_long();
Queue_Linked_List* init_queue_unsigned_long_long();


// Float init function
Queue_Linked_List* init_queue_float();
Queue_Linked_List* init_queue_double();
Queue_Linked_List* init_queue_long_double();


// Char init function
Queue_Linked_List* init_queue_char();
Queue_Linked_List* init_queue_unsigned_char();


// Pointer init function
Queue_Linked_List* init_queue_char_ptr();

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

void enqueue(Queue_Linked_List*, void*);
void* dequeue(Queue_Linked_List*, void*);
void print_queue(Queue_Linked_List*);
void free_queue(Queue_Linked_List**);

#endif