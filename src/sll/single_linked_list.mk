ROOT_DIR=../..

include $(ROOT_DIR)/Makefile.variable

include $(MAKEFILE_DIR)/constants.mk
include $(MAKEFILE_DIR)/pre_req.mk

include $(MAKEFILE_DIR)/recipes/lib.mk
include $(MAKEFILE_DIR)/recipes/comp.mk
include $(MAKEFILE_DIR)/recipes/copy.mk
include $(MAKEFILE_DIR)/recipes/misc.mk

# build recipe for Single Linked List
sll_test: $(OBJ_MAIN_SINGLE_LINKED_LIST) $(GEN_LIB_LINKED_LIST)
		@mkdir -p $(BIN_DIR)
		$(CC) -g -o $(BIN_DIR)/$@ $< $(CFLAGS)

gen_lib: $(GEN_LIB_LINKED_LIST)