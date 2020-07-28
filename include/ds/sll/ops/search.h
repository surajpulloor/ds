#ifndef _SEARCH_H
#define _SEARCH_H

#include "../types.h"

bool search_nodes(
    SingleLinkedList*, 
    
    unsigned int, 
    unsigned int, 
    
    SingleLinkedListNode[], 
    unsigned int
);

bool search_node(SingleLinkedList*, SingleLinkedListNode*);
bool search_node_index(SingleLinkedList*, SingleLinkedListNode*);


#endif