#include "ds/circular_single_linked_list.h"

CircularSingleLinkedList* init_list_short()
{
    CircularSingleLinkedList* list = init_list(sizeof(short));
    
    list->copy_value_to_node = copy_value_to_node_short;
    list->copy_value_to_buffer = copy_value_to_buffer_short;
    list->print_node_value = print_node_value_short;
    list->setup_buffer_length = setup_buffer_length_short;

    return list;
}

CircularSingleLinkedList* init_list_unsigned_short()
{
    CircularSingleLinkedList* list = init_list(sizeof(unsigned short));
    
    list->copy_value_to_node = copy_value_to_node_unsigned_short;
    list->copy_value_to_buffer = copy_value_to_buffer_unsigned_short;
    list->print_node_value = print_node_value_unsigned_short;
    list->setup_buffer_length = setup_buffer_length_unsigned_short;

    return list;
}


CircularSingleLinkedList* init_list_int()
{
    CircularSingleLinkedList* list = init_list(sizeof(int));
    
    list->copy_value_to_node = copy_value_to_node_int;
    list->copy_value_to_buffer = copy_value_to_buffer_int;
    list->print_node_value = print_node_value_int;
    list->setup_buffer_length = setup_buffer_length_int;

    return list;
}

CircularSingleLinkedList* init_list_unsigned_int()
{
    CircularSingleLinkedList* list = init_list(sizeof(unsigned int));
    
    list->copy_value_to_node = copy_value_to_node_unsigned_int;
    list->copy_value_to_buffer = copy_value_to_buffer_unsigned_int;
    list->print_node_value = print_node_value_unsigned_int;
    list->setup_buffer_length = setup_buffer_length_unsigned_int;

    return list;
}

CircularSingleLinkedList* init_list_long()
{
    CircularSingleLinkedList* list = init_list(sizeof(long));
    
    list->copy_value_to_node = copy_value_to_node_long;
    list->copy_value_to_buffer = copy_value_to_buffer_long;
    list->print_node_value = print_node_value_long;
    list->setup_buffer_length = setup_buffer_length_long;

    return list;
}

CircularSingleLinkedList* init_list_unsigned_long()
{
    CircularSingleLinkedList* list = init_list(sizeof(unsigned long));
    
    list->copy_value_to_node = copy_value_to_node_unsigned_long;
    list->copy_value_to_buffer = copy_value_to_buffer_unsigned_long;
    list->print_node_value = print_node_value_unsigned_long;
    list->setup_buffer_length = setup_buffer_length_unsigned_long;

    return list;
}

CircularSingleLinkedList* init_list_long_long()
{
    CircularSingleLinkedList* list = init_list(sizeof(long long));
    
    list->copy_value_to_node = copy_value_to_node_long_long;
    list->copy_value_to_buffer = copy_value_to_buffer_long_long;
    list->print_node_value = print_node_value_long_long;
    list->setup_buffer_length = setup_buffer_length_long_long;

    return list;
}

CircularSingleLinkedList* init_list_unsigned_long_long()
{
    CircularSingleLinkedList* list = init_list(sizeof(unsigned long long));
    
    list->copy_value_to_node = copy_value_to_node_unsigned_long_long;
    list->copy_value_to_buffer = copy_value_to_buffer_unsigned_long_long;
    list->print_node_value = print_node_value_unsigned_long_long;
    list->setup_buffer_length = setup_buffer_length_unsigned_long_long;

    return list;
}