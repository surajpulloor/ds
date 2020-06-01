#ifndef _CIRCULAR_SINGLE_LINKED_LIST_
#define _CIRCULAR_SINGLE_LINKED_LIST_

#define MAX_BUFFER 1000

#include <stdbool.h>

typedef struct CircularSLLNode {
	char data[MAX_BUFFER];
	struct CircularSLLNode* next;
} CircularSingleLinkedListNode;

typedef struct {
	CircularSingleLinkedListNode* front;
	CircularSingleLinkedListNode* rear;

	int size;
} CircularSingleLinkedList;

CircularSingleLinkedList* init_list();

CircularSingleLinkedListNode* push_before(CircularSingleLinkedList*, char*, int);
CircularSingleLinkedListNode* push_after(CircularSingleLinkedList*, char*, int);
CircularSingleLinkedListNode* push_back(CircularSingleLinkedList*, char*);
CircularSingleLinkedListNode* push_front(CircularSingleLinkedList*, char*);

void pop_before(CircularSingleLinkedList*, int);
void pop_after(CircularSingleLinkedList*, int);
void pop_back(CircularSingleLinkedList*);
void pop_front(CircularSingleLinkedList*);

char* pop_before_v(CircularSingleLinkedList*, int, char*);
char* pop_after_v(CircularSingleLinkedList*, int, char*);
char* pop_back_v(CircularSingleLinkedList*, char*);
char* pop_front_v(CircularSingleLinkedList*, char*);

char* get(CircularSingleLinkedList*, int, char*);
void set(CircularSingleLinkedList*, int, char*);

void free_list(CircularSingleLinkedList**);
void print_list(CircularSingleLinkedList*);
void print_node(CircularSingleLinkedListNode*, bool, bool);

#endif
