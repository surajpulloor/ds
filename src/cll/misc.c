#include "../../../include/circular_single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

CircularSingleLinkedList* init_list()
{
    CircularSingleLinkedList* list = (CircularSingleLinkedList*) malloc(sizeof(CircularSingleLinkedList));
    list->front = NULL;
    list->rear = NULL;

    list->size = 0;

    return list;
}

void free_list(CircularSingleLinkedList** list)
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

    CircularSingleLinkedListNode* node = (*list)->front;
    
    do {
        CircularSingleLinkedListNode* nxtNode = node->next;
        free(node);
        node = nxtNode;
    } while (node != (*list)->front);

    free(*list);
    *list = NULL;
}

void print_list(CircularSingleLinkedList* list)
{
    if (list) {
        if (list->front) {
            CircularSingleLinkedListNode* node = list->front;

            do{
                print_node(node, node == list->front, node == list->rear);
                node = node->next;
            } while (node != list->front);

            printf("\n");
        } else
            printf("error: list is empty. please insert something into the list.\n");
    } else
        printf("error: list doesn't exist. nothing to display.\n");
}

void print_node(CircularSingleLinkedListNode* node, bool isFront, bool isLast)
{
    int len = strlen(node->data);
    int totalDashes = 19 + len;

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
        if (i == 16 || i == totalDashes)
            printf("+");
        else
            printf("-");
    }

    printf("\n||  | ");
    printf("%p | %s", node->next, node->data);
    printf(" |\n");

    

    printf("||  + ");
    for (int i = 1; i <= totalDashes; i++)
        if (i == 16 || i == totalDashes)
            printf("+");
        else
            printf("-");


    int nodeAddressSpaces = totalDashes - 17;

    printf("\n||  | ");
    printf("%p", node);
    printf(" |");
    for (int i = 1; i <= nodeAddressSpaces; i++)
        printf(" ");
    printf("|\n");


    printf("||  + ");
    for (int i = 1; i <= totalDashes; i++)
            if (i == 16 || i == totalDashes)
                printf("+");
            else
                printf("-");

    printf("\n||");


    if (!isLast) {

        for (int i = 1; i <= halfway; i++)
            if (i == halfway)
                printf("||\n");
            else
                printf(" ");

        printf("||");

        for (int i = 1; i <= halfway; i++)
            if (i == halfway)
                printf("\\/\n");
            else
                printf(" ");
    } else {
        for (int i = 1; i <= halfway; i++)
            printf(" ");

        printf("||\n");

        printf("||");

        for (int i = 1; i <= halfway; i++)
            printf("=");

        printf("||\n");

    }

}
