#include "ds/buffered_string.h"
#include <string.h>
#include <stdlib.h>


String* substring(String* str, int begin, int end)
{
    unsigned int buffer_size = str->length + 1;

    String* new_string = init_string(buffer_size);

    substring_to_buffer(new_string->buffer, buffer_size, str, begin, end);

    new_string->length = strlen(new_string->buffer);

    return new_string;
    
}

char* substring_to_buffer(char* buffer, unsigned int buffer_size, String* str, int begin, int end)
{

    // copy empty string by default
    strcpy(buffer, "");

    int new_begin;
    int new_end;

    if (begin < 0) {

        if (begin < str->length * -1) 
            new_begin = -1;
        else 
            new_begin = begin + str->length;

    } else {
        
        if (begin > str->length) 
            new_begin = str->length;
        else 
            new_begin = begin;

    }

    
    if (end < 0) {

        if (end < str->length * -1) 
            new_end = -1;
        else 
            new_end = end + str->length;

    } else {
        
        if (end > str->length) 
            new_end = str->length;
        else 
            new_end = end;
    }


    if (new_begin == new_end) {
        printf("error: there's nothing to substring because begin and end points are the same.\n");
        return buffer;
    }


    int substring_length = abs(new_end - new_begin) + 1;

    if (buffer_size < substring_length) {
        printf("error: the buffer is small please provide a bigger buffer. need space for %d more chars.\n", substring_length - buffer_size);
        return buffer;
    }


    if (begin >= 0)
        copy_substring(buffer, str->buffer, new_begin, new_end);
    else
        copy_reverse_substring(buffer, str->buffer, new_begin, new_end);
    

    return buffer;
}

