#ifndef _ALLOC_H
#define _ALLOC_H

#include "../types.h"

void* alloc_buffer(SingleLinkedList*, SingleLinkedListNode*);
void free_buffer(SingleLinkedListNode*);

SingleLinkedListNode* alloc_node(SingleLinkedList*, void*);
void free_node(SingleLinkedList*, SingleLinkedListNode*);

#endif