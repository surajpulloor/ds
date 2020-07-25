#include "ds/single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>


SingleLinkedList* init_list(size_t type_size, void (*init_struct_members)(SingleLinkedListNode*), void (*free_struct_members)(SingleLinkedListNode*))
{
    SingleLinkedList* list = (SingleLinkedList*) malloc(sizeof(SingleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;
    list->type_size = type_size;

    list->init_struct_members = init_struct_members;
    list->free_struct_members = free_struct_members;

    return list;
}