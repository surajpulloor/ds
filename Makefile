SRC=src
SRC_SINGLE_LINKED_LIST=sll
SRC_DOUBLE_LINKED_LIST=dll
SRC_CIRCULAR_SINGLE_LINKED_LIST=csll
SRC_CIRCULAR_DOUBLE_LINKED_LIST=cdll
SRC_STACK_ARRAY=stack_array
SRC_STACK_LINKED_LIST=stack_ll
SRC_QUEUE_ARRAY=queue_array
SRC_QUEUE_LINKED_LIST=queue_ll
SRC_STRING=string


ODIR=obj
BIN_DIR=bin
LIB_DIR=lib

sll_test:
	cd $(SRC)/$(SRC_SINGLE_LINKED_LIST); make -f single_linked_list.mk sll_test

sll_gen_lib:
	cd $(SRC)/$(SRC_SINGLE_LINKED_LIST); make -f single_linked_list.mk gen_lib

dll_test:
	cd $(SRC)/$(SRC_DOUBLE_LINKED_LIST); make -f double_linked_list_main.mk dll_test

dll_gen_lib:
	cd $(SRC)/$(SRC_DOUBLE_LINKED_LIST); make -f double_linked_list_main.mk gen_lib

csll_test:
	cd $(SRC)/$(SRC_CIRCULAR_SINGLE_LINKED_LIST); make -f circular_single_linked_list_main.mk csll_test

csll_gen_lib:
	cd $(SRC)/$(SRC_CIRCULAR_SINGLE_LINKED_LIST); make -f circular_single_linked_list_main.mk gen_lib

cdll_test:
	cd $(SRC)/$(SRC_CIRCULAR_DOUBLE_LINKED_LIST); make -f circular_double_linked_list_main.mk cdll_test

cdll_gen_lib:
	cd $(SRC)/$(SRC_CIRCULAR_DOUBLE_LINKED_LIST); make -f circular_double_linked_list_main.mk gen_lib

stack_array_test:
	cd $(SRC)/$(SRC_STACK_ARRAY); make -f stack_array_main.mk stack_array_test

stack_array_gen_lib:
	cd $(SRC)/$(SRC_STACK_ARRAY); make -f stack_array_main.mk gen_lib

stack_ll_test:
	cd $(SRC)/$(SRC_STACK_LINKED_LIST); make -f stack_linked_list_main.mk stack_ll_test

stack_ll_gen_lib:
	cd $(SRC)/$(SRC_STACK_LINKED_LIST); make -f stack_linked_list_main.mk gen_lib

queue_array_test:
	cd $(SRC)/$(SRC_QUEUE_ARRAY); make -f queue_array_main.mk queue_array_test

queue_array_gen_lib:
	cd $(SRC)/$(SRC_QUEUE_ARRAY); make -f queue_array_main.mk gen_lib

queue_linked_list_test:
	cd $(SRC)/$(SRC_QUEUE_LINKED_LIST); make -f queue_linked_list_main.mk queue_ll_test

queue_linked_list_gen_lib:
	cd $(SRC)/$(SRC_QUEUE_LINKED_LIST); make -f queue_linked_list_main.mk gen_lib

string_test:
	cd $(SRC)/$(SRC_STRING); make -f string_main.mk string_test

string_gen_lib:
	cd $(SRC)/$(SRC_STRING); make -f string_main.mk gen_lib

.PHONY: clean

clean:
	rm -rf $(ODIR) $(BIN_DIR) $(LIB_DIR)