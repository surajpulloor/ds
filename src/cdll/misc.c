#include "../../include/circular_double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

CircularDoubleLinkedList* init_list()
{
    CircularDoubleLinkedList* list = (CircularDoubleLinkedList*) malloc(sizeof(CircularDoubleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;

    return list;
}

void free_list(CircularDoubleLinkedList** list)
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

    CircularDoubleLinkedListNode* node = (*list)->front;
    
    do {
        CircularDoubleLinkedListNode* nxtNode = node->next;
        free(node);
        node = nxtNode;
    } while (node != (*list)->front);

    free(*list);
    *list = NULL;
}

void print_list(CircularDoubleLinkedList* list)
{
    if (list) {
        if (list->front) {
            CircularDoubleLinkedListNode* node = list->front;

            do {
                print_node(node, node == list->front, node == list->rear);
                node = node->next;
            } while (node != list->front);

            printf("\n");
        } else
            printf("error: list is empty. please insert something into the list.\n");
    } else
        printf("error: list doesn't exist. nothing to display.\n");
}

void print_node(CircularDoubleLinkedListNode* node, bool isFront, bool isLast)
{
    int len = strlen(node->data);
    int totalDashes = 34 + len;

    int halfway = (totalDashes + 6) / 2;

    if (isFront) {
        printf("||");

        for (int i = 1; i <= halfway; i++)
            printf("=");

        printf("||\n||");

        for (int i = 1; i <= halfway; i++)
            printf(" ");

        printf("\\/\n");
    }
        
    printf("||  ");

    printf("+ ");
    for (int i = 1; i <= totalDashes; i++) {
        if (i == 16 || i == 19 + len)
            printf("+");
        else
            printf("-");
    }
    printf(" +");

    printf("\n||  | ");
    printf("%p | %s | %p", node->prev, node->data, node->next);
    printf(" |\n");

    

    printf("||  + ");
    for (int i = 1; i <= totalDashes; i++)
        if (i == 16 || i == 19 + len)
            printf("+");
        else
            printf("-");
    printf(" +\n");


    int nodeAddressSpaces = totalDashes - 16;

    printf("||  | ");
    printf("%p", node);
    printf(" |");
    for (int i = 1; i <= nodeAddressSpaces; i++)
        printf(" ");
    printf(" |\n");


    printf("||  + ");
    for (int i = 1; i <= totalDashes; i++)
            if (i == 16)
                printf("+");
            else
                printf("-");
    printf(" +\n");

    printf("||");


    if (!isLast) {

        for (int i = 1; i <= halfway + 2; i++)
            if (i == halfway + 2)
                printf("/\\\n");
            else
                printf(" ");

        printf("||  ");

        for (int i = 1; i <= halfway; i++)
            if (i == halfway)
                printf("||\n");
            else
                printf(" ");

        printf("||");

        for (int i = 1; i <= halfway + 2; i++)
            if (i == halfway + 2)
                printf("\\/\n");
            else
                printf(" ");
    } else {
        for (int i = 1; i <= halfway; i++)
            printf(" ");

        printf("/\\\n");

        printf("||");

        for (int i = 1; i <= halfway; i++)
            printf("=");

        printf("||\n");

    }

}