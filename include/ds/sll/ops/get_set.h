#ifndef _GET_SET_H
#define _GET_SET_H

#include "../types.h"

SingleLinkedListNode* get_node_by_value(SingleLinkedList*, void*);
SingleLinkedListNode* get_node(SingleLinkedList*, unsigned int);
void* get_value(SingleLinkedList*, unsigned int, void*);
void set(SingleLinkedList*, int, void*);

#endif