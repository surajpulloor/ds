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
    push_front(list, "Kick this shit");
    push_front(list, "The quick brown");
    push_front(list, "fox jumped over the lazy dog.");

    print_list(list);

    for (int i = 1; i < 10; i++) {
        set(list, i, "This will repeat 9 times.");
    }

    print_list(list);

    free_list(&list);

    return 0;
}