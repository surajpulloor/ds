#ifndef _GREATER_H
#define _GREATER_H

#include "../types.h"

bool greater_than_indices(SingleLinkedList*, unsigned int, unsigned int);
bool greater_than_nodes(SingleLinkedList*, SingleLinkedListNode*, SingleLinkedListNode*);

bool greater_than_equal_indices(SingleLinkedList*, unsigned int, unsigned int);
bool greater_than_equal_nodes(SingleLinkedList*, SingleLinkedListNode*, SingleLinkedListNode*);


// greater_than
bool greater_than_short(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_unsigned_short(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_int(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_unsigned_int(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_unsigned_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_long_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_unsigned_long_long(SingleLinkedListNode*, SingleLinkedListNode*);


bool greater_than_float(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_double(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_long_double(SingleLinkedListNode*, SingleLinkedListNode*);


bool greater_than_char(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_unsigned_char(SingleLinkedListNode*, SingleLinkedListNode*);

bool greater_than_char_ptr(SingleLinkedListNode*, SingleLinkedListNode*);


// greater_than_equal
bool greater_than_equal_short(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_equal_unsigned_short(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_equal_int(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_equal_unsigned_int(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_equal_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_equal_unsigned_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_equal_long_long(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_equal_unsigned_long_long(SingleLinkedListNode*, SingleLinkedListNode*);


bool greater_than_equal_float(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_equal_double(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_equal_long_double(SingleLinkedListNode*, SingleLinkedListNode*);


bool greater_than_equal_char(SingleLinkedListNode*, SingleLinkedListNode*);
bool greater_than_equal_unsigned_char(SingleLinkedListNode*, SingleLinkedListNode*);

bool greater_than_equal_char_ptr(SingleLinkedListNode*, SingleLinkedListNode*);



#endif