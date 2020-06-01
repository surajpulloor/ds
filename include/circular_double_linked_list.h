#ifndef _CIRCULAR_DOUBLE_LINKED_LIST_
#define _CIRCULAR_DOUBLE_LINKED_LIST_

#define MAX_BUFFER 1000

#include <stdbool.h>

typedef struct CircularDLLNode {
	char data[MAX_BUFFER];
	struct CircularDLLNode* prev;
	struct CircularDLLNode* next;
} CircularDoubleLinkedListNode;

typedef struct {
	CircularDoubleLinkedListNode* front;
	CircularDoubleLinkedListNode* rear;

	int size;
} CircularDoubleLinkedList;

CircularDoubleLinkedList* init_list();

CircularDoubleLinkedListNode* push_before(CircularDoubleLinkedList*, char*, int);
CircularDoubleLinkedListNode* push_after(CircularDoubleLinkedList*, char*, int);
CircularDoubleLinkedListNode* push_back(CircularDoubleLinkedList*, char*);
CircularDoubleLinkedListNode* push_front(CircularDoubleLinkedList*, char*);

void pop_before(CircularDoubleLinkedList*, int);
void pop_after(CircularDoubleLinkedList*, int);
void pop_back(CircularDoubleLinkedList*);
void pop_front(CircularDoubleLinkedList*);

char* pop_before_v(CircularDoubleLinkedList*, int, char*);
char* pop_after_v(CircularDoubleLinkedList*, int, char*);
char* pop_back_v(CircularDoubleLinkedList*, char*);
char* pop_front_v(CircularDoubleLinkedList*, char*);

char* get(CircularDoubleLinkedList*, int, char*);
void set(CircularDoubleLinkedList*, int, char*);

void free_list(CircularDoubleLinkedList**);
void print_list(CircularDoubleLinkedList*);
void print_node(CircularDoubleLinkedListNode*, bool, bool);

#endif
