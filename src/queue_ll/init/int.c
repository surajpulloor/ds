#include "queue_ll.h"

Queue_Linked_List* init_queue_short()
{
    Queue_Linked_List* queue = init_queue(sizeof(short));
    queue->size = 0;
    queue->list = init_list_short();
     
    return queue;
}

Queue_Linked_List* init_queue_unsigned_short()
{
    Queue_Linked_List* queue = init_queue(sizeof(unsigned short));
    queue->size = 0;
    queue->list = init_list_unsigned_char();

    return queue;
}


Queue_Linked_List* init_queue_int()
{
    Queue_Linked_List* queue = init_queue(sizeof(int));
    queue->size = 0;
    queue->list = init_list_int();

    return queue;
}

Queue_Linked_List* init_queue_unsigned_int()
{
    Queue_Linked_List* queue = init_queue(sizeof(unsigned int));
    queue->size = 0;
    queue->list = init_list_unsigned_int();

    return queue;
}

Queue_Linked_List* init_queue_long()
{
    Queue_Linked_List* queue = init_queue(sizeof(long));
    queue->size = 0;
    queue->list = init_list_long();
  
    return queue;
}

Queue_Linked_List* init_queue_unsigned_long()
{
    Queue_Linked_List* queue = init_queue(sizeof(unsigned long));
    queue->size = 0;
    queue->list = init_list_unsigned_long();

    return queue;
}

Queue_Linked_List* init_queue_long_long()
{
    Queue_Linked_List* queue = init_queue(sizeof(long long));
    queue->size = 0;
    queue->list = init_list_long_long();

    return queue;
}

Queue_Linked_List* init_queue_unsigned_long_long()
{
    Queue_Linked_List* queue = init_queue(sizeof(unsigned long long));
    queue->size = 0;
    queue->list = init_list_unsigned_long_long();

    return queue;
}