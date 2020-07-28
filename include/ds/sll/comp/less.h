#ifndef _LESS_H
#define _LESS_H

#include "../types.h"

bool less_than_indices(SingleLinkedList*, unsigned int, unsigned int);
bool less_than_nodes(SingleLinkedList*, SingleLinkedListNode*, SingleLinkedListNode*);

bool less_than_equal_indices(SingleLinkedList*, unsigned int, unsigned int);
bool less_than_equal_nodes(SingleLinkedList*, SingleLinkedListNode*, SingleLinkedListNode*);

bool less_than_number(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_char_pt(SingleLinkedListNode*, SingleLinkedListNode*);

bool less_than_equal_number(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_equal_char_ptr(SingleLinkedListNode*, SingleLinkedListNode*);

#endif