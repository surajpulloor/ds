#ifndef _QUEUE_LINKED_LIST
#define _QUEUE_LINKED_LIST

#include "single_linked_list.h"

typedef struct {
    SingleLinkedList* list;
    int size;
} Queue_Linked_list;

Queue_Linked_list* init_queue();
void enqueue(Queue_Linked_list*, char*);
char* dequeue(Queue_Linked_list*, char*);
void print_queue(Queue_Linked_list*);
void free_queue(Queue_Linked_list**);

#endif