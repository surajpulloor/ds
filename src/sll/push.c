#include "ds/sll/single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

SingleLinkedListNode* push_before(SingleLinkedList* list, void* value, int index)
{
    if (list == NULL) {
        printf("error: the list doesn't exists. please create one.\n");
        return NULL;
    }

    if (list->front == NULL) {
        printf("error: the list is empty. please populate it.\n");
        return NULL;
    }

    if (index > list->size) {
        printf("error: cannot push before %d. index cannot be greater than %d\n", index, list->size);
        return NULL;
    }

    if (index < 1) {
        printf("error: cannot push before %d. index cannot be less than 0\n", index);
        return NULL;
    }

    SingleLinkedListNode* newNode = alloc_node(list, value);

    SingleLinkedListNode* previousNode = NULL;
    int i = 1;

    list->size++;

    for (SingleLinkedListNode* node = list->front; node; node = node->next, i++) {
        if (i == index) {
        
            if (previousNode)
                previousNode->next = newNode;

            newNode->next = node;

            break;
        }

        previousNode = node;
    }

    if (index == 1)
        list->front = newNode;

    return newNode;

}

SingleLinkedListNode* push_after(SingleLinkedList* list, void* value, int index)
{
    if (list == NULL) {
        printf("error: the list doesn't exists. please create one.\n");
        return NULL;
    }

    if (list->front == NULL) {
        printf("error: the list is empty. please populate it.\n");
        return NULL;
    }

    if (index > list->size) {
        printf("error: cannot push after %d. index cannot be greater than %d\n", index, list->size);
        return NULL;
    }

    if (index < 1) {
        printf("error: cannot push after %d. index cannot be less than 0\n", index);
        return NULL;
    }

    SingleLinkedListNode* newNode = alloc_node(list, value);

    int i = 1;

    list->size++;

    for (SingleLinkedListNode* node = list->front; node; node = node->next, i++) {
        if (i == index) {
    
            newNode->next = node->next;
            node->next = newNode;

            break;
        }
    }

    if (index == list->size)
        list->rear = newNode;

    return newNode;
}


SingleLinkedListNode* push_back(SingleLinkedList* list, void* value)
{
    if (list == NULL) {
        printf("error: the list doesn't exist. please create one.\n");
        return NULL;
    }

    SingleLinkedListNode* node = alloc_node(list, value);

    node->next = NULL;

    list->size++;

    if (list->front == NULL) {
        list->front = list->rear = node;
    } else {
        list->rear->next = node;
        list->rear = node;
    }

    return node;
}

SingleLinkedListNode* push_front(SingleLinkedList* list, void* value)
{
    if (list == NULL) {
        printf("error: the list doesn't exists. please create one.\n");
        return NULL;
    }

    SingleLinkedListNode* node = alloc_node(list, value);

    list->size++;

    if (list->front == NULL) {
        node->next = NULL;
        list->front = list->rear = node;
    } else {
        node->next = list->front;
        list->front = node;
    }

    return node;
}


