#include "double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void* alloc_buffer(DoubleLinkedList* self, DoubleLinkedListNode* node)
{
    node->buffer = malloc(self->type_size);
}

void free_buffer(DoubleLinkedListNode* node)
{
    free(node->buffer);
}


void free_list(DoubleLinkedList** list)
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
    
    for (DoubleLinkedListNode* node = (*list)->front; node; ) {
        DoubleLinkedListNode* nxtNode = node->next;
        free_buffer(node);
        free(node);
        node = nxtNode;
    }

    free(*list);
    *list = NULL;
}