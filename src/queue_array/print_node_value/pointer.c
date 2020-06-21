#include "queue_array.h"

int print_node_value_char_ptr(Queue_Array* queue, int front)
{
    return printf("%s", (char*) queue->buffer[front]);
}