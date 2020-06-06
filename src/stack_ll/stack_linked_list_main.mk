include stack_linked_list.mk

SECOND_LIB_NAME = sll

CFLAGS := $(CFLAGS) -l$(SECOND_LIB_NAME)

# build recipe for Stack_Array
stack_ll_test: $(OBJ_MAIN_STACK_LINKED_LIST) $(GEN_LIB_STACK_LINKED_LIST)
		cd $(SINGLE_LINKED_LIST_DIR); make -f single_linked_list_main.mk gen_lib
		@mkdir -p $(BIN_DIR)
		$(CC) -g -o $(BIN_DIR)/$@ $< $(CFLAGS)

gen_lib: $(GEN_LIB_STACK_LINKED_LIST)
		cd $(SINGLE_LINKED_LIST_DIR); make -f single_linked_list_main.mk gen_lib
