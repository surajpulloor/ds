#ifndef _BUFFER_LENGTH_H
#define _BUFFER_LENGTH_H

#include "../types.h"

// setup_buffer_length(int)
void setup_buffer_length_short(SingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_short(SingleLinkedListNode*, void*);
void setup_buffer_length_int(SingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_int(SingleLinkedListNode*, void*);
void setup_buffer_length_long(SingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_long(SingleLinkedListNode*, void*);
void setup_buffer_length_long_long(SingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_long_long(SingleLinkedListNode*, void*);

void setup_buffer_length_float(SingleLinkedListNode*, void*);
void setup_buffer_length_double(SingleLinkedListNode*, void*);
void setup_buffer_length_long_double(SingleLinkedListNode*, void*);

void setup_buffer_length_char(SingleLinkedListNode*, void*);
void setup_buffer_length_unsigned_char(SingleLinkedListNode*, void*);

void setup_buffer_length_char_ptr(SingleLinkedListNode*, void*);

#endif