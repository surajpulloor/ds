#include "ds/buffered_string.h"
#include <string.h>
#include <stdlib.h>

String* copy_char_str(String* string, char* value)
{
    int str_len = strlen(value);

    if (str_len >= string->capacity) {

        int capacity = 1;

        if (str_len > string->capacity * 2)
            capacity += string->capacity * 2 + (str_len - string->capacity * 2);
        else
            capacity += string->capacity * 2;


        string->buffer = (char*) realloc(string->buffer, capacity);
        string->capacity = capacity;
    }

    string->length = str_len;
    strcpy(string->buffer, value);

    return string;
}

String* copy_str(String* dest, String* src)
{
    if (dest->capacity <= src->length) {
        
        int capacity = 1;

        if (src->length > dest->capacity * 2)
            capacity += dest->capacity * 2 + (src->length - dest->capacity * 2);
        else
            capacity += dest->capacity * 2;


        dest->buffer = (char*) realloc(dest->buffer, capacity);
        dest->capacity = capacity;
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

    return strcpy(buffer, string->buffer);
}

char* copy_substring(char* dest, char* src, int begin, int end)
{
    int i;
    for (i = 0; begin < end; begin++, i++)
        dest[i] = src[begin];

    dest[i] = '\0';
    
    return dest;
}


char* copy_reverse_substring(char* dest, char* src, int begin, int end)
{
    int i = 0;
    
    for (i = 0; begin > end; begin--, i++)
        dest[i] = src[begin];

    dest[i] = '\0';
    
    return dest;
}