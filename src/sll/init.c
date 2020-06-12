#include "../../include/single_linked_list.h"
#include <stdio.h>

SingleLinkedList* init_list()
{
    SingleLinkedList* list = (SingleLinkedList*) malloc(sizeof(SingleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;

    return list;
}

SingleLinkedList* init_list_int()
{
    SingleLinkedList* list = init_list();
    
    list->allocBuffer = allocBuffer_int;
    list->copyValueToNode = copyValueToNode_int;
    list->copyValueToBuffer = copyValueToBuffer_int;
    list->freeBuffer = freeBuffer;

    return list;
}

SingleLinkedList* init_list_float()
{
    SingleLinkedList* list = init_list();
    
    list->allocBuffer = allocBuffer_float;
    list->copyValueToNode = copyValueToNode_float;
    list->copyValueToBuffer = copyValueToBuffer_float;
    list->freeBuffer = freeBuffer;

    return list;
}

SingleLinkedList* init_list_double()
{
    SingleLinkedList* list = init_list();
    
    list->allocBuffer = allocBuffer_double;
    list->copyValueToNode = copyValueToNode_double;
    list->copyValueToBuffer = copyValueToBuffer_double;
    list->freeBuffer = freeBuffer;

    return list;
}

SingleLinkedList* init_list_char()
{
    SingleLinkedList* list = init_list();
    
    list->allocBuffer = allocBuffer_char;
    list->copyValueToNode = copyValueToNode_char;
    list->copyValueToBuffer = copyValueToBuffer_char;
    list->freeBuffer = freeBuffer;

    return list;
}

SingleLinkedList* init_list_char_ptr()
{
    SingleLinkedList* list = init_list();
    
    list->allocBuffer = allocBuffer_char_ptr;
    list->copyValueToNode = copyValueToNode_char_ptr;
    list->copyValueToBuffer = copyValueToBuffer_char_ptr;
    list->freeBuffer = freeBuffer;

    return list;
}
