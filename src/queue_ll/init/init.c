#include "ds/queue_ll.h"
#include <stdlib.h>


Queue_Linked_List* init_queue(size_t type_size)
{
    Queue_Linked_List* queue = (Queue_Linked_List*) malloc(sizeof(Queue_Linked_List));
    queue->list = init_list(type_size);
    queue->size = 0;

    return queue;
}