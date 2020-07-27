#ifndef _ALLOC_H
#define _ALLOC_H

#include "../types.h"

void* alloc_buffer(SingleLinkedList*, SingleLinkedListNode*);
void free_buffer(SingleLinkedListNode*);

#endif