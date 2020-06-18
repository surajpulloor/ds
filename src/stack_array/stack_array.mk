ROOT_DIR=../..

include $(ROOT_DIR)/Makefile.variable


LIB_NAME=stack_array

SRC_SETUP_LARGEST_STRING_LENGTH=setup_largest_string_length

ODIR_STACK_ARRAY=$(LIB_NAME)
ODIR:=$(ODIR)/$(ODIR_STACK_ARRAY)

ODIR_COPY_TO_BUFFER=$(ODIR)/$(SRC_COPY_TO_BUFFER)
ODIR_COPY_TO_NODE=$(ODIR)/$(SRC_COPY_TO_NODE)
ODIR_INIT=$(ODIR)/$(SRC_INIT)
ODIR_PRINT_NODE_VALUE=$(ODIR)/$(SRC_PRINT_NODE_VALUE)
ODIR_SETUP_LARGEST_STRING_LENGTH=$(ODIR)/$(SRC_SETUP_LARGEST_STRING_LENGTH)


_DEPS_STACK_ARRAY = stack_array.h
DEPS_STACK_ARRAY = $(patsubst %,$(IDIR)/%,$(_DEPS_STACK_ARRAY))

# Stack_Array objects recipes
_OBJ_STACK_ARRAY = push_pop.o print.o alloc_free.o setup_funcs.o

_OBJ_STACK_ARRAY_TYPE_FUNCTIONS = int.o float.o char.o pointer.o
_OBJ_STACK_ARRAY_INIT_MAIN = init.o
_OBJ_STACK_ARRAY_INIT_MAIN := $(_OBJ_STACK_ARRAY_TYPE_FUNCTIONS) $(_OBJ_STACK_ARRAY_INIT_MAIN)


_OBJ_MAIN_STACK_ARRAY = main.o

_LIB_NAME = lib$(LIB_NAME).a


OBJ_STACK_ARRAY = $(patsubst %,$(ODIR)/%,$(_OBJ_STACK_ARRAY))

OBJ_STACK_ARRAY_COPY_TO_NODE = $(patsubst %,$(ODIR_COPY_TO_NODE)/%,$(_OBJ_STACK_ARRAY_TYPE_FUNCTIONS))
OBJ_STACK_ARRAY_COPY_TO_BUFFER = $(patsubst %,$(ODIR_COPY_TO_BUFFER)/%,$(_OBJ_STACK_ARRAY_TYPE_FUNCTIONS))
OBJ_STACK_ARRAY_INIT = $(patsubst %,$(ODIR_INIT)/%,$(_OBJ_STACK_ARRAY_INIT_MAIN))
OBJ_STACK_ARRAY_PRINT_NODE_VALUE = $(patsubst %,$(ODIR_PRINT_NODE_VALUE)/%,$(_OBJ_STACK_ARRAY_TYPE_FUNCTIONS))
OBJ_STACK_ARRAY_SETUP_LARGEST_STRING_LENGTH = $(patsubst %,$(ODIR_SETUP_LARGEST_STRING_LENGTH)/%,$(_OBJ_STACK_ARRAY_TYPE_FUNCTIONS))


OBJ_MAIN_STACK_ARRAY = $(patsubst %,$(ODIR)/%,$(_OBJ_MAIN_STACK_ARRAY))

GEN_LIB_STACK_ARRAY = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))


$(ODIR)/%.o: %.c $(DEPS_STACK_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(ODIR_COPY_TO_NODE)/%.o: $(SRC_COPY_TO_NODE)/%.c $(DEPS_STACK_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_COPY_TO_BUFFER)/%.o: $(SRC_COPY_TO_BUFFER)/%.c $(DEPS_STACK_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_INIT)/%.o: $(SRC_INIT)/%.c $(DEPS_STACK_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(ODIR_PRINT_NODE_VALUE)/%.o: $(SRC_PRINT_NODE_VALUE)/%.c $(DEPS_STACK_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(ODIR_SETUP_LARGEST_STRING_LENGTH)/%.o: $(SRC_SETUP_LARGEST_STRING_LENGTH)/%.c $(DEPS_STACK_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(LIB_DIR)/$(_LIB_NAME): $(OBJ_STACK_ARRAY) $(OBJ_STACK_ARRAY_COPY_TO_BUFFER) $(OBJ_STACK_ARRAY_COPY_TO_NODE) $(OBJ_STACK_ARRAY_INIT) $(OBJ_STACK_ARRAY_PRINT_NODE_VALUE) $(OBJ_STACK_ARRAY_SETUP_LARGEST_STRING_LENGTH)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^

CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) 
