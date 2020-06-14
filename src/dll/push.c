#include "double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

DoubleLinkedListNode* push_before(DoubleLinkedList* list, char* value, int index)
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

    DoubleLinkedListNode* newNode = (DoubleLinkedListNode*) malloc(sizeof(DoubleLinkedListNode));
    strcpy(newNode->buffer, value);

    int i = 1;

    list->size++;

    for (DoubleLinkedListNode* node = list->front; node; node = node->next, i++) {
        if (i == index) {
            newNode->prev = node->prev;
            newNode->next = node;

            if (newNode->prev)
                newNode->prev->next = newNode;

            node->prev = newNode;
            break;
        }

    }

    if (index == 1)
        list->front = newNode;

    return newNode;

}

DoubleLinkedListNode* push_after(DoubleLinkedList* list, char* value, int index)
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

    DoubleLinkedListNode* newNode = (DoubleLinkedListNode*) malloc(sizeof(DoubleLinkedListNode));
    strcpy(newNode->buffer, value);

    int i = 1;

    for (DoubleLinkedListNode* node = list->front; node; node = node->next, i++) {
        if (i == index) {
    
            newNode->next = node->next;

            if (newNode->next)
                newNode->next->prev = newNode;

            newNode->prev = node;
            node->next = newNode;

            break;
        }
    }

    if (index == list->size)
        list->rear = newNode;

    list->size++;

    return newNode;
}


DoubleLinkedListNode* push_back(DoubleLinkedList* list, char* data)
{
    if (list == NULL) {
        printf("error: the list doesn't exist. please create one.\n");
        return NULL;
    }

    DoubleLinkedListNode* node = (DoubleLinkedListNode*) malloc(sizeof(DoubleLinkedListNode));
    strcpy(node->buffer, data);
    node->next = NULL;
    node->prev = NULL;

    list->size++;

    if (list->front == NULL) {
        list->front = list->rear = node;
    } else {
        list->rear->next = node;
        node->prev = list->rear;
        list->rear = node;
    }

    return node;
}

DoubleLinkedListNode* push_front(DoubleLinkedList* list, char* value)
{
    if (list == NULL) {
        printf("error: the list doesn't exists. please create one.\n");
        return NULL;
    }

    DoubleLinkedListNode* node = (DoubleLinkedListNode*) malloc(sizeof(DoubleLinkedListNode));
    strcpy(node->buffer, value);
    node->next = node->prev = NULL;

    list->size++;

    if (list->front == NULL) {
        list->front = list->rear = node;
    } else {
        node->prev = NULL;
        node->next = list->front;
        list->front->prev = node;
        list->front = node;
    }

    return node;
}


