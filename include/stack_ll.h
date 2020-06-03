#ifndef _STACK_LINKED_LIST_H
#define _STACK_LINKED_LIST_H

#define MAX_CHARS 1000

#include "single_linked_list.h"

typedef struct {
    SingleLinkedList* list;
    int top;
    int largestString;
} Stack_Linked_List;


Stack_Linked_List* init_stack();
void push(Stack_Linked_List*, char*);
char* pop(Stack_Linked_List*, char*);
void print_stack(Stack_Linked_List*);
void free_stack(Stack_Linked_List**);

#endif