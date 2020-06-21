#include "queue_array.h"

void print_node_value_float(Queue_Array* queue, int front)
{
    printf("%f", *(float*) queue->buffer[front]);
}

void print_node_value_double(Queue_Array* queue, int front)
{
    printf("%lf", *(double*) queue->buffer[front]);
}

void print_node_value_long_double(Queue_Array* queue, int front)
{
    printf("%Lf", *(long double*) queue->buffer[front]);
}