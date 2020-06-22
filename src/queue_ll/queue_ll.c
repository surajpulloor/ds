#include "ds/queue_ll.h"

#include <stdlib.h>
#include <stdio.h>


void enqueue(Queue_Linked_List* queue, void* value)
{
    if (queue == NULL) {
        printf("error: the queue doesn't exists. please create one.\n");
        return;
    }

    push_back(queue->list, value);
    queue->size++;
}

void* dequeue(Queue_Linked_List* queue, void* buffer)
{
    if (queue == NULL) {
        printf("error: the queue doesn't exists. please create one.\n");
        return NULL;
    }

    if (queue->size == 0) {
        printf("error: the queue is empty. please enqueue something.\n");
        return NULL;
    }

    queue->size--;
    return pop_front_v(queue->list, buffer);
}

void print_queue(Queue_Linked_List* queue)
{
    if (queue == NULL) {
        printf("error: the queue doesn't exists. please create one.\n");
        return;
    }

    if (queue->size == 0) {
        printf("error: the queue is empty. please enqueue something.\n");
        return;
    }

    for (SingleLinkedListNode* node = queue->list->front; node; node = node->next) {
        queue->list->print_node_value(node);
        printf(" <= ");
    }

    printf("\n\n");
}

void free_queue(Queue_Linked_List** queue)
{
    if (*queue == NULL) {
        printf("error: the queue doesn't exists. please create one.\n");
        return;
    }

    if ((*queue)->size == 0) {
        printf("error: the queue is empty. please enqueue something.\n");
        return;
    }

    free_list(&((*queue)->list));
    free(*queue);
    *queue = NULL;
}
