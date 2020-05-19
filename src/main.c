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
    printf("popped node value = %s\n", pop_after_v(list, 1, buffer));
    printf("popped node value = %s\n", pop_after_v(list, 2, buffer));
    printf("popped node value = %s\n", pop_after_v(list, 3, buffer));

    free_list(&list);

    return 0;
}