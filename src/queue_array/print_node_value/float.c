#include "queue_array.h"

int print_node_value_float(Queue_Array* queue, int front)
{
    return printf("%f", *(float*) queue->buffer[front]);
}

int print_node_value_double(Queue_Array* queue, int front)
{
    return printf("%lf", *(double*) queue->buffer[front]);
}

int print_node_value_long_double(Queue_Array* queue, int front)
{
    return printf("%Lf", *(long double*) queue->buffer[front]);
}