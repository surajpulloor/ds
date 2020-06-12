#include "../../../include/single_linked_list.h"

SingleLinkedList* init_list_char()
{
    SingleLinkedList* list = init_list(sizeof(char));
    
    list->copy_value_to_node = copy_value_to_node_char;
    list->copy_value_to_buffer = copy_value_to_buffer_char;

    return list;
}

SingleLinkedList* init_list_unsigned_char()
{

}