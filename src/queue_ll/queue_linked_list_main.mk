include queue_linked_list.mk

SECOND_LIB_NAME = sll

CFLAGS := $(CFLAGS) -l$(SECOND_LIB_NAME)


queue_ll_test: $(OBJ_MAIN_QUEUE_LINKED_LIST) $(GEN_LIB_QUEUE_LINKED_LIST)
		cd $(SINGLE_LINKED_LIST_DIR); make -f single_linked_list_main.mk gen_lib
		@mkdir -p $(BIN_DIR)
		$(CC) -g -o $(BIN_DIR)/$@ $< $(CFLAGS)

gen_lib: $(GEN_LIB_QUEUE_LINKED_LIST)
		cd $(SINGLE_LINKED_LIST_DIR); make -f single_linked_list_main.mk gen_lib
