#ifndef _SEARCH_H
#define _SEARCH_H

#include "../types.h"

bool search_nodes(
    SingleLinkedList*, 
    
    unsigned int, 
    unsigned int, 
    
    SingleLinkedListNode**, 
    unsigned int
);

bool search_node_by_value(SingleLinkedList*, void*);
bool search_node(SingleLinkedList* list, SingleLinkedListNode* searchNode);

#endif