#include "../include/single_linked_list.h"
#include <stdio.h>

int main()
{

    SingleLinkedList* list = init_list();

    printf("Push Elements\n");
    push_back(list, "Hello, World");
    push_back(list, "Why so");
    push_back(list, "serious");
    push_back(list, "Greatest jack");
    push_back(list, "World is poor");
    push_back(list, "Oh my god");
    push_back(list, "Stan");

    print_list(list);

    char buffer[MAX_BUFFER];
    printf("get(1) = %s\n", get(list, 1, buffer));
    printf("get(2) = %s\n", get(list, 2, buffer));

    set(list, 21, "KK the singer.");
    set(list, -2, "Luke is great.");

    print_list(list);

    free_list(&list);

    return 0;
}