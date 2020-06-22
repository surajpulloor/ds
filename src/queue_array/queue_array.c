#include "ds/queue_array.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void enqueue(Queue_Array* queue, void* value)
{
    if (queue == NULL) {
        printf("error: queue doesn't exists. please create one before enqueueing.\n");
        return;
    }

    queue->rear++;

    if (queue->front == -1)
        queue->front++;

    alloc_buffer(queue);
    queue->copy_value_to_node(queue, value);
}

void* dequeue(Queue_Array* queue, void* buffer)
{
    if (queue == NULL) {
        printf("error: queue doesn't exists. please create one before enqueueing.\n");
        return NULL;
    }

    if (queue->front == -1) {
        printf("error: queue is empty. please enqueue something.\n");
        return NULL;
    }

    free_buffer(queue);
    queue->copy_value_to_buffer(buffer, queue);

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

    for (int i = queue->front; i <= queue->rear; i++) {
        queue->print_node_value(queue, i);
        printf(" <= ");
    }

    printf("\n\n");

}