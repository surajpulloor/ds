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

	void* (*allocBuffer)(SingleLinkedListNode*);
	void (*copyValueToNode)(SingleLinkedListNode*, void*);
	void (*copyValueToBuffer)(void*, SingleLinkedListNode*);
	void (*freeBuffer)(SingleLinkedListNode*);

	int size;
} SingleLinkedList;

SingleLinkedList* init_list_int();
SingleLinkedList* init_list_float();
SingleLinkedList* init_list_double();
SingleLinkedList* init_list_char();
SingleLinkedList* init_list_char_ptr();

void* allocBuffer_int(SingleLinkedListNode*);
void* allocBuffer_float(SingleLinkedListNode*);
void* allocBuffer_double(SingleLinkedListNode*);
void* allocBuffer_char(SingleLinkedListNode*);
void* allocBuffer_char_ptr(SingleLinkedListNode*);

void copyValueToNode_int(SingleLinkedListNode*, void*);
void copyValueToNode_float(SingleLinkedListNode*, void*);
void copyValueToNode_double(SingleLinkedListNode*, void*);
void copyValueToNode_char(SingleLinkedListNode*, void*);
void copyValueToNode_char_ptr(SingleLinkedListNode*, void*);

void copyValueToBuffer_int(SingleLinkedListNode*, void*);
void copyValueToBuffer_float(SingleLinkedListNode*, void*);
void copyValueToBuffer_double(SingleLinkedListNode*, void*);
void copyValueToBuffer_char(SingleLinkedListNode*, void*);
void copyValueToBuffer_char_ptr(SingleLinkedListNode*, void*);

void freeBuffer(SingleLinkedListNode*);


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
