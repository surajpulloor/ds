#include "../../../include/single_linked_list.h"

SingleLinkedList* init_list_short()
{
    SingleLinkedList* list = init_list(sizeof(short));
    
    list->copy_value_to_node = copy_value_to_node_short;
    list->copy_value_to_buffer = copy_value_to_buffer_short;
    list->print_node_value = print_node_value_short;

    return list;
}

SingleLinkedList* init_list_unsigned_short()
{
    SingleLinkedList* list = init_list(sizeof(unsigned short));
    
    list->copy_value_to_node = copy_value_to_node_unsigned_short;
    list->copy_value_to_buffer = copy_value_to_buffer_unsigned_short;
    list->print_node_value = print_node_value_unsigned_short;

    return list;
}


SingleLinkedList* init_list_int()
{
    SingleLinkedList* list = init_list(sizeof(int));
    
    list->copy_value_to_node = copy_value_to_node_int;
    list->copy_value_to_buffer = copy_value_to_buffer_int;
    list->print_node_value = print_node_value_int;

    return list;
}

SingleLinkedList* init_list_unsigned_int()
{
    SingleLinkedList* list = init_list(sizeof(unsigned int));
    
    list->copy_value_to_node = copy_value_to_node_unsigned_int;
    list->copy_value_to_buffer = copy_value_to_buffer_unsigned_int;
    list->print_node_value = print_node_value_unsigned_int;

    return list;
}

SingleLinkedList* init_list_long()
{
    SingleLinkedList* list = init_list(sizeof(long));
    
    list->copy_value_to_node = copy_value_to_node_long;
    list->copy_value_to_buffer = copy_value_to_buffer_long;
    list->print_node_value = print_node_value_long;

    return list;
}

SingleLinkedList* init_list_unsigned_long()
{
    SingleLinkedList* list = init_list(sizeof(unsigned long));
    
    list->copy_value_to_node = copy_value_to_node_unsigned_long;
    list->copy_value_to_buffer = copy_value_to_buffer_unsigned_long;
    list->print_node_value = print_node_value_unsigned_long;

    return list;
}

SingleLinkedList* init_list_long_long()
{
    SingleLinkedList* list = init_list(sizeof(long long));
    
    list->copy_value_to_node = copy_value_to_node_long_long;
    list->copy_value_to_buffer = copy_value_to_buffer_long_long;
    list->print_node_value = print_node_value_long_long;

    return list;
}

SingleLinkedList* init_list_unsigned_long_long()
{
    SingleLinkedList* list = init_list(sizeof(unsigned long long));
    
    list->copy_value_to_node = copy_value_to_node_unsigned_long_long;
    list->copy_value_to_buffer = copy_value_to_buffer_unsigned_long_long;
    list->print_node_value = print_node_value_unsigned_long_long;

    return list;
}