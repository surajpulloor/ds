include string.mk

# build recipe for Stack_Array
string_test: $(OBJ_MAIN_STRING) $(GEN_LIB_STRING)
		@mkdir -p $(BIN_DIR)
		$(CC) -g -o $(BIN_DIR)/$@ $< $(CFLAGS)

gen_lib: $(GEN_LIB_STRING)