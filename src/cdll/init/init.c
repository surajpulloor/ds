#include "ds/circular_double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>


CircularDoubleLinkedList* init_list(size_t type_size)
{
    CircularDoubleLinkedList* list = (CircularDoubleLinkedList*) malloc(sizeof(CircularDoubleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;
    list->type_size = type_size;

    return list;
}