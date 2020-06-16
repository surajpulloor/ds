#include "circular_single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>


CircularSingleLinkedList* init_list(size_t type_size)
{
    CircularSingleLinkedList* list = (CircularSingleLinkedList*) malloc(sizeof(CircularSingleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;
    list->type_size = type_size;

    return list;
}