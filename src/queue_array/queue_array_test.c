#include "../../include/queue_array.h"

int main()
{
    Queue_Array* queue = init_queue();

    enqueue(queue, "Hello, World");
    enqueue(queue, "Damn it");
    enqueue(queue, "Chills Gar");
    enqueue(queue, "Like this");
    enqueue(queue, "Houston");

    print_queue(queue);

    char buffer[MAX_CHARS_BUFFER];

    dequeue(queue, buffer);
    dequeue(queue, buffer);
    dequeue(queue, buffer);
    dequeue(queue, buffer);
    dequeue(queue, buffer);

    enqueue(queue, "New Stuff");
    enqueue(queue, "Newer Stuff");

    print_queue(queue);

    free_queue(&queue);

}