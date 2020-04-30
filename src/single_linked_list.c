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
    if (list) {

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

    } else {
        printf("error: the list doesn't exist. please create one.\n");
        return NULL;
    }
}

void pop_node(SingleLinkedList* list)
{
    char buffer[MAX_BUFFER];
    pop_node_v(list, buffer);
}

char* pop_node_v(SingleLinkedList* list, char* buffer)
{
    if (list) {
        if (list->front) { 
            
            SingleLinkedListNode* node = list->front;
            for (int i = 1; i < list->size - 1; i++, node = node->next)
                ;

            strcpy(buffer, list->rear->data);
            
            node->next = NULL;
            free(list->rear);
            list->rear = node;
            list->size--;

            if (list->size == 0) {
                list->front = NULL;
                list->rear = NULL;
            }

        } else {
            printf("error: the list is empty. insert something.\n");
            strcpy(buffer, "");
        }
    } else {
        printf("error: the list doesn't exist. please create one.\n");
        strcpy(buffer, "");
    }

    return buffer;
}

char* get(SingleLinkedList* list, int index, char* buffer)
{
    if (list) {

        if (list->front) {

            if (index < 1) {
                printf("error: Index has underflowed. It has to be greater than 0\n");
                strcpy(buffer, "");
            } else if (index > list->size) {
                printf("error: Index has overflowed. It has to be less than %d\n", list->size);
                strcpy(buffer, "");
            } else {

                if (index == 1)
                    strcpy(buffer, list->front->data);
                else if (index == list->size)
                    strcpy(buffer, list->rear->data);
                else {
                    int i = 2;
                    for (SingleLinkedListNode* node = list->front->next; i < list->size; i++, node = node->next)
                        if (i == index) {
                            strcpy(buffer, node->data);
                            break;
                        }
                }
            }


        } else {
            printf("error: List is empty. Please insert something in it.\n");
            strcpy(buffer, "");
        }


    } else {
        printf("error: List doesn't exist. Please create one.\n");
        strcpy(buffer, "");
    }

    return buffer;
}

void set(SingleLinkedList* list, int index, char* value)
{
    if (list) {

        if (list->front) {

            if (index < 1) {
                printf("error: Index has underflowed. It has to be greater than 0\n");
            } else if (index > list->size) {
                printf("error: Index has overflowed. It has to be less than %d\n", list->size);
            } else {

                if (index == 1)
                    strcpy(list->front->data, value);
                else if (index == list->size)
                    strcpy(list->rear->data, value);
                else {
                    int i = 2;
                    for (SingleLinkedListNode* node = list->front->next; i < list->size; i++, node = node->next)
                        if (i == index) {
                            strcpy(node->data, value);
                            break;
                        }
                }
            }


        } else {
            printf("error: List is empty. Please insert something in it.\n");
        }


    } else {
        printf("error: List doesn't exist. Please create one.\n");
    }
}


void free_list(SingleLinkedList** list)
{
    if (*list) {
        if ((*list)->front) {
            for (SingleLinkedListNode* node = (*list)->front; node; ) {
                SingleLinkedListNode* nxtNode = node->next;
                free(node);
                node = nxtNode;
            }
        } else 
            printf("error: the list is empty. insert something.\n");

        free(*list);

        *list = NULL;
    } else 
        printf("error: list doesn't exist. please create one.\n");
}

void print_list(SingleLinkedList* list)
{
    if (list) {
        if (list->front) {
            for (SingleLinkedListNode* node = list->front; node; node = node->next)
                printf("%s|%p => ", node->data, node->next);

            printf("\n");
        } else
            printf("error: list is empty. please insert something into the list.\n");
    } else
        printf("error: list doesn't exist. nothing to display.\n");
}
