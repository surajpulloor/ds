#include "ds/queue_ll.h"

int main()
{
    Queue_Linked_List* queue = init_queue_float();

    for (float i = 1.3859; i < 1000; i += 0.253)
        enqueue(queue, &i);

    print_queue(queue);

    char buffer[MAX_BUFFER];
    printf("%f\n", *(float*) dequeue(queue, buffer));
    printf("%f\n", *(float*) dequeue(queue, buffer));
    printf("%f\n", *(float*) dequeue(queue, buffer));
    printf("%f\n", *(float*) dequeue(queue, buffer));
    printf("%f\n", *(float*) dequeue(queue, buffer));
    printf("%f\n", *(float*) dequeue(queue, buffer));

    print_queue(queue);

    free_queue(&queue);
}