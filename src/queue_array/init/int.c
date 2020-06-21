#include "queue_array.h"

Queue_Array* init_queue_short()
{
    Queue_Array* queue = init_queue(sizeof(short), sizeof(short*));
    
    queue->copy_value_to_node = copy_value_to_node_short;
    queue->copy_value_to_buffer = copy_value_to_buffer_short;
    
    queue->print_node_value = print_node_value_short;


    return queue;
}

Queue_Array* init_queue_unsigned_short()
{
    Queue_Array* queue = init_queue(sizeof(unsigned short), sizeof(unsigned short*));
    
    queue->copy_value_to_node = copy_value_to_node_unsigned_short;
    queue->copy_value_to_buffer = copy_value_to_buffer_unsigned_short;
    
    queue->print_node_value = print_node_value_unsigned_short;


    return queue;
}


Queue_Array* init_queue_int()
{
    Queue_Array* queue = init_queue(sizeof(int), sizeof(int*));
    
    queue->copy_value_to_node = copy_value_to_node_int;
    queue->copy_value_to_buffer = copy_value_to_buffer_int;
    
    queue->print_node_value = print_node_value_int;


    return queue;
}

Queue_Array* init_queue_unsigned_int()
{
    Queue_Array* queue = init_queue(sizeof(unsigned int), sizeof(unsigned int*));
    
    queue->copy_value_to_node = copy_value_to_node_unsigned_int;
    queue->copy_value_to_buffer = copy_value_to_buffer_unsigned_int;
    
    queue->print_node_value = print_node_value_unsigned_int;


    return queue;
}

Queue_Array* init_queue_long()
{
    Queue_Array* queue = init_queue(sizeof(long), sizeof(long*));
    
    queue->copy_value_to_node = copy_value_to_node_long;
    queue->copy_value_to_buffer = copy_value_to_buffer_long;
    
    queue->print_node_value = print_node_value_long;


    return queue;
}

Queue_Array* init_queue_unsigned_long()
{
    Queue_Array* queue = init_queue(sizeof(unsigned long), sizeof(unsigned long*));
    
    queue->copy_value_to_node = copy_value_to_node_unsigned_long;
    queue->copy_value_to_buffer = copy_value_to_buffer_unsigned_long;
    
    queue->print_node_value = print_node_value_unsigned_long;


    return queue;
}

Queue_Array* init_queue_long_long()
{
    Queue_Array* queue = init_queue(sizeof(long long), sizeof(long long*));
    
    queue->copy_value_to_node = copy_value_to_node_long_long;
    queue->copy_value_to_buffer = copy_value_to_buffer_long_long;
    
    queue->print_node_value = print_node_value_long_long;


    return queue;
}

Queue_Array* init_queue_unsigned_long_long()
{
    Queue_Array* queue = init_queue(sizeof(unsigned long long), sizeof(unsigned long long*));
    
    queue->copy_value_to_node = copy_value_to_node_unsigned_long_long;
    queue->copy_value_to_buffer = copy_value_to_buffer_unsigned_long_long;
    
    queue->print_node_value = print_node_value_unsigned_long_long;


    return queue;
}