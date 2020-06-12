#include "../../include/queue_ll.h"

#include <stdlib.h>
#include <stdio.h>

Queue_Linked_list* init_queue()
{
    Queue_Linked_list* queue = (Queue_Linked_list*) malloc(sizeof(Queue_Linked_list));
    queue->list = init_list();
    queue->size = 0;

    return queue;
}

void enqueue(Queue_Linked_list* queue, char* value)
{
    if (queue == NULL) {
        printf("error: the queue doesn't exists. please create one.\n");
        return;
    }

    push_back(queue->list, value);
    queue->size++;
}

char* dequeue(Queue_Linked_list* queue, char* buffer)
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

void print_queue(Queue_Linked_list* queue)
{
    if (queue == NULL) {
        printf("error: the queue doesn't exists. please create one.\n");
        return;
    }

    if (queue->size == 0) {
        printf("error: the queue is empty. please enqueue something.\n");
        return;
    }

    for (SingleLinkedListNode* node = queue->list->front; node; node = node->next)
        printf("%s <= ", node->data);

    printf("\b\b\b\b");
    fflush(stdout);
}

void free_queue(Queue_Linked_list** queue)
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
