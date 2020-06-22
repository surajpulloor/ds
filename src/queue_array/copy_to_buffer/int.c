#include "ds/queue_array.h"

void copy_value_to_buffer_short(void* buffer, Queue_Array* queue)
{
    short* temp = (short*) buffer;

    *temp = *(short*) queue->buffer[queue->front];
}

void copy_value_to_buffer_unsigned_short(void* buffer, Queue_Array* queue)
{
    unsigned short* temp = (unsigned short*) buffer;

    *temp = *(unsigned short*) queue->buffer[queue->front];
}


void copy_value_to_buffer_int(void* buffer, Queue_Array* queue)
{
    int* temp = (int*) buffer;

    *temp = *(int*) queue->buffer[queue->front];
}

void copy_value_to_buffer_unsigned_int(void* buffer, Queue_Array* queue)
{
    unsigned int* temp = (unsigned int*) buffer;

    *temp = *(unsigned int*) queue->buffer[queue->front];
}

void copy_value_to_buffer_long(void* buffer, Queue_Array* queue)
{
    long* temp = (long*) buffer;

    *temp = *(long*) queue->buffer[queue->front];
}

void copy_value_to_buffer_unsigned_long(void* buffer, Queue_Array* queue)
{
    unsigned long* temp = (unsigned long*) buffer;

    *temp = *(unsigned long*) queue->buffer[queue->front];
}

void copy_value_to_buffer_long_long(void* buffer, Queue_Array* queue)
{
    long long* temp = (long long*) buffer;

    *temp = *(long long*) queue->buffer[queue->front];
}

void copy_value_to_buffer_unsigned_long_long(void* buffer, Queue_Array* queue)
{
    unsigned long long* temp = (unsigned long long*) buffer;

    *temp = *(unsigned long long*) queue->buffer[queue->front];
}
