#ifndef _EQUAL_H
#define _EQUAL_H

#include "../types.h"

bool equal_indices(SingleLinkedList*, unsigned int, unsigned int);
bool equal_nodes(SingleLinkedList*, SingleLinkedListNode*, SingleLinkedListNode*);

bool equal_short(SingleLinkedListNode*, SingleLinkedListNode*);
bool equal_unsigned_short(SingleLinkedListNode*, SingleLinkedListNode*);
bool equal_int(SingleLinkedListNode*, SingleLinkedListNode*);
bool equal_unsigned_int(SingleLinkedListNode*, SingleLinkedListNode*);
bool equal_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool equal_unsigned_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool equal_long_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool equal_unsigned_long_long(SingleLinkedListNode*, SingleLinkedListNode*);


bool equal_float(SingleLinkedListNode*, SingleLinkedListNode*);
bool equal_double(SingleLinkedListNode*, SingleLinkedListNode*);
bool equal_long_double(SingleLinkedListNode*, SingleLinkedListNode*);

bool equal_char(SingleLinkedListNode*, SingleLinkedListNode*);
bool equal_unsigned_char(SingleLinkedListNode*, SingleLinkedListNode*);

bool equal_char_ptr(SingleLinkedListNode*, SingleLinkedListNode*);

#endif