#include "../../include/single_linked_list.h"
#include <stdio.h>

int main()
{

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