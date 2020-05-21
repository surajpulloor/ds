#include "../../include/single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

SingleLinkedList* init_list()
{
    SingleLinkedList* list = (SingleLinkedList*) malloc(sizeof(SingleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;

    return list;
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

void print_list(SingleLinkedList* list)
{
    if (list) {
        if (list->front) {
            for (SingleLinkedListNode* node = list->front; node; node = node->next)
                printf("%s|%p => ", node->data, node->next);

            printf("\n");
        } else
            printf("error: list is empty. please insert something into the list.\n");
    } else
        printf("error: list doesn't exist. nothing to display.\n");
}
