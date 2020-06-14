#include "double_linked_list.h"
#include <stdio.h>


void print_list(DoubleLinkedList* list)
{
    if (list) {
        if (list->front) {
            for (DoubleLinkedListNode* node = list->front; node; node = node->next)
                print_node(list, node == list->front, node == list->rear);

            printf("\n");
        } else
            printf("error: list is empty. please insert something into the list.\n");
    } else
        printf("error: list doesn't exist. nothing to display.\n");
}


void print_node(DoubleLinkedList* list, DoubleLinkedListNode* node, bool isFront, bool isRear)
{
    int len = node->buffer_length;
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

    printf(" | ", node->buffer);

    list->print_node_value(node);

    printf(" | ");
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