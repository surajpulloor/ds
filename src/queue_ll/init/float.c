#include "ds/queue_ll.h"


Queue_Linked_List* init_queue_float()
{
    Queue_Linked_List* queue = init_queue(sizeof(float));
    queue->size = 0;
    queue->list = init_list_float();

    return queue;
}

Queue_Linked_List* init_queue_double()
{
    Queue_Linked_List* queue = init_queue(sizeof(double));
        queue->size = 0;
    queue->list = init_list_double();

    return queue;
}

Queue_Linked_List* init_queue_long_double()
{
    Queue_Linked_List* queue = init_queue(sizeof(long double));
        queue->size = 0;
    queue->list = init_list_long_double();

    return queue;
}