#ifndef _DOUBLE_LINKED_LIST_
#define _DOUBLE_LINKED_LIST_

#include <stdbool.h>

#define MAX_BUFFER 1000

typedef struct DLLNode {
	char data[MAX_BUFFER];
	struct DLLNode* prev;
	struct DLLNode* next;
} DoubleLinkedListNode;

typedef struct {
	DoubleLinkedListNode* front;
	DoubleLinkedListNode* rear;

	int size;
} DoubleLinkedList;

DoubleLinkedList* init_list();

DoubleLinkedListNode* push_before(DoubleLinkedList*, char*, int);
DoubleLinkedListNode* push_after(DoubleLinkedList*, char*, int);
DoubleLinkedListNode* push_back(DoubleLinkedList*, char*);
DoubleLinkedListNode* push_front(DoubleLinkedList*, char*);

void pop_before(DoubleLinkedList*, int);
void pop_after(DoubleLinkedList*, int);
void pop_back(DoubleLinkedList*);
void pop_front(DoubleLinkedList*);

char* pop_before_v(DoubleLinkedList*, int, char*);
char* pop_after_v(DoubleLinkedList*, int, char*);
char* pop_back_v(DoubleLinkedList*, char*);
char* pop_front_v(DoubleLinkedList*, char*);

char* get(DoubleLinkedList*, int, char*);
void set(DoubleLinkedList*, int, char*);

void free_list(DoubleLinkedList**);
void print_list(DoubleLinkedList*);
void print_node(DoubleLinkedListNode*, bool, bool);

#endif
