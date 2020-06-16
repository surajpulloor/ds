#include "circular_single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print_list(CircularSingleLinkedList* list)
{
    if (list) {
        if (list->front) {
            CircularSingleLinkedListNode* node = list->front;

            do{
                print_node(list, node, node == list->front, node == list->rear);
                node = node->next;
            } while (node != list->front);

            printf("\n");
        } else
            printf("error: list is empty. please insert something into the list.\n");
    } else
        printf("error: list doesn't exist. nothing to display.\n");
}

void print_node(CircularSingleLinkedList* list, CircularSingleLinkedListNode* node, bool isFront, bool isLast)
{
    int len = node->buffer_length;
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
    printf("%p | ", node->next);

    list->print_node_value(node);

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
