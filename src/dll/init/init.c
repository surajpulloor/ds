#include "double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>


DoubleLinkedList* init_list(size_t type_size)
{
    DoubleLinkedList* list = (DoubleLinkedList*) malloc(sizeof(DoubleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;
    list->type_size = type_size;

    return list;
}