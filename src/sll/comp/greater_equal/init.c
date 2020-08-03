#include "ds/sll/single_linked_list.h"


bool greater_than_equal_indices(SingleLinkedList* list, unsigned int index1, unsigned int index2)
{
    SingleLinkedListNode* nodes[2];
    if (!search_nodes(list, index1, index2, nodes, 2))
        return false;

    return greater_than_equal_nodes(list, nodes[0], nodes[1]);
}

bool greater_than_equal_nodes(SingleLinkedList* list, SingleLinkedListNode* node1, SingleLinkedListNode* node2)
{
    return list->greater_than_equal_nodes(node1, node2);
}