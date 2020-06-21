#include "queue_array.h"

int print_node_value_char(Queue_Array* queue, int front)
{
    return printf("%c", *(char*) queue->buffer[front]);
}

int print_node_value_unsigned_char(Queue_Array* queue, int front)
{
    return printf("%c", *(unsigned char*) queue->buffer[front]);
}
