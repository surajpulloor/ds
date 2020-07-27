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


    SingleLinkedList* list = init_list_unsigned_long_long();

    printf("Push Elements\n");
    // push_back(list, "Hello,");
    // push_back(list, "best game");
    // push_back(list, "is the");
    // push_back(list, "World game");
    // push_back(list, "is");
    // push_back(list, "Jacky Luke");
    // push_back(list, "Qwerty");

    unsigned long long i = 54387912745637298L;
    push_back(list, &i);

    print_list(list);

    // char buffer[MAX_BUFFER];
    // push_before(list, list->size - 1);
    // push_before(list, list->size - 1);
    // push_before(list, list->size - 1);

    // print_list(list);

    // for (int i = 1; i < 10; i++) {
    //     set(list, i);
    // }

    // print_list(list);

    free_list(&list);



    return 0;
}