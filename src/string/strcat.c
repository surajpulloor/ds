#include "ds/buffered_string.h"
#include <stdlib.h>
#include <string.h>

String* strcat_str(String* str1, String* str2)
{
    int rem_capacity = str1->capacity - str1->length;

    if (rem_capacity < str2->length + 1) {
        
        int new_capacity = str1->length + str2->length + 1;

        str1->buffer = realloc(str1->buffer, new_capacity);

        str1->capacity = new_capacity;

    }

    str1->length += str2->length;

    strcat(str1->buffer, str2->buffer);

    return str1;
}

String* strcat_append_char_str(String* str, char* c_str)
{
    String* temp = init_string(strlen(c_str) + 1);
    copy_char_str(temp, c_str);

    strcat_str(str, temp);

    free_string(temp);

    return str;
}

char* strcat_prepend_char_str(char* c_str, unsigned int buffer_size, String* str)
{

    int c_str_len = strlen(c_str);

    if (buffer_size - c_str_len < str->length + 1) {
        int remaining_buffer = (str->length + 1) - (buffer_size - c_str_len);
        printf("error: sorry buffer isn't big enough to concat str to it. you need %d more chars\n", remaining_buffer);
        return c_str;
    }

    strcat(c_str, str->buffer);

    return c_str;

}
