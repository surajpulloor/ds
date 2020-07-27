#ifndef _COPY_NODE_H
#define _COPY_NODE_H

#include "../types.h"

// copy_to_node (int)
void copy_value_to_node_short(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_short(SingleLinkedListNode*, void*);
void copy_value_to_node_int(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_int(SingleLinkedListNode*, void*);
void copy_value_to_node_long(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long(SingleLinkedListNode*, void*);
void copy_value_to_node_long_long(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_long_long(SingleLinkedListNode*, void*);

// copy_to_node (float)
void copy_value_to_node_float(SingleLinkedListNode*, void*);
void copy_value_to_node_double(SingleLinkedListNode*, void*);
void copy_value_to_node_long_double(SingleLinkedListNode*, void*);

// copy_to_node (char)
void copy_value_to_node_char(SingleLinkedListNode*, void*);
void copy_value_to_node_unsigned_char(SingleLinkedListNode*, void*);

// copy_to_node (pointer)
void copy_value_to_node_char_ptr(SingleLinkedListNode*, void*);

#endif