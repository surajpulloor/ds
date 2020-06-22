#include "ds/queue_array.h"

Queue_Array* init_queue_char()
{
    Queue_Array* queue = init_queue(sizeof(char), sizeof(char*));
    
    queue->copy_value_to_node = copy_value_to_node_char;
    queue->copy_value_to_buffer = copy_value_to_buffer_char;
    
    queue->print_node_value = print_node_value_char;
    
    return queue;
}

Queue_Array* init_queue_unsigned_char()
{
    Queue_Array* queue = init_queue(sizeof(unsigned char), sizeof(unsigned char*));
    
    queue->copy_value_to_node = copy_value_to_node_unsigned_char;
    queue->copy_value_to_buffer = copy_value_to_buffer_unsigned_char;
    
    queue->print_node_value = print_node_value_unsigned_char;
    
    return queue;
}