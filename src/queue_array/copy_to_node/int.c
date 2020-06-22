#include "ds/queue_array.h"

void copy_value_to_node_short(Queue_Array* queue, void* value)
{
    short* temp = (short*) queue->buffer[queue->rear];

    *temp = *(short*) value;
}

void copy_value_to_node_unsigned_short(Queue_Array* queue, void* value)
{
    unsigned short* temp = (unsigned short*) queue->buffer[queue->rear];

    *temp = *(unsigned short*) value;
}


void copy_value_to_node_int(Queue_Array* queue, void* value)
{
    int* temp = (int*) queue->buffer[queue->rear];

    *temp = *(int*) value;
}

void copy_value_to_node_unsigned_int(Queue_Array* queue, void* value)
{
    unsigned int* temp = (unsigned int*) queue->buffer[queue->rear];

    *temp = *(unsigned int*) value;
}

void copy_value_to_node_long(Queue_Array* queue, void* value)
{
    long* temp = (long*) queue->buffer[queue->rear];

    *temp = *(long*) value;
}

void copy_value_to_node_unsigned_long(Queue_Array* queue, void* value)
{
    unsigned long* temp = (unsigned long*) queue->buffer[queue->rear];

    *temp = *(unsigned long*) value;
}

void copy_value_to_node_long_long(Queue_Array* queue, void* value)
{
    long long* temp = (long long*) queue->buffer[queue->rear];

    *temp = *(long long*) value;
}

void copy_value_to_node_unsigned_long_long(Queue_Array* queue, void* value)
{
    unsigned long long* temp = (unsigned long long*) queue->buffer[queue->rear];

    *temp = *(unsigned long long*) value;
}