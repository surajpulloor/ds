#include "ds/string.h"
#include <stdlib.h>

String* init_str()
{
    return init_string(MAX_CHARS_BUFFER);
}

String* init_string(size_t buffer_size)
{
    String* string = (String*) malloc(sizeof(String));

    string->buffer = (char*) malloc(sizeof(char) * buffer_size);
    string->length = 0;
    string->capacity = buffer_size;

    return string;
}


void free_string(String* string)
{
    if (string == NULL) {
        printf("error: string doesn't exist. please create one.\n");
        return NULL;
    }

    // free the char buffer
    free(string->buffer);
    
    // then free the string struct
    free(string);
}
