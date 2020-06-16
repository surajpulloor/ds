include single_linked_list.mk

# build recipe for Single Linked List
sll_test: $(OBJ_MAIN_SINGLE_LINKED_LIST) $(GEN_LIB_LINKED_LIST)
		@mkdir -p $(BIN_DIR)
		$(CC) -g -o $(BIN_DIR)/$@ $< $(CFLAGS)

gen_lib: $(GEN_LIB_LINKED_LIST)