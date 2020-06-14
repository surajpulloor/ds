#include "double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

DoubleLinkedList* init_list()
{
    DoubleLinkedList* list = (DoubleLinkedList*) malloc(sizeof(DoubleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;

    return list;
}

void free_list(DoubleLinkedList** list)
{
    if (*list == NULL) {
        printf("error: list doesn't exist. please create one.\n");
        return;
    }

    if ((*list)->front == NULL) {
        printf("error: the list is empty. insert something.\n");
        free(*list);
        *list = NULL;
        return;
    }
    
    for (DoubleLinkedListNode* node = (*list)->front; node; ) {
        DoubleLinkedListNode* nxtNode = node->next;
        free(node);
        node = nxtNode;
    }

    free(*list);
    *list = NULL;
}

void print_list(DoubleLinkedList* list)
{
    if (list) {
        if (list->front) {
            for (DoubleLinkedListNode* node = list->front; node; node = node->next)
                print_node(node, node == list->front, node == list->rear);

            printf("\n");
        } else
            printf("error: list is empty. please insert something into the list.\n");
    } else
        printf("error: list doesn't exist. nothing to display.\n");
}


void print_node(DoubleLinkedListNode* node, bool isFront, bool isRear)
{
    int len = strlen(node->buffer);
    int totalDashes = 34 + len;

    
    printf("+ ");
    for (int i = 1; i <= totalDashes; i++) {
        if (i == 16 || i == 19 + len)
            printf("+");
        else
            printf("-");
    }
    printf(" +");

    printf("\n| ");
    if (isFront)
        printf("0x000000000000");
    else
        printf("%p", node->prev);

    printf(" | %s | ", node->buffer);

    if (isRear)
        printf("0x000000000000");
    else
        printf("%p", node->next);
    printf(" |\n");

    printf("+ ");
    for (int i = 1; i <= totalDashes; i++)
        if (i == 16 || i == 19 + len)
            printf("+");
        else
            printf("-");
    printf(" +\n");


    int nodeAddressSpaces = totalDashes - 16;

    printf("| ");
    printf("%p", node);
    printf(" |");
    for (int i = 1; i <= nodeAddressSpaces; i++)
        printf(" ");
    printf(" |\n");


    printf("+ ");
    for (int i = 1; i <= totalDashes; i++)
            if (i == 16)
                printf("+");
            else
                printf("-");
    printf(" +\n");


    if (!isRear) {
        int halfway = (totalDashes + 4) / 2;

        for (int i = 1; i <= halfway; i++)
            if (i == halfway)
                printf("/\\\n");
            else
                printf(" ");

        for (int i = 1; i <= halfway; i++)
            if (i == halfway)
                printf("||\n");
            else
                printf(" ");

        for (int i = 1; i <= halfway; i++)
            if (i == halfway)
                printf("\\/\n");
            else
                printf(" ");
    }
    
}