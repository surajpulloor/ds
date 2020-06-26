#include "ds/buffered_string.h"
#include <string.h>

String* substring(String* str, int begin, int end)
{
    if (begin < 0 || begin > str->length) {
        printf("error: the begin bound is off limits.\n please provide a value within string bounds.\n");
        return NULL;
    }

    if (end < 0 || end > str->length) {
        printf("error: the end bound is off limits.\n please provide a value within string bounds.\n");
        return NULL;
    }

    if (begin >= end) {
        printf("error: the begin bound cannot be greater than end bound.\n");
        return NULL;
    }

    String* new_str = init_string(end - begin);

    copy_substring(new_str->buffer, str->buffer, begin, end);

    return new_str;
}

char* substring_to_buffer(char* buffer, unsigned int buffer_size, String* str, int begin, int end)
{
    if (begin < 0 || begin > str->length) {
        printf("error: the begin bound is off limits.\n please provide a value within string bounds.\n");
        return NULL;
    }

    if (end < 0 || end > str->length) {
        printf("error: the end bound is off limits.\n please provide a value within string bounds.\n");
        return NULL;
    }

    if (begin >= end) {
        printf("error: the begin bound cannot be greater than end bound.\n");
        return NULL;
    }

    if (buffer_size < end - begin) {
        printf("error: the buffer cannot hold the substring.\n");
        return NULL;
    }

    return copy_substring(buffer, str->buffer, begin, end);
}

