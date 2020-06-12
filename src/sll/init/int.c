#include "../../../include/single_linked_list.h"

SingleLinkedList* init_list_short()
{

}

SingleLinkedList* init_list_unsigned_short()
{

}


SingleLinkedList* init_list_int()
{
    SingleLinkedList* list = init_list(sizeof(int));
    
    list->copy_value_to_node = copy_value_to_node_int;
    list->copy_value_to_buffer = copy_value_to_buffer_int;

    return list;
}

SingleLinkedList* init_list_unsigned_int()
{

}

SingleLinkedList* init_list_long()
{

}

SingleLinkedList* init_list_unsigned_long()
{

}

SingleLinkedList* init_list_long_long()
{

}

SingleLinkedList* init_list_unsigned_long_long()
{

}