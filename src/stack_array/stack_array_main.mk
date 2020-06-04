include stack_array.mk

# build recipe for Stack_Array
stack_array_test: $(OBJ_MAIN_STACK_ARRAY) $(GEN_LIB_STACK_ARRAY)
		@mkdir -p $(BIN_DIR)
		$(CC) -g -o $(BIN_DIR)/$@ $^ $(CFLAGS)

gen_lib: $(GEN_LIB_STACK_ARRAY)