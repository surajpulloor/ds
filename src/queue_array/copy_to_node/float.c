#include "ds/queue_array.h"

void copy_value_to_node_float(Queue_Array* queue, void* value)
{
    float* temp = (float*) queue->buffer[queue->rear];

    *temp = *(float*) value;
}

void copy_value_to_node_double(Queue_Array* queue, void* value)
{
    double* temp = (double*) queue->buffer[queue->rear];

    *temp = *(double*) value;
}

void copy_value_to_node_long_double(Queue_Array* queue, void* value)
{
    long double* temp = (long double*) queue->buffer[queue->rear];

    *temp = *(long double*) value;
}