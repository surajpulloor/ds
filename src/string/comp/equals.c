#include "ds/buffered_string.h"
#include <string.h>

bool equals_char_str(String* str, char* c_str)
{
    return strcmp(str->buffer, c_str) == 0;
}

bool equals_str(String* str1, String* str2)
{
    return strcmp(str1->buffer, str2->buffer) == 0;
}


bool not_equals_char_str(String* str, char* c_str)
{
    return !equals_char_str(str, c_str);
}

bool not_equals_str(String* str1, String* str2)
{
    return !equals_str(str1, str2);
}
