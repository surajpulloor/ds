#ifndef _SINGLE_LINKED_LIST_
#define _SINGLE_LINKED_LIST_

#define MAX_BUFFER 1000

#include <stdbool.h>

typedef struct SLLNode {
	void* buffer;
	struct SLLNode* next;
} SingleLinkedListNode;

typedef struct {
	SingleLinkedListNode* front;
	SingleLinkedListNode* rear;

	void* (*alloc_buffer)(SingleLinkedListNode*);
	void (*copy_value_to_node)(SingleLinkedListNode*, void*);
	void (*copy_value_to_buffer)(void*, SingleLinkedListNode*);
	void (*free_buffer)(SingleLinkedListNode*);

	int size;
} SingleLinkedList;

SingleLinkedList* init_list_int();
SingleLinkedList* init_list_float();
SingleLinkedList* init_list_double();
SingleLinkedList* init_list_char();
SingleLinkedList* init_list_char_ptr();

void* alloc_buffer_int(SingleLinkedListNode*);
void* alloc_buffer_float(SingleLinkedListNode*);
void* alloc_buffer_double(SingleLinkedListNode*);
void* alloc_buffer_char(SingleLinkedListNode*);
void* alloc_buffer_char_ptr(SingleLinkedListNode*);

void copy_value_to_node_int(SingleLinkedListNode*, void*);
void copy_value_to_node_float(SingleLinkedListNode*, void*);
void copy_value_to_node_double(SingleLinkedListNode*, void*);
void copy_value_to_node_char(SingleLinkedListNode*, void*);
void copy_value_to_node_char_ptr(SingleLinkedListNode*, void*);

void copy_value_to_buffer_int(SingleLinkedListNode*, void*);
void copy_value_to_buffer_float(SingleLinkedListNode*, void*);
void copy_value_to_buffer_double(SingleLinkedListNode*, void*);
void copy_value_to_buffer_char(SingleLinkedListNode*, void*);
void copy_value_to_buffer_char_ptr(SingleLinkedListNode*, void*);

void free_buffer(SingleLinkedListNode*);


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
