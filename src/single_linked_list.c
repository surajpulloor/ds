#include "../include/single_linked_list.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

SingleLinkedList* init_list()
{
    SingleLinkedList* list = (SingleLinkedList*) malloc(sizeof(SingleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;

    return list;
}

SingleLinkedListNode* push_node(SingleLinkedList* list, char* data)
{
    SingleLinkedListNode* node = (SingleLinkedListNode*) malloc(sizeof(SingleLinkedListNode));
    strcpy(node->data, data);
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

void pop_node(SingleLinkedList* list)
{
    if (list->front) { 
        SingleLinkedListNode* node = list->front;
        for (int i = 1; i < list->size; i++, node = node->next)
            ;

        free(list->rear);
        list->rear = node;
        list->size--;

        if (list->size == 0) {
            list->front = NULL;
            list->rear = NULL;
        }
    } else
        printf("error: the list is empty.\n");
}

char* pop_node_v(SingleLinkedList* list, char* buffer)
{
    if (list->front) { 
        SingleLinkedListNode* node = list->front;
        for (int i = 1; i < list->size; i++, node = node->next)
            ;

        strcpy(buffer, list->rear->data);

        free(list->rear);
        list->rear = node;
        list->size--;

        if (list->size == 0) {
            list->front = NULL;
            list->rear = NULL;
        }
    } else {
        printf("error: the list is empty.\n");
        strcpy(buffer, "");
    }

    return buffer;
}

void free_list(SingleLinkedList* list)
{
    if (list) {
        if (list->front) {
            for (SingleLinkedListNode* node = list->front; node; ) {
                SingleLinkedListNode* nxtNode = node->next;
                free(node);
                node = nxtNode;
            }
        }

        free(list);
    }
}

void print_list(SingleLinkedList* list)
{
    for (SingleLinkedListNode* node = list->front; node; node = node->next)
        printf("%s|%p => ", node->data, node->next);

    printf("\b\b\b\b\n");
    fflush(stdout);
}
