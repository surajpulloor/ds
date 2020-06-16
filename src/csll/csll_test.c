#include "circular_single_linked_list.h"
#include <stdio.h>

int main()
{

    CircularSingleLinkedList* list = init_list_char_ptr();

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
    // push_before(list, "Kick this shit", 2);
    // push_before(list, "The quick brown", 2);
    // push_before(list, "fox jumped over the lazy dog.", 2);

    printf("Values:\n");
    printf("%s\n", pop_after_v(list, list->size - 1, buffer) ? buffer : "NULL");
    printf("%s\n", pop_after_v(list, list->size - 1, buffer) ? buffer : "NULL");
    printf("%s\n", pop_after_v(list, list->size - 1, buffer) ? buffer : "NULL");
    printf("%s\n", pop_after_v(list, list->size - 1, buffer) ? buffer : "NULL");
    printf("%s\n", pop_after_v(list, list->size - 1, buffer) ? buffer : "NULL");
    printf("%s\n", pop_after_v(list, list->size - 1, buffer) ? buffer : "NULL");
    printf("%s\n", pop_after_v(list, list->size - 1, buffer) ? buffer : "NULL");

    print_list(list);

    // for (int i = 1; i <= 10; i++) {
    //     set(list, i, "This will repeat 10 times.");
    // }

    // print_list(list);

    free_list(&list);

    return 0;
}