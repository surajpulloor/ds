#include "ds/sll/single_linked_list.h"

SingleLinkedList* reverse_list(SingleLinkedList* list)
{
    for (SingleLinkedListNode* node = NULL, *nxtNode = list->front; nxtNode; ) {
        
        SingleLinkedListNode* nxtToNxt = nxtNode->next;
        nxtNode->next = node;
        node = nxtNode;
        nxtNode = nxtToNxt;

    }

    SingleLinkedListNode* rear = list->rear;
    list->rear = list->front;
    list->front = rear;

    return list;
}

SingleLinkedList* copy_list(SingleLinkedList* list)
{
    SingleLinkedList* list_copy = init_list(
        list->size,

        list->init_struct_members,
        list->free_struct_members,

        list->copy_value_to_node,
        list->copy_value_to_buffer,


        list->print_node_value,

        list->setup_buffer_length,

        list->equal_nodes,

        list->less_than_nodes,
        list->less_than_equal_nodes,

        list->greater_than_nodes,
        list->greater_than_equal_nodes

    );


    for (SingleLinkedListNode* node = list->front; node; node = node->next)
        push_back(list_copy, node->buffer);

    return list_copy;
}
