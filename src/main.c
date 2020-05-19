#include "../include/single_linked_list.h"
#include <stdio.h>

int main()
{

    SingleLinkedList* list = init_list();

    printf("Push Elements\n");
    push(list, "Hello, World");
    push(list, "Why so");
    push(list, "serious");
    push(list, "Greatest jack");
    push(list, "World is poor");
    push(list, "Oh my god");
    push(list, "Stan");

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