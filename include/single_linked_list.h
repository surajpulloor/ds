#ifndef _SINGLE_LINKED_LIST_
#define _SINGLE_LINKED_LIST_

#define MAX_BUFFER 1000

typedef struct SLLNode {
	char data[MAX_BUFFER];
	struct SLLNode* next;
} SingleLinkedListNode;

typedef struct {
	SingleLinkedListNode* front;
	SingleLinkedListNode* rear;

	int size;
} SingleLinkedList;

SingleLinkedList* init_list();

SingleLinkedListNode* push_before(SingleLinkedList*, char*, int);
SingleLinkedListNode* push_after(SingleLinkedList*, char*, int);
SingleLinkedListNode* push(SingleLinkedList*, char*);

void pop_before(SingleLinkedList*, int);
void pop_after(SingleLinkedList*, int);
void pop(SingleLinkedList*);

char* pop_before_v(SingleLinkedList*, int, char*);
char* pop_after_v(SingleLinkedList*, int, char*);
char* pop_v(SingleLinkedList*, char*);

char* get(SingleLinkedList*, int, char*);
void set(SingleLinkedList*, int, char*);

void free_list(SingleLinkedList**);
void print_list(SingleLinkedList*);

#endif
