#include "ds/buffered_string.h"

char get_c(String* str, int index)
{
    int trans_ind;

    if (index < 0) {
        if (index <= str->length * -1)
            trans_ind = 0;
        else
            trans_ind = str->length + index;
    } else {
        
        if (index >= str->length)
            trans_ind = str->length - 1;
        else
            trans_ind = index;
    }

    return str->buffer[trans_ind];
}

void set_c(String* str, int index, char c)
{
    int trans_ind;

    if (index < 0) {
        if (index <= str->length * -1)
            trans_ind = 0;
        else
            trans_ind = str->length + index;
    } else {
        
        if (index >= str->length)
            trans_ind = str->length - 1;
        else
            trans_ind = index;
    }

    str->buffer[trans_ind] = c;
}
