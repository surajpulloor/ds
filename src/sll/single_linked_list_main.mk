include single_linked_list.mk

# build recipe for Single Linked List
single_linked_list_test: $(OBJ_MAIN_SLL) $(GEN_LIB_LINKED_LIST)
		@mkdir -p $(BIN_DIR)
		$(CC) -g -o $(BIN_DIR)/$@ $< $(CFLAGS)

gen_lib: $(GEN_LIB_LINKED_LIST)