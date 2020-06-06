include circular_single_linked_list.mk

# build recipe for Single Linked List
circular_single_linked_list_test: $(OBJ_MAIN_CIRCULAR_SINGLE_LINKED_LIST) $(GEN_LIB_CIRCULAR_SINGLE_LINKED_LIST)
		@mkdir -p $(BIN_DIR)
		$(CC) -g -o $(BIN_DIR)/$@ $< $(CFLAGS)

gen_lib: $(GEN_LIB_CIRCULAR_SINGLE_LINKED_LIST)