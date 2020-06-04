#include "../../include/circular_single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

CircularSingleLinkedListNode* push_before(CircularSingleLinkedList* list, char* value, int index)
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

    CircularSingleLinkedListNode* newNode = (CircularSingleLinkedListNode*) malloc(sizeof(CircularSingleLinkedListNode));
    strcpy(newNode->data, value);

    CircularSingleLinkedListNode* node = list->front;
    CircularSingleLinkedListNode* previousNode = NULL;
    int i = 1;

    list->size++;

    do {
        if (i == index) {
        
            if (previousNode)
                previousNode->next = newNode;

            newNode->next = node;

            break;
        }

        previousNode = node;

        node = node->next;
        i++;
    } while (node != list->front);

    if (index == 1) {
        list->front = newNode;
        list->rear->next = newNode;
    }
    return newNode;

}

CircularSingleLinkedListNode* push_after(CircularSingleLinkedList* list, char* value, int index)
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

    CircularSingleLinkedListNode* newNode = (CircularSingleLinkedListNode*) malloc(sizeof(CircularSingleLinkedListNode));
    strcpy(newNode->data, value);

    CircularSingleLinkedListNode* node = list->front;
    int i = 1;

    do {
        if (i == index) {
    
            newNode->next = node->next;
            node->next = newNode;

            break;
        }

        node = node->next;
        i++;
    } while (node != list->front);

    if (index == list->size)
        list->rear = newNode;

    list->size++;

    return newNode;
}


CircularSingleLinkedListNode* push_back(CircularSingleLinkedList* list, char* data)
{
    if (list == NULL) {
        printf("error: the list doesn't exist. please create one.\n");
        return NULL;
    }

    CircularSingleLinkedListNode* node = (CircularSingleLinkedListNode*) malloc(sizeof(CircularSingleLinkedListNode));
    strcpy(node->data, data);

    list->size++;

    if (list->front == NULL) {
        list->front = list->rear = node;
        node->next = node;
    } else {
        node->next = list->front;
        list->rear->next = node;
        list->rear = node;
    }

    return node;
}

CircularSingleLinkedListNode* push_front(CircularSingleLinkedList* list, char* value)
{
    if (list == NULL) {
        printf("error: the list doesn't exists. please create one.\n");
        return NULL;
    }

    CircularSingleLinkedListNode* node = (CircularSingleLinkedListNode*) malloc(sizeof(CircularSingleLinkedListNode));
    strcpy(node->data, value);

    list->size++;

    if (list->front == NULL) {
        node->next = node;
        list->front = list->rear = node;
    } else {
        node->next = list->front;
        list->front = node;
        list->rear->next = node;
    }

    return node;
}


