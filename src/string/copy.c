#include "ds/buffered_string.h"
#include <string.h>
#include <stdlib.h>

String* copy_char_str(String* string, char* value)
{
    if (strlen(value) > string->capacity) {
        string->buffer = (char*) realloc(string->buffer, string->capacity * 2);
        string->capacity *= 2;
    }

    string->length = strlen(value);
    strcpy(string->buffer, value);

    return string;
}

String* copy_str(String* dest, String* src)
{
    if (dest->capacity < src->length) {
        dest->buffer = (char*) realloc(dest->buffer, dest->capacity * 2);
        dest->capacity *= 2;
    }

    dest->length = src->length;
    strcpy(dest->buffer, src->buffer);

    return dest;
}


char* copy_to_buffer(char* buffer, unsigned int buffer_size, String* string)
{
    if (buffer_size < string->length) {
        printf("error: char buffer is small. please pass in a large buffer\n\t   you need to add space for %d chars\n", string->length - buffer_size);
        return NULL;
    }

    strcpy(buffer, string->buffer);
    
}

char* copy_substring(char* dest, char* src, unsigned int begin, unsigned int end)
{
    for (int i = 0; begin < end; begin++, i++)
        dest[i] = src[begin];

    return dest;
}