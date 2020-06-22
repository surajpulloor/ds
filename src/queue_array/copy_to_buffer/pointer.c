#include "ds/queue_array.h"
#include <string.h>

void copy_value_to_buffer_char_ptr(void* buffer, Queue_Array* queue)
{
    char* temp = (char*) buffer;

    strcpy(temp, (char*) queue->buffer[queue->front]);
}
