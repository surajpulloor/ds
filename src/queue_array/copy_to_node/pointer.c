#include "ds/queue_array.h"
#include <string.h>

void copy_value_to_node_char_ptr(Queue_Array* queue, void* value)
{
    char* temp = (char*) queue->buffer[queue->rear];

    strcpy(temp, (char*) value);
}
