#include "ds/single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>


SingleLinkedList* init_list(size_t type_size)
{
    SingleLinkedList* list = (SingleLinkedList*) malloc(sizeof(SingleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;
    list->type_size = type_size;

    return list;
}