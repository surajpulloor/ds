#include "queue_array.h"

int print_node_value_short(Queue_Array* queue, int front)
{
    return printf("%hi", *(short*) queue->buffer[front]);
}

int print_node_value_unsigned_short(Queue_Array* queue, int front)
{
    return printf("%hu", *(unsigned short*) queue->buffer[front]);
}

int print_node_value_int(Queue_Array* queue, int front)
{
    return printf("%d", *(int*) queue->buffer[front]);
}

int print_node_value_unsigned_int(Queue_Array* queue, int front)
{
    return printf("%u", *(unsigned int*) queue->buffer[front]);
}

int print_node_value_long(Queue_Array* queue, int front)
{
    return printf("%ld", *(long*) queue->buffer[front]);
}

int print_node_value_unsigned_long(Queue_Array* queue, int front)
{
    return printf("%lu", *(unsigned long*) queue->buffer[front]);
}

int print_node_value_long_long(Queue_Array* queue, int front)
{
    return printf("%lld", *(long long*) queue->buffer[front]);
}

int print_node_value_unsigned_long_long(Queue_Array* queue, int front)
{
    return printf("%llu", *(unsigned long long*) queue->buffer[front]);
}
