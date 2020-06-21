#include "queue_ll.h"

Queue_Linked_List* init_queue_char()
{
    Queue_Linked_List* queue = init_queue(sizeof(char));
    queue->size = 0;
    queue->list = init_list_char();

    return queue;
}

Queue_Linked_List* init_queue_unsigned_char()
{
    Queue_Linked_List* queue = init_queue(sizeof(unsigned char));
    queue->size = 0;
    queue->list = init_list_unsigned_char();

    return queue;
}