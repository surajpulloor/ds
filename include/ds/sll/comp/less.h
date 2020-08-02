#ifndef _LESS_H
#define _LESS_H

#include "../types.h"

bool less_than_indices(SingleLinkedList*, unsigned int, unsigned int);
bool less_than_nodes(SingleLinkedList*, SingleLinkedListNode*, SingleLinkedListNode*);

bool less_than_equal_indices(SingleLinkedList*, unsigned int, unsigned int);
bool less_than_equal_nodes(SingleLinkedList*, SingleLinkedListNode*, SingleLinkedListNode*);

// less_than
bool less_than_short(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_unsigned_short(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_int(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_unsigned_int(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_unsigned_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_long_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_unsigned_long_long(SingleLinkedListNode*, SingleLinkedListNode*);


bool less_than_float(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_double(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_long_double(SingleLinkedListNode*, SingleLinkedListNode*);


bool less_than_char(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_unsigned_char(SingleLinkedListNode*, SingleLinkedListNode*);

bool less_than_char_ptr(SingleLinkedListNode*, SingleLinkedListNode*);


// less_than_equal
bool less_than_equal_short(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_equal_unsigned_short(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_equal_int(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_equal_unsigned_int(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_equal_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_equal_unsigned_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_equal_long_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_equal_unsigned_long_long(SingleLinkedListNode*, SingleLinkedListNode*);


bool less_than_equal_float(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_equal_double(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_equal_long_double(SingleLinkedListNode*, SingleLinkedListNode*);


bool less_than_equal_char(SingleLinkedListNode*, SingleLinkedListNode*);
bool less_than_equal_unsigned_char(SingleLinkedListNode*, SingleLinkedListNode*);

bool less_than_equal_char_ptr(SingleLinkedListNode*, SingleLinkedListNode*);


#endif