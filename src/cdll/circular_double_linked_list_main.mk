include circular_double_linked_list.mk


# build recipe for Single Linked List
cdll_test: $(OBJ_MAIN_CIRCULAR_DOUBLE_LINKED_LIST) $(GEN_LIB_CIRCULAR_DOUBLE_LINKED_LIST)
		@mkdir -p $(BIN_DIR)
		$(CC) -g -o $(BIN_DIR)/$@ $< $(CFLAGS)

gen_lib: $(GEN_LIB_CIRCULAR_DOUBLE_LINKED_LIST)