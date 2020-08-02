#include "ds/sll/single_linked_list.h"


SingleLinkedList* append_lists(SingleLinkedList* list1, SingleLinkedList* list2)
{
    if (list1 == NULL) {
        printf("error: the list 1 doesn't exists. please create one.\n");
        return NULL;
    }

    if (list2 == NULL) {
        printf("error: the list 2 doesn't exists. please create one.\n");
        return NULL;
    }

    if (list1->front == NULL) {
        printf("error: the list 1 is empty. please insert something.\n");
        return NULL;
    }

    if (list2->front == NULL) {
        printf("error: the list 2 is empty. please insert something.\n");
        return NULL;
    }


    list1->rear->next = list2->front;

    list1->rear = list2->rear;

    return list1;
}

SingleLinkedList* append_lists_copy(SingleLinkedList* list1, SingleLinkedList* list2)
{
    return append_lists(list1, copy_list(list2));
}

SingleLinkedList* append_lists_copies(SingleLinkedList* list1, SingleLinkedList* list2)
{
    return append_lists(copy_list(list1), copy_list(list2));
}

