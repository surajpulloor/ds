#include "ds/queue_array.h"

void copy_value_to_node_char(Queue_Array* queue, void* value)
{
    char* temp = (char*) queue->buffer[queue->rear];

    *temp = *(char*) value;
}

void copy_value_to_node_unsigned_char(Queue_Array* queue, void* value)
{
    unsigned char* temp = (unsigned char*) queue->buffer[queue->rear];

    *temp = *(unsigned char*) value;
}