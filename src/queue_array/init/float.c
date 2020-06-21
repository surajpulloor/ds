#include "queue_array.h"


Queue_Array* init_queue_float()
{
    Queue_Array* queue = init_queue(sizeof(float), sizeof(float*));
    
    queue->copy_value_to_node = copy_value_to_node_float;
    queue->copy_value_to_buffer = copy_value_to_buffer_float;
    
    queue->print_node_value = print_node_value_float;

    return queue;
}

Queue_Array* init_queue_double()
{
    Queue_Array* queue = init_queue(sizeof(double), sizeof(double*));
    
    queue->copy_value_to_node = copy_value_to_node_double;
    queue->copy_value_to_buffer = copy_value_to_buffer_double;
    
    queue->print_node_value = print_node_value_double;

    return queue;
}

Queue_Array* init_queue_long_double()
{
    Queue_Array* queue = init_queue(sizeof(long double), sizeof(long double*));
    
    queue->copy_value_to_node = copy_value_to_node_long_double;
    queue->copy_value_to_buffer = copy_value_to_buffer_long_double;
    
    queue->print_node_value = print_node_value_long_double;

    return queue;
}