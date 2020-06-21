#include "queue_array.h"

void copy_value_to_buffer_char(void* buffer, Queue_Array* queue)
{
    char* temp = (char*) buffer;

    *temp = *(char*) queue->buffer[queue->front];
}

void copy_value_to_buffer_unsigned_char(void* buffer, Queue_Array* queue)
{
    unsigned char* temp = (unsigned char*) buffer;

    *temp = *(unsigned char*) queue->buffer[queue->front];
}