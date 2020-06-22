#include "ds/queue_array.h"

void print_node_value_short(Queue_Array* queue, int front)
{
    printf("%hi", *(short*) queue->buffer[front]);
}

void print_node_value_unsigned_short(Queue_Array* queue, int front)
{
    printf("%hu", *(unsigned short*) queue->buffer[front]);
}

void print_node_value_int(Queue_Array* queue, int front)
{
    printf("%d", *(int*) queue->buffer[front]);
}

void print_node_value_unsigned_int(Queue_Array* queue, int front)
{
    printf("%u", *(unsigned int*) queue->buffer[front]);
}

void print_node_value_long(Queue_Array* queue, int front)
{
    printf("%ld", *(long*) queue->buffer[front]);
}

void print_node_value_unsigned_long(Queue_Array* queue, int front)
{
    printf("%lu", *(unsigned long*) queue->buffer[front]);
}

void print_node_value_long_long(Queue_Array* queue, int front)
{
    printf("%lld", *(long long*) queue->buffer[front]);
}

void print_node_value_unsigned_long_long(Queue_Array* queue, int front)
{
    printf("%llu", *(unsigned long long*) queue->buffer[front]);
}
