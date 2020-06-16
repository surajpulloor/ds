#include "circular_double_linked_list.h"
#include <stdio.h>

int main()
{

    CircularDoubleLinkedList* list = init_list_char_ptr();

    printf("Push Elements\n");
    push_front(list, "Hello, World");
    push_front(list, "Why so");
    push_front(list, "serious");
    push_front(list, "Greatest jack");
    push_front(list, "World is poor");
    push_front(list, "Oh my god");
    push_front(list, "Stan");

    printf("\nList after 7 push-backs\n");
    print_list(list);


    char buffer[MAX_BUFFER];

    printf("Pop_front 4 values\n");

    printf("Value = %s\n", (char*) pop_after_v(list, 1, buffer));
    // print_list(list);
    printf("Value = %s\n", (char*) pop_after_v(list, 1, buffer));
    // print_list(list);
    printf("Value = %s\n", (char*) pop_after_v(list, 1, buffer));
    // print_list(list);
    printf("Value = %s\n", (char*) pop_after_v(list, 1, buffer));
    // print_list(list);
    printf("Value = %s\n", (char*) pop_after_v(list, 1, buffer));
    // print_list(list);
    printf("Value = %s\n", (char*) pop_after_v(list, 1, buffer));
    // print_list(list);
    printf("Value = %s\n", (char*) pop_after_v(list, 1, buffer));

    print_list(list);

    // push_after(list, "Kick this shit", 1);
    // push_after(list, "The quick brown", 2);
    // push_after(list, "fox jumped over the lazy dog.", 9);
    // push_after(list, "fox jumped over the lazy dog.", 11);

    // printf("\nList after 4 push-befores\n");
    // print_list(list);

    // for (int i = 1; i < 12; i++) {
    //     printf("%d) Value = %s\n", i, get(list, i, buffer));
    // }

    // print_list(list);

    free_list(&list);

    return 0;
}