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
SingleLinkedListNode* push_node(SingleLinkedList*, char*);
void pop_node(SingleLinkedList*);
char* pop_node_v(SingleLinkedList*, char*);
char* get(SingleLinkedList*, int, char*);
void set(SingleLinkedList*, int, char*);
void free_list(SingleLinkedList**);
void print_list(SingleLinkedList*);

#endif
