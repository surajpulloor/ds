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

SingleLinkedListNode* push_before(SingleLinkedList* list, char* value, int index)
{
    if (index > list->size) {
        printf("error: cannot push before %d. index cannot be greater than %d\n", index, list->size);
        return NULL;
    }

    if (index < 1) {
        printf("error: cannot push before %d. index cannot be less than 0\n", index);
        return NULL;
    }

    SingleLinkedListNode* newNode = (SingleLinkedListNode*) malloc(sizeof(SingleLinkedListNode));
    strcpy(newNode->data, value);

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

SingleLinkedListNode* push_after(SingleLinkedList* list, char* value, int index)
{
    if (index > list->size) {
        printf("error: cannot push after %d. index cannot be greater than %d\n", index, list->size);
        return NULL;
    }

    if (index < 1) {
        printf("error: cannot push after %d. index cannot be less than 0\n", index);
        return NULL;
    }

    SingleLinkedListNode* newNode = (SingleLinkedListNode*) malloc(sizeof(SingleLinkedListNode));
    strcpy(newNode->data, value);

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


SingleLinkedListNode* push_back(SingleLinkedList* list, char* data)
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
    pop_v(list, NULL);
}

char* pop_before_v(SingleLinkedList* list, int index, char* buffer)
{
    if (list == NULL) {
        printf("error: list doesn't exists\n");
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

    if (buffer) // only copy if buffer isn't empty
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


char* pop_v(SingleLinkedList* list, char* buffer)
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

char* get(SingleLinkedList* list, int index, char* buffer)
{
    if (list == NULL) {
        printf("error: List is empty. Please insert something in it.\n");
        return NULL;
    }

    if (list->front == NULL) {
        printf("error: List doesn't exist. Please create one.\n");
        return NULL;
    }

    if (index < 1) {
        printf("error: Index has underflowed. It has to be greater than 0\n");
        return NULL;
    }

    if (index > list->size) {
        printf("error: Index has overflowed. It has to be less than %d\n", list->size);
        return NULL;
    }

            
    if (index == 1)
        strcpy(buffer, list->front->data);
    else if (index == list->size)
        strcpy(buffer, list->rear->data);
    else {
        int i = 2;
        for (SingleLinkedListNode* node = list->front->next; i < list->size; i++, node = node->next)
            if (i == index) {

                if (buffer)
                    strcpy(buffer, node->data);
                break;

            }
    }
        
    return buffer;
}

void set(SingleLinkedList* list, int index, char* value)
{
    if (list == NULL) {
        printf("error: List is empty. Please insert something in it.\n");
        return;
    }

    if (list->front == NULL) {
        printf("error: List doesn't exist. Please create one.\n");
        return;
    }

    if (index < 1) {
        printf("error: Index has underflowed. It has to be greater than 0\n");
        return;
    }

    if (index > list->size) {
        printf("error: Index has overflowed. It has to be less than %d\n", list->size);
        return;
    }

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
