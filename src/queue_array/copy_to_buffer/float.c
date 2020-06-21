#include "queue_array.h"

void copy_value_to_buffer_float(void* buffer, Queue_Array* queue)
{
    float* temp = (float*) buffer;

    *temp = *(float*) queue->buffer[queue->front];
}

void copy_value_to_buffer_double(void* buffer, Queue_Array* queue)
{
    double* temp = (double*) buffer;

    *temp = *(double*) queue->buffer[queue->front];
}

void copy_value_to_buffer_long_double(void* buffer, Queue_Array* queue)
{
    long double* temp = (long double*) buffer;

    *temp = *(long double*) queue->buffer[queue->front];
}