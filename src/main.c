#include "../include/single_linked_list.h"
#include <stdio.h>

int main()
{

    SingleLinkedList* list = init_list();

    printf("Push Elements\n");
    push_node(list, "Hello, World");
    push_node(list, "Why so");
    push_node(list, "serious");
    push_node(list, "Greatest jack");
    push_node(list, "World is poor");
    push_node(list, "Oh my god");
    push_node(list, "Stan");

    print_list(list);

    set(list, 8, "This is serious.");

    print_list(list);

    printf("\nGet elements.\n");
    for (int i = -7; i < 0; i++) {
        char buffer[MAX_BUFFER];
        get(list, i, buffer);
        printf("\n\nData: %s\n", buffer);
    }

    print_list(list);

    free_list(&list);

    return 0;
}