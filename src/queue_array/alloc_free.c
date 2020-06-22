#include "ds/queue_array.h"
#include <stdio.h>
#include <stdlib.h>

void* alloc_buffer(Queue_Array* queue)
{
    queue->buffer[queue->rear] = malloc(queue->type_size);
}

void free_buffer(Queue_Array* queue)
{
    free(queue->buffer[queue->front]);
}



void free_queue(Queue_Array** queue)
{
    if (queue == NULL) {
        printf("error: queue doesn't exists. please create one.\n");
        return;
    }

    // free all the elements in the buffer
    for (; (*queue)->front <= (*queue)->rear; (*queue)->front++)
        free_buffer((*queue));

        
    // then free the buffer
    free((*queue)->buffer);

    // then free the queue
    free(*queue);
    *queue = NULL;
}
