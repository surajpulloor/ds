#ifndef _GREATER_H
#define _GREATER_H

#include "../types.h"

bool greater_than_indices(SingleLinkedList*, unsigned int, unsigned int);
bool greater_than_nodes(SingleLinkedList*, SingleLinkedListNode*, SingleLinkedListNode*);

bool greater_than_equal_indices(SingleLinkedList*, unsigned int, unsigned int);
bool greater_than_equal_nodes(SingleLinkedList*, SingleLinkedListNode*, SingleLinkedListNode*);

bool greater_than_number(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_char_pt(SingleLinkedListNode*, SingleLinkedListNode*);

bool greater_than_equal_number(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_equal_char_ptr(SingleLinkedListNode*, SingleLinkedListNode*);

#endif