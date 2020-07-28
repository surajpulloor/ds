#ifndef _EQUAL_H
#define _EQUAL_H

#include "../types.h"

bool equal_indices(SingleLinkedList*, unsigned int, unsigned int);
bool equal_nodes(SingleLinkedList*, SingleLinkedListNode*, SingleLinkedListNode*);

bool equal_number(SingleLinkedListNode*, SingleLinkedListNode*);
bool equal_char_ptr(SingleLinkedListNode*, SingleLinkedListNode*);

#endif