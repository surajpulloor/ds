#include "double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get(DoubleLinkedList* list, int index, char* buffer)
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

            
    if (index == list->size)
        list->copy_value_to_buffer(buffer, list->rear);
    else {
        int i = 1;
        for (DoubleLinkedListNode* node = list->front; i < list->size; i++, node = node->next)
            if (i == index) {

                if (buffer)
                    list->copy_value_to_buffer(buffer, node);
                break;

            }
    }
        
    return buffer;
}

void set(DoubleLinkedList* list, int index, char* value)
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

    if (index == list->size)
        list->copy_value_to_node(list->rear, value);
    else {
        int i = 1;
        for (DoubleLinkedListNode* node = list->front; i < list->size; i++, node = node->next)
            if (i == index) {
                list->copy_value_to_node(node, value);
                break;
            }
    }

}


