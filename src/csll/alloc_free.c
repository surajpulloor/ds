#include "ds/circular_single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void* alloc_buffer(CircularSingleLinkedList* self, CircularSingleLinkedListNode* node)
{
    node->buffer = malloc(self->type_size);
}

void free_buffer(CircularSingleLinkedListNode* node)
{
    free(node->buffer);
}


void free_list(CircularSingleLinkedList** list)
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

    CircularSingleLinkedListNode* node = (*list)->front;
    
    do {
        CircularSingleLinkedListNode* nxtNode = node->next;
        free_buffer(node);
        free(node);
        node = nxtNode;
    } while (node != (*list)->front);

    free(*list);
    *list = NULL;
}