#include "ds/queue_ll.h"

Queue_Linked_List* init_queue_char_ptr()
{
    Queue_Linked_List* queue = init_queue(sizeof(char) * MAX_BUFFER);
    queue->size = 0;
    queue->list = init_list_char_ptr();

    return queue;
}
