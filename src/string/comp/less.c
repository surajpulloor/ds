#include "ds/buffered_string.h"
#include <string.h>

bool less_than_char_str(String* str, char* c_str)
{
    return strcmp(str->buffer, c_str) < 0;
}

bool less_than_str(String* str1, String* str2)
{
    return strcmp(str1->buffer, str2->buffer) < 0;
}


bool less_than_equal_char_str(String* str, char* c_str)
{
    return less_than_char_str(str, c_str) || equals_char_str(str, c_str);
}

bool less_than_equal_str(String* str1, String* str2)
{
    return less_than_str(str1, str2) || equals_str(str1, str2);
}
