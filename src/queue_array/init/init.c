#include "queue_array.h"
#include <stdio.h>
#include <stdlib.h>


Queue_Array* init_queue(size_t type_size, size_t type_ptr_size)
{
    Queue_Array* queue = (Queue_Array*) malloc(sizeof(Queue_Array));

    // alloc buffer array
    queue->buffer = malloc(type_ptr_size * MAX_BUFFER);

    queue->type_size = type_size;

    return queue;
}