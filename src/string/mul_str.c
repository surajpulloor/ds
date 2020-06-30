#include "ds/buffered_string.h"
#include <string.h>

String* mul_str(String* str, unsigned int no)
{
    String* mul_string = init_string(str->length * no + 1);

    copy_char_str(mul_string, "");

    for (int i = 0; i < no; i++)
        strcat(mul_string->buffer, str->buffer);

    return mul_string;
}

char* mul_str_to_buffer(char* buffer, unsigned int buffer_size, String* str, unsigned int no)
{
    if (buffer_size < str->length * no + 1) {
        int needed_buffer = (str->length * no + 1) - buffer_size;
        printf("error: the buffer isn't big enough, please create a bigger buffer. need %d more chars.\n", needed_buffer);
        return buffer;
    }

    strcpy(buffer, "");

    for (int i = 0; i < no; i++)
        strcat(buffer, str->buffer);

    return buffer;
}
