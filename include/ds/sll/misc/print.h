#ifndef _PRINT_H
#define _PRINT_H

#include "../types.h"

// print_node_value (int)
int print_node_value_short(SingleLinkedListNode*);
int print_node_value_unsigned_short(SingleLinkedListNode*);
int print_node_value_int(SingleLinkedListNode*);
int print_node_value_unsigned_int(SingleLinkedListNode*);
int print_node_value_long(SingleLinkedListNode*);
int print_node_value_unsigned_long(SingleLinkedListNode*);
int print_node_value_long_long(SingleLinkedListNode*);
int print_node_value_unsigned_long_long(SingleLinkedListNode*);

// print_node_value (float)
int print_node_value_float(SingleLinkedListNode*);
int print_node_value_double(SingleLinkedListNode*);
int print_node_value_long_double(SingleLinkedListNode*);

// print_node_value (char)
int print_node_value_char(SingleLinkedListNode*);
int print_node_value_unsigned_char(SingleLinkedListNode*);

// print_node_value (pointer)
int print_node_value_char_ptr(SingleLinkedListNode*);


void print_list(SingleLinkedList*);
void print_node(SingleLinkedList*, SingleLinkedListNode*, bool);

#endif