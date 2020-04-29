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

    printf("Pop elements.\n");
    for (int i = 0; i < 13; i++) {
        char buffer[1000];
        pop_node_v(list, buffer);
        printf("Buffer is: %s\n", buffer);
    }

    print_list(list);

    free_list(list);

    return 0;
}