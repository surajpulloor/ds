include queue_array.mk

# build recipe for Queue_Array
queue_array_test: $(OBJ_MAIN_QUEUE_ARRAY) $(GEN_LIB_QUEUE_ARRAY)
		@mkdir -p $(BIN_DIR)
		$(CC) -g -o $(BIN_DIR)/$@ $^ $(CFLAGS)

gen_lib: $(GEN_LIB_QUEUE_ARRAY)