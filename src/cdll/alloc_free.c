#include "ds/circular_double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void* alloc_buffer(CircularDoubleLinkedList* self, CircularDoubleLinkedListNode* node)
{
    node->buffer = malloc(self->type_size);
}

void free_buffer(CircularDoubleLinkedListNode* node)
{
    free(node->buffer);
}

void free_list(CircularDoubleLinkedList** list)
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

    CircularDoubleLinkedListNode* node = (*list)->front;
    
    do {
        CircularDoubleLinkedListNode* nxtNode = node->next;
        free(node);
        node = nxtNode;
    } while (node != (*list)->front);

    free(*list);
    *list = NULL;
}
