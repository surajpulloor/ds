#include "ds/queue_array.h"

void print_node_value_char(Queue_Array* queue, int front)
{
    printf("%c", *(char*) queue->buffer[front]);
}

void print_node_value_unsigned_char(Queue_Array* queue, int front)
{
    printf("%c", *(unsigned char*) queue->buffer[front]);
}
