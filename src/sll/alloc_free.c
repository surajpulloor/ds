#include "ds/sll/single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void* alloc_buffer(SingleLinkedList* self, SingleLinkedListNode* node)
{
    return (node->buffer = malloc(self->type_size));
}

void free_buffer(SingleLinkedListNode* node)
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

        if ((*list)->free_struct_members)
            (*list)->free_struct_members(node);

        free_buffer(node);
        free(node);

        node = nxtNode;
    }

    free(*list);
    *list = NULL;
}


SingleLinkedListNode* alloc_node(SingleLinkedList* list, void* value)
{
    SingleLinkedListNode* node = (SingleLinkedListNode*) malloc(sizeof(SingleLinkedListNode));
    alloc_buffer(list, node);
    
    if (list->init_struct_members)
        list->init_struct_members(node);

    list->copy_value_to_node(node, value);
    list->setup_buffer_length(node, value);

    return node; 
}

void free_node(SingleLinkedList* list, SingleLinkedListNode* node)
{
    if (list == NULL) {
        printf("error: the list doesn't exists. please create one.\n");
        return;
    }
    
    if (node == NULL) {
        printf("error: the node doesn't exists.\n");
        return;
    }

    if (list->free_struct_members)
        list->free_struct_members(node);

    free_buffer(node);
    free(node);
}
