#include "../../include/single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void freeBuffer(SingleLinkedListNode* node)
{
    free(node->buffer);
}


void free_list(SingleLinkedList** list)
{
    if (*list == NULL) {
        printf("error: list doesn't exist. please create one.\n");
        return;
    }

    if ((*list)->front == NULL) {
        printf("error: the list is empty. insert something.\n");
        free(*list);
        *list = NULL;
        return;
    }
    
    for (SingleLinkedListNode* node = (*list)->front; node; ) {
        SingleLinkedListNode* nxtNode = node->next;
        free(node);
        node = nxtNode;
    }

    free(*list);
    *list = NULL;
}