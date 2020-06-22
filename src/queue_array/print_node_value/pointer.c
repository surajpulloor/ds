#include "ds/queue_array.h"

void print_node_value_char_ptr(Queue_Array* queue, int front)
{
    printf("%s", (char*) queue->buffer[front]);
}