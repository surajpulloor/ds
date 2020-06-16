#include "circular_double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pop_before(CircularDoubleLinkedList* list, int index)
{
    pop_before_v(list, index, NULL);
}

void pop_after(CircularDoubleLinkedList* list, int index)
{
    pop_after_v(list, index, NULL);
}

void pop_back(CircularDoubleLinkedList* list)
{
    pop_back_v(list, NULL);
}

void pop_front(CircularDoubleLinkedList* list)
{
    pop_front_v(list, NULL);
}

void* pop_before_v(CircularDoubleLinkedList* list, int index, void* buffer)
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

    CircularDoubleLinkedListNode* node = list->front->next;

    list->size--;

    for (int i = 2; node != list->rear->next; node = node->next, i++)
        if (i == index) 
            break;

    if (buffer) // only copy if buffer exists
        list->copy_value_to_buffer(buffer, node->prev);

    free_buffer(node->prev);

    CircularDoubleLinkedListNode* delete_node = node->prev;
    node->prev = delete_node->prev;

    free(delete_node);

    if (index == 2) {
        list->front = node;
        list->rear->next = node;
    }

    return buffer;
}

void* pop_after_v(CircularDoubleLinkedList* list, int index, void* buffer)
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
        printf("error: cannot pop after %d. index cannot be less than 1\n", index);
        return NULL;
    }

    CircularDoubleLinkedListNode* node = list->front;

    list->size--;

    for (int i = 1; node != list->rear; node = node->next, i++)
        if (i == index) 
            break;

    if (buffer) // only copy if buffer isn't empty
        list->copy_value_to_buffer(buffer, node->next);

    free_buffer(node->next);

    CircularDoubleLinkedListNode* delete_node = node->next;
    node->next = delete_node->next;
    delete_node->next->prev = node;

    free(delete_node);

    if (index == list->size) {
        list->rear = node;
        list->front->prev = node;
    }

    return buffer;
}


void* pop_back_v(CircularDoubleLinkedList* list, void* buffer)
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
        list->copy_value_to_buffer(buffer, list->rear);

    free_buffer(list->rear);
    
    CircularDoubleLinkedListNode* node = list->rear->prev;
    node->next = list->front;
    list->front->prev = node;

    free(list->rear);
    
    list->rear = node;
    list->size--;

    if (list->size == 0) {
        list->front = NULL;
        list->rear = NULL;
    }

    return buffer;
}

void* pop_front_v(CircularDoubleLinkedList* list, void* buffer)
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
        list->copy_value_to_buffer(buffer, list->front);

    free_buffer(list->front);

    CircularDoubleLinkedListNode* node = list->front->next;
    node->prev = list->rear;
    list->rear->next = node;

    free(list->front);
    list->front = node;

    list->size--;

    if (list->size == 0) {
        list->front = NULL;
        list->rear = NULL;
    }

    return buffer;
}