#ifndef _SINGLE_LINKED_LIST_
#define _SINGLE_LINKED_LIST_

#define MAX_BUFFER 1000

#include <stdio.h>
#include <stdbool.h>

typedef struct SLLNode {
	void* buffer;
	struct SLLNode* next;
} SingleLinkedListNode;

typedef struct {
	SingleLinkedListNode* front;
	SingleLinkedListNode* rear;
	int size;
	size_t data_type_size;

	void (*copy_value_to_node)(SingleLinkedListNode*, void*);
	void (*copy_value_to_buffer)(void*, SingleLinkedListNode*);

} SingleLinkedList;

SingleLinkedList* init_list(size_t);



SingleLinkedList* init_list_short();
SingleLinkedList* init_list_unsigned_short();
SingleLinkedList* init_list_int();
SingleLinkedList* init_list_unsigned_int();
SingleLinkedList* init_list_long();
SingleLinkedList* init_list_unsigned_long();
SingleLinkedList* init_list_long_long();
SingleLinkedList* init_list_unsigned_long_long();



SingleLinkedList* init_list_float();
SingleLinkedList* init_list_double();
SingleLinkedList* init_list_long_double();



SingleLinkedList* init_list_char();
SingleLinkedList* init_list_unsigned_char();



SingleLinkedList* init_list_char_ptr();



void* alloc_buffer(SingleLinkedList*, SingleLinkedListNode*);
void free_buffer(SingleLinkedListNode*);



void copy_value_to_node_short(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_short(SingleLinkedListNode*, void*);
void copy_value_to_node_int(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_int(SingleLinkedListNode*, void*);
void copy_value_to_node_long(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long(SingleLinkedListNode*, void*);
void copy_value_to_node_long_long(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long_long(SingleLinkedListNode*, void*);

void copy_value_to_node_float(SingleLinkedListNode*, void*);
void copy_value_to_node_double(SingleLinkedListNode*, void*);
void copy_value_to_node_long_double(SingleLinkedListNode*, void*);

void copy_value_to_node_char(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_char(SingleLinkedListNode*, void*);

void copy_value_to_node_char_ptr(SingleLinkedListNode*, void*);



void copy_value_to_buffer_short(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_short(void*, SingleLinkedListNode*);
void copy_value_to_buffer_int(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_int(void*, SingleLinkedListNode*);
void copy_value_to_buffer_long(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_long(void*, SingleLinkedListNode*);
void copy_value_to_buffer_long_long(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_long_long(void*, SingleLinkedListNode*);

void copy_value_to_buffer_float(void*, SingleLinkedListNode*);
void copy_value_to_buffer_double(void*, SingleLinkedListNode*);
void copy_value_to_buffer_long_double(void*, SingleLinkedListNode*);

void copy_value_to_buffer_char(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_char(void*, SingleLinkedListNode*);

void copy_value_to_buffer_char_ptr(void*, SingleLinkedListNode*);


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
void print_node(SingleLinkedListNode*, bool);

#endif
