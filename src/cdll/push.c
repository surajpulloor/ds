#include "../../include/circular_double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

CircularDoubleLinkedListNode* push_before(CircularDoubleLinkedList* list, char* value, int index)
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

    CircularDoubleLinkedListNode* newNode = (CircularDoubleLinkedListNode*) malloc(sizeof(CircularDoubleLinkedListNode));
    strcpy(newNode->data, value);

    int i = 1;
    CircularDoubleLinkedListNode* node = list->front;

    list->size++;

    do {
        if (i == index) {
            newNode->prev = node->prev;
            node->prev->next = newNode;
            newNode->next = node;
            node->prev = newNode;
            break;
        }

        node = node->next;
        i++;
    } while (node != list->front);

    if (index == 1) { 
        list->front = newNode;
    }

    return newNode;

}

CircularDoubleLinkedListNode* push_after(CircularDoubleLinkedList* list, char* value, int index)
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

    CircularDoubleLinkedListNode* newNode = (CircularDoubleLinkedListNode*) malloc(sizeof(CircularDoubleLinkedListNode));
    strcpy(newNode->data, value);

    int i = 1;
    CircularDoubleLinkedListNode* node = list->front;

    do {
        if (i == index) {
    
            newNode->next = node->next;
            newNode->prev = node;
            node->next = newNode;

            break;
        }

        node = node->next;
        i++;

    } while (node != list->front);

    if (index == list->size) {
        list->rear = newNode;
        list->front->prev = newNode;
    }


    list->size++;

    return newNode;
}


CircularDoubleLinkedListNode* push_back(CircularDoubleLinkedList* list, char* data)
{
    if (list == NULL) {
        printf("error: the list doesn't exist. please create one.\n");
        return NULL;
    }

    CircularDoubleLinkedListNode* node = (CircularDoubleLinkedListNode*) malloc(sizeof(CircularDoubleLinkedListNode));
    strcpy(node->data, data);

    list->size++;

    if (list->front == NULL) {
        list->front = list->rear = node;
        node->prev = node;
        node->next = node;
    } else {
        list->rear->next = node;
        list->front->prev = node;
        node->prev = list->rear;
        node->next = list->front;
        list->rear = node;
    }

    return node;
}

CircularDoubleLinkedListNode* push_front(CircularDoubleLinkedList* list, char* value)
{
    if (list == NULL) {
        printf("error: the list doesn't exists. please create one.\n");
        return NULL;
    }

    CircularDoubleLinkedListNode* node = (CircularDoubleLinkedListNode*) malloc(sizeof(CircularDoubleLinkedListNode));
    strcpy(node->data, value);

    list->size++;

    if (list->front == NULL) {
        node->next = node->prev = node;
        list->front = list->rear = node;
    } else {
        node->prev = list->rear;
        node->next = list->front;
        list->front->prev = node;
        list->front = node;
        list->rear->next = node;
    }

    return node;
}


