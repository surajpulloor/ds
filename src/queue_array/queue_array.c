#include "../../include/queue_array.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Queue_Array* init_queue()
{
    Queue_Array* queue = (Queue_Array*) malloc(sizeof(Queue_Array));

    queue->front = -1;
    queue->rear = -1;
}

void enqueue(Queue_Array* queue, char* value)
{
    if (queue == NULL) {
        printf("error: queue doesn't exists. please create one before enqueueing.\n");
        return;
    }

    queue->rear++;

    if (queue->front == -1) {
        queue->front++;
        strcpy(queue->buffer[queue->front], value);
    } else
        strcpy(queue->buffer[queue->rear], value);
}

char* dequeue(Queue_Array* queue, char* buffer)
{
    if (queue == NULL) {
        printf("error: queue doesn't exists. please create one before enqueueing.\n");
        return NULL;
    }

    if (queue->front == -1) {
        printf("error: queue is empty. please enqueue something.\n");
        return NULL;
    }

    strcpy(buffer, queue->buffer[queue->front]);

    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else
        queue->front++;

    return buffer;
}

void print_queue(Queue_Array* queue)
{
    if (queue == NULL) {
        printf("error: queue doesn't exists. please create one before enqueueing.\n");
        return;
    }

    if (queue->front == -1) {
        printf("error: queue is empty. please enqueue something.\n");
        return;
    }

    for (int i = queue->front; i <= queue->rear; i++)
        printf("%s <= ", queue->buffer[i]);

    printf("\b\b\b\b\n");

    fflush(stdout);
}

void free_queue(Queue_Array** queue)
{
    if (*queue == NULL) {
        printf("error: queue doesn't exists. please create one before enqueueing.\n");
        return;
    }

    free(*queue);

    *queue = NULL;
}
