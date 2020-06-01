#include "../../include/double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pop_before(DoubleLinkedList* list, int index)
{
    pop_before_v(list, index, NULL);
}

void pop_after(DoubleLinkedList* list, int index)
{
    pop_after_v(list, index, NULL);
}

void pop_back(DoubleLinkedList* list)
{
    pop_back_v(list, NULL);
}

void pop_front(DoubleLinkedList* list)
{
    pop_front_v(list, NULL);
}

char* pop_before_v(DoubleLinkedList* list, int index, char* buffer)
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

    DoubleLinkedListNode* node = list->front->next;

    list->size--;

    for (int i = 2; node; node = node->next, i++)
        if (i == index) 
            break;

    if (buffer) // only copy if buffer exists
        strcpy(buffer, node->prev->data);

    DoubleLinkedListNode* delete_node = node->prev;
    node->prev = delete_node->prev;
    
    if (node->prev)
        node->prev->next = node;

    free(delete_node);

    if (index == 2)
        list->front = node;

    return buffer;
}

char* pop_after_v(DoubleLinkedList* list, int index, char* buffer)
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

    DoubleLinkedListNode* node = list->front;

    for (int i = 1; node; node = node->next, i++)
        if (i == index) 
            break;

    if (buffer) // only copy if buffer isn't empty
        strcpy(buffer, node->next->data);

    DoubleLinkedListNode* delete_node = node->next;
    node->next = delete_node->next;

    if (node->next)
        node->next->prev = node;

    free(delete_node);

    if (index == --list->size)
        list->rear = node;

    return buffer;
}


char* pop_back_v(DoubleLinkedList* list, char* buffer)
{
    if (list == NULL) {
        printf("error: the list doesn't exist. please create one.\n");
        return NULL;
    }

    if (list->front == NULL) {
        printf("error: the list is empty. insert something.\n");
        return NULL;
    }

    if (buffer)
        strcpy(buffer, list->rear->data);
    
    DoubleLinkedListNode* node = list->rear->prev;

    if (node)
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

char* pop_front_v(DoubleLinkedList* list, char* buffer)
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

    DoubleLinkedListNode* node = list->front->next;
    
    if (node)
        node->prev = NULL;
    
    free(list->front);
    list->front = node;

    list->size--;

    if (list->size == 0) {
        list->front = NULL;
        list->rear = NULL;
    }

    return buffer;
}