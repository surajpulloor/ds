#include "../../include/single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pop_before(SingleLinkedList* list, int index)
{
    pop_before_v(list, index, NULL);
}

void pop_after(SingleLinkedList* list, int index)
{
    pop_after_v(list, index, NULL);
}


void pop_back(SingleLinkedList* list)
{
    pop_back_v(list, NULL);
}

void pop_front(SingleLinkedList* list)
{
    pop_front_v(list, NULL);
}

char* pop_before_v(SingleLinkedList* list, int index, char* buffer)
{
    if (list == NULL) {
        printf("error: list doesn't exists. please create one\n");
        return NULL;
    }

    if (list->size == 0) {
        printf("error: list is empty\n");
        return NULL;
    }

    if (index > list->size) {
        printf("error: cannot pop before %d. index cannot be greater than %d\n", index, list->size);
        return NULL;
    }

    if (index <= 1) {
        printf("error: cannot pop before %d. index cannot be less than 2\n", index);
        return NULL;
    }

    SingleLinkedListNode* node = list->front->next;
    SingleLinkedListNode* previousNode = list->front;
    SingleLinkedListNode* leftNode = NULL;

    list->size--;

    for (int i = 2; node; node = node->next, i++) {
        if (i == index) {
        
            if (leftNode)
                leftNode->next = node;

            break;
        }

        leftNode = previousNode;
        previousNode = node;
    }

    if (buffer) // only copy if buffer exists
        strcpy(buffer, previousNode->data);

    free(previousNode);

    if (index == 2)
        list->front = node;

    return buffer;
}

char* pop_after_v(SingleLinkedList* list, int index, char* buffer)
{
    if (list == NULL) {
        printf("error: list doesn't exists\n");
        return NULL;
    }

    if (list->size == 0) {
        printf("error: list is empty\n");
        return NULL;
    }

    if (index >= list->size) {
        printf("error: cannot pop after %d. index cannot be greater than equal %d\n", index, list->size);
        return NULL;
    }

    if (index < 1) {
        printf("error: cannot pop before %d. index cannot be less than 1\n", index);
        return NULL;
    }

    SingleLinkedListNode* node = list->front;
    SingleLinkedListNode* nextNode = NULL;

    list->size--;

    for (int i = 1; node; node = node->next, i++) {
        if (i == index) {
        
            nextNode = node->next;
            node->next = node->next->next;

            break;
        }
    }

    if (buffer) // only copy if buffer isn't empty
        strcpy(buffer, nextNode->data);

    free(nextNode);

    return buffer;
}


char* pop_back_v(SingleLinkedList* list, char* buffer)
{
    if (list == NULL) {
        printf("error: the list doesn't exist. please create one.\n");
        return NULL;
    }

    if (list->front == NULL) {
        printf("error: the list is empty. insert something.\n");
        return NULL;
    }

    SingleLinkedListNode* node = list->front;
    for (int i = 1; i < list->size - 1; i++, node = node->next)
        ;

    if (buffer)
        strcpy(buffer, list->rear->data);
    
    node->next = NULL;
    free(list->rear);
    list->rear = node;
    list->size--;

    if (list->size == 0) {
        list->front = NULL;
        list->rear = NULL;
    }

    return buffer;
}

char* pop_front_v(SingleLinkedList* list, char* buffer)
{
    if (list == NULL) {
        printf("error: list doesn't exists. please create one\n");
        return NULL;
    }

    if (list->front == NULL) {
        printf("error: list is empty. please insert something.\n");
        return NULL;
    }

    // copy data to buffer
    if (buffer)
        strcpy(buffer, list->front->data);

    SingleLinkedListNode* nextNode = list->front->next;
    free(list->front);
    list->front = nextNode;

    list->size--;

    if (list->size == 0) {
        list->front = NULL;
        list->rear = NULL;
    }

    return buffer;
}