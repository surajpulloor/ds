#include "ds/sll/single_linked_list.h"

bool search_nodes(
    SingleLinkedList* list, 
    
    unsigned int index1, 
    unsigned int index2, 
    
    SingleLinkedListNode** nodes, 
    unsigned int noOfNodes
)
{
    if (list == NULL) {
        printf("error: the list doesn't exists. create one.\n");
        return false;
    }

    if (list->front == NULL) {
        printf("error: the list is empty. please insert something.\n");
        return false;
    }

    if (index1 < 1 || index1 > list->size) {
        printf("error: index1 is not within the list. please give an index that's within the list.\n");
        return false;
    }

    if (index2 < 1 || index2 > list->size) {
        printf("error: index2 is not within the list. please give an index that's within the list.\n");
        return false;
    }

    if (noOfNodes < 2) {
        printf("argument error: the no. of nodes given is less than 2. please give two nodes.\n");
        return false;
    }

    bool sameNodes = index1 == index2;

    SingleLinkedListNode* node1 = NULL;
    SingleLinkedListNode* node2 = NULL;

    int i = 1;

    for (SingleLinkedListNode* node = list->front; node; node = node->next, i++) {
        if (node1 == NULL && index1 == i) {
            node1 = node;

            if (sameNodes) {
                node2 = node;
                break;
            }
        }

        if (node2 == NULL && index2 == i) {
            node2 = node;

            if (sameNodes) {
                node1 = node;
                break;
            }
        }

        if (node1 && node2) {
            nodes[0] = node1;
            nodes[1] = node2;

            return true;
        }

    }


    return false;
}

bool node_exists(SingleLinkedList* list, SingleLinkedListNode* searchNode)
{
    if (list == NULL) {
        printf("error: the list doesn't exists. please make one.\n");
        return false;
    }

    if (list->front == NULL) {
        printf("error: the list is empty. please populate it.\n");
        return false;
    }

    if (searchNode == NULL) {
        printf("error: please give the search node.\n");
        return false;
    }
    
    for (SingleLinkedListNode* node = list->front; node; node = node->next)
        if (equal_nodes(list, node, searchNode))
            return true;

    return false;
}