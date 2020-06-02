#include "../../include/single_linked_list.h"
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

void free_list(SingleLinkedList** list)
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
    
    for (SingleLinkedListNode* node = (*list)->front; node; ) {
        SingleLinkedListNode* nxtNode = node->next;
        free(node);
        node = nxtNode;
    }

    free(*list);
    *list = NULL;
}

void print_list(SingleLinkedList* list)
{
    if (list) {
        if (list->front) {
            for (SingleLinkedListNode* node = list->front; node; node = node->next)
                print_node(node, node == list->rear);

            printf("\n");
        } else
            printf("error: list is empty. please insert something into the list.\n");
    } else
        printf("error: list doesn't exist. nothing to display.\n");
}

void print_node(SingleLinkedListNode* node, bool isLast)
{
    int len = strlen(node->data);
    int totalDashes = 19 + len;

    int halfway = (totalDashes + 6) / 2;

    printf("+ ");
    for (int i = 1; i <= totalDashes; i++) {
        if (i == 16 || i == totalDashes)
            printf("+");
        else
            printf("-");
    }

    printf("\n| ");
    
    if (isLast)
        printf("0x000000000000");
    else
        printf("%p", node->next);

    printf(" | %s", node->data);
    printf(" |\n");

    

    printf("+ ");
    for (int i = 1; i <= totalDashes; i++)
        if (i == 16 || i == totalDashes)
            printf("+");
        else
            printf("-");


    int nodeAddressSpaces = totalDashes - 17;

    printf("\n| ");
    printf("%p", node);
    printf(" |");
    for (int i = 1; i <= nodeAddressSpaces; i++)
        printf(" ");
    printf("|\n");


    printf("+ ");
    for (int i = 1; i <= totalDashes; i++)
            if (i == 16 || i == totalDashes)
                printf("+");
            else
                printf("-");

    printf("\n");


    if (!isLast) {

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