#include "../../include/queue_ll.h"

int main()
{
    Queue_Linked_list* queue = init_queue();

    enqueue(queue, "Node 1");
    enqueue(queue, "Node 2");
    enqueue(queue, "Node 3");
    enqueue(queue, "Node 4");
    enqueue(queue, "Node 5");
    enqueue(queue, "Node 6");

    print_queue(queue);

    char buffer[MAX_BUFFER];
    dequeue(queue, buffer);
    dequeue(queue, buffer);
    dequeue(queue, buffer);
    dequeue(queue, buffer);
    dequeue(queue, buffer);
    dequeue(queue, buffer);

    print_queue(queue);

    free_queue(&queue);
}