#include "ds/sll/single_linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    void* key;
    void* value;
} Slot;

void init_struct_members(SingleLinkedListNode* node)
{
    Slot* buffer = (Slot*) node->buffer;
    buffer->key = malloc(sizeof(char) * 1000);
    buffer->value = malloc(sizeof(int));
}

void free_struct_members(SingleLinkedListNode* node)
{
    Slot* buffer = (Slot*) node->buffer;
    
    free(buffer->key);
    free(buffer->value);
}

void copy_value_to_node(SingleLinkedListNode* node, void* value)
{
    Slot* node_buffer = (Slot*) node->buffer;
    Slot* value_buffer = (Slot*) value;

    char* buff_key = (char*) node_buffer->key;
    int* buff_value = (int*) node_buffer->value;
    
    strcpy(buff_key, value_buffer->key);
    *buff_value = *(int*) value_buffer->value;

}

void copy_value_to_buffer(void* value, SingleLinkedListNode* node)
{
    Slot* node_buffer = (Slot*) node->buffer;
    Slot* value_buffer = (Slot*) value;

    char* value_key = (char*) value_buffer->key;
    int* value_value = (int*) value_buffer->value;
    
    strcpy(value_key, node_buffer->key);
    *value_value = *(int*) node_buffer->value;
}

int print_node_value(SingleLinkedListNode* node)
{
    Slot* buffer = (Slot*) node->buffer;
    return printf("%s, %d", (char*) buffer->key, *(int*) buffer->value);
}

void setup_buffer_length(SingleLinkedListNode* node, void* value)
{
    Slot* slot = (Slot*) value;

    char buffer[MAX_CHARS_BUFFER];
    node->buffer_length = sprintf(buffer, "%s, %d", (char*) slot->key, *(int*) slot->value);
}



int main()
{

    // SingleLinkedList* list = init_list(
    //     sizeof(Slot),

    //     init_struct_members,
    //     free_struct_members,

    //     copy_value_to_node,
    //     copy_value_to_buffer,

    //     print_node_value,
    //     setup_buffer_length
    // );

    // for (int i = 1, j = 2; i < 21; i++, j++) {
    //     Slot slot = {
    //         .key = (char*) malloc(sizeof(char)),
    //         .value = (int*) malloc(sizeof(int)),
    //     };

    //     char* key = (char*) slot.key;
    //     int* value = (int*) slot.value;

    //     char buffer[MAX_CHARS_BUFFER];
    //     sprintf(buffer, "Key %d", i);

    //     strcpy(key, buffer);
    //     *value = j;

    //     push_back(list, &slot);

    //     free(slot.key);
    //     free(slot.value);
    // }


    // print_list(list);


    // Slot slot = {
    //     .key = (char*) malloc(sizeof(char)),
    //     .value = (int*) malloc(sizeof(int)),
    // };
    // pop_back_v(list, &slot);

    // printf("pop value = %s, %d\n", (char*) slot.key, *(int*) slot.value);

    // free(slot.key);
    // free(slot.value);

    // free_list(&list);


    SingleLinkedList* list = init_list_int();

    // int i = 1;
    // push_back(list, &i);

    for (int i = 1; i < 10; i++)
        push_back(list, &i);


    print_list(list);

    int n = 122;
    push_before(list, &n, 1);


    print_list(list);

    // SingleLinkedListNode* node = get_node(list, 6);

    // int n = 9;
    // if (search_node_by_value(list, &n))
    //     printf("%d exists\n", n);

    // printf("Push Elements\n");
    // push_back(list, "Hello,");
    // push_back(list, "best game");
    // push_back(list, "is the");
    // push_back(list, "World game");
    // push_back(list, "is");
    // push_back(list, "Jacky Luke");
    // push_back(list, "Qwerty");

    // printf("less_than_equal\n");
    // if (less_than_equal_indices(list, 1, 1))
    //     printf("Hello <= Hello\n");
    // else
    //     printf("Hello > Hello\n");

    if (less_than_equal_indices(list, 1, 2))
        printf("1 < 2\n");

    // SingleLinkedList* list2 = init_list_char_ptr();

    // SingleLinkedListNode* node = push_back(list2, "Qwerty");

    // // unsigned long long i = 54387912745637298L;
    // // push_back(list, &i);

    // print_list(list);

    // print_list(list2);

    // SingleLinkedListNode* nodes[2];
    // if (search_nodes(list, 2, 7, nodes, 2)) {

    //     printf("%s\n", (char*) nodes[0]->buffer);
    //     printf("%s\n", (char*) nodes[1]->buffer);

    //     if (search_node_by_value(list, nodes[0])) {
    //         printf("%s exists\n", (char*) nodes[0]->buffer);
    //     }
    // }

    // if (search_node_by_value(list, node)) {
    //     printf("%s exists - node_by_value\n", (char*) node->buffer);
    // } else {
    //     printf("%s doesn't exists - node_by_value\n", (char*) node->buffer);
    // }

    // if (search_node(list, nodes[1])) {
    //     printf("%s exists - search_node\n", (char*) node->buffer);
    // } else {
    //     printf("%s doesn't exists - search_node\n", (char*) node->buffer);
    // }


    // char buffer[MAX_BUFFER];
    // push_before(list, list->size - 1);
    // push_before(list, list->size - 1);
    // push_before(list, list->size - 1);

    // print_list(list);

    // for (int i = 1; i < 10; i++) {
    //     set(list, i);
    // }

    // print_list(list);

    // free_list(&list2);
    free_list(&list);



    return 0;
}