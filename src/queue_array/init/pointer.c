#include "queue_array.h"

Queue_Array* init_queue_char_ptr()
{
    Queue_Array* queue = init_queue(sizeof(char) * MAX_CHARS_BUFFER, sizeof(char*));
    
    queue->copy_value_to_node = copy_value_to_node_char_ptr;
    queue->copy_value_to_buffer = copy_value_to_buffer_char_ptr;
    
    queue->print_node_value = print_node_value_char_ptr;
    
    return queue;
}
