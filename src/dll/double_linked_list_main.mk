include double_linked_list.mk

# build recipe for Single Linked List
dll_test: $(OBJ_MAIN_DOUBLE_LINKED_LIST) $(GEN_LIB_DOUBLE_LINKED_LIST)
		@mkdir -p $(BIN_DIR)
		$(CC) -g -o $(BIN_DIR)/$@ $< $(CFLAGS)

gen_lib: $(GEN_LIB_DOUBLE_LINKED_LIST)