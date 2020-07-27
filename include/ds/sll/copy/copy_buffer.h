#ifndef _COPY_BUFFER_H
#define _COPY_BUFFER_H

#include "../types.h"

// copy_to_buffer (int)
void copy_value_to_buffer_short(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_short(void*, SingleLinkedListNode*);
void copy_value_to_buffer_int(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_int(void*, SingleLinkedListNode*);
void copy_value_to_buffer_long(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_long(void*, SingleLinkedListNode*);
void copy_value_to_buffer_long_long(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_long_long(void*, SingleLinkedListNode*);

// copy_to_buffer (float)
void copy_value_to_buffer_float(void*, SingleLinkedListNode*);
void copy_value_to_buffer_double(void*, SingleLinkedListNode*);
void copy_value_to_buffer_long_double(void*, SingleLinkedListNode*);

// copy_to_buffer (char)
void copy_value_to_buffer_char(void*, SingleLinkedListNode*);
void copy_value_to_buffer_unsigned_char(void*, SingleLinkedListNode*);

// copy_to_buffer (pointer)
void copy_value_to_buffer_char_ptr(void*, SingleLinkedListNode*);

#endif