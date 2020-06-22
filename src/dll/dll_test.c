#include "ds/double_linked_list.h"
#include <stdio.h>

int main()
{

    DoubleLinkedList* list = init_list_float();

    printf("Push Elements\n");
    // push_back(list, "Hello, World");
    // push_back(list, "Why so");
    // push_back(list, "serious");
    // push_back(list, "Greatest jack");
    // push_back(list, "World is poor");
    // push_back(list, "Oh my god");
    // push_back(list, "Stan");

    for (float i = -55.63; i < 100; i += 2.563)
        push_back(list, &i);

    print_list(list);

    // char buffer[MAX_BUFFER];
    // // push_before(list, "Kick this shit", 1);
    // // push_before(list, "The quick brown", 1);
    // // push_before(list, "fox jumped over the lazy dog.", 1);

    // printf("Pop front\n");
    // printf("Value = %s\n", pop_after_v(list, 1, buffer));
    // printf("Value = %s\n", pop_after_v(list, 3, buffer));

    // print_list(list);

    // for (int i = 1; i < 10; i++) {
    //     set(list, i, "This will repeat 9 times.");
    // }

    // print_list(list);

    free_list(&list);

    return 0;
}