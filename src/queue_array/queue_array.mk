ROOT_DIR=../..

include $(ROOT_DIR)/Makefile.variable


LIB_NAME=queue_array

ODIR_QUEUE_ARRAY=$(LIB_NAME)
ODIR:=$(ODIR)/$(ODIR_QUEUE_ARRAY)

ODIR_COPY_TO_BUFFER=$(ODIR)/$(SRC_COPY_TO_BUFFER)
ODIR_COPY_TO_NODE=$(ODIR)/$(SRC_COPY_TO_NODE)
ODIR_INIT=$(ODIR)/$(SRC_INIT)
ODIR_PRINT_NODE_VALUE=$(ODIR)/$(SRC_PRINT_NODE_VALUE)


_DEPS_QUEUE_ARRAY = queue_array.h
DEPS_QUEUE_ARRAY = $(patsubst %,$(DS_HEADER_PATH)/%,$(_DEPS_QUEUE_ARRAY))

# Queue_Array objects recipes
_OBJ_QUEUE_ARRAY = queue_array.o alloc_free.o setup_funcs.o

_OBJ_QUEUE_ARRAY_TYPE_FUNCTIONS = int.o float.o char.o pointer.o
_OBJ_QUEUE_ARRAY_INIT_MAIN = init.o
_OBJ_QUEUE_ARRAY_INIT_MAIN := $(_OBJ_QUEUE_ARRAY_TYPE_FUNCTIONS) $(_OBJ_QUEUE_ARRAY_INIT_MAIN)



_OBJ_MAIN_QUEUE_ARRAY = queue_array_test.o

_LIB_NAME = lib$(LIB_NAME).a


OBJ_QUEUE_ARRAY = $(patsubst %,$(ODIR)/%,$(_OBJ_QUEUE_ARRAY))

OBJ_QUEUE_ARRAY_COPY_TO_NODE = $(patsubst %,$(ODIR_COPY_TO_NODE)/%,$(_OBJ_QUEUE_ARRAY_TYPE_FUNCTIONS))
OBJ_QUEUE_ARRAY_COPY_TO_BUFFER = $(patsubst %,$(ODIR_COPY_TO_BUFFER)/%,$(_OBJ_QUEUE_ARRAY_TYPE_FUNCTIONS))
OBJ_QUEUE_ARRAY_INIT = $(patsubst %,$(ODIR_INIT)/%,$(_OBJ_QUEUE_ARRAY_INIT_MAIN))
OBJ_QUEUE_ARRAY_PRINT_NODE_VALUE = $(patsubst %,$(ODIR_PRINT_NODE_VALUE)/%,$(_OBJ_QUEUE_ARRAY_TYPE_FUNCTIONS))
OBJ_QUEUE_ARRAY_SETUP_LARGEST_STRING_LENGTH = $(patsubst %,$(ODIR_SETUP_LARGEST_STRING_LENGTH)/%,$(_OBJ_QUEUE_ARRAY_TYPE_FUNCTIONS))


OBJ_MAIN_QUEUE_ARRAY = $(patsubst %,$(ODIR)/%,$(_OBJ_MAIN_QUEUE_ARRAY))

GEN_LIB_QUEUE_ARRAY = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))


$(ODIR)/%.o: %.c $(DEPS_QUEUE_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(ODIR_COPY_TO_NODE)/%.o: $(SRC_COPY_TO_NODE)/%.c $(DEPS_QUEUE_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_COPY_TO_BUFFER)/%.o: $(SRC_COPY_TO_BUFFER)/%.c $(DEPS_QUEUE_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_INIT)/%.o: $(SRC_INIT)/%.c $(DEPS_QUEUE_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(ODIR_PRINT_NODE_VALUE)/%.o: $(SRC_PRINT_NODE_VALUE)/%.c $(DEPS_QUEUE_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)



$(LIB_DIR)/$(_LIB_NAME): $(OBJ_QUEUE_ARRAY) $(OBJ_QUEUE_ARRAY_COPY_TO_BUFFER) $(OBJ_QUEUE_ARRAY_COPY_TO_NODE) $(OBJ_QUEUE_ARRAY_INIT) $(OBJ_QUEUE_ARRAY_PRINT_NODE_VALUE)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^

CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) 
