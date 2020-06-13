ROOT_DIR=../..

include $(ROOT_DIR)/Makefile.variable

LIB_NAME=sll

ODIR_SLL=$(LIB_NAME)
ODIR:=$(ODIR)/$(ODIR_SLL)

ODIR_COPY_TO_BUFFER=$(ODIR)/$(SRC_COPY_TO_BUFFER)
ODIR_COPY_TO_NODE=$(ODIR)/$(SRC_COPY_TO_NODE)
ODIR_INIT=$(ODIR)/$(SRC_INIT)
ODIR_PRINT_NODE_VALUE=$(ODIR)/$(SRC_PRINT_NODE_VALUE)
ODIR_SETUP_BUFFER_LENGTH=$(ODIR)/$(SRC_SETUP_BUFFER_LENGTH)

# Include files recipe
_DEPS_SLL = single_linked_list.h
DEPS_SLL = $(patsubst %,$(IDIR)/%,$(_DEPS_SLL))

# Single Linked List objects recipes
_OBJ_SLL = push.o pop.o get_set.o print.o alloc_free.o

_OBJ_SLL_TYPE_FUNCTIONS = int.o float.o char.o pointer.o
_OBJ_SLL_INIT_MAIN = init.o
_OBJ_SLL_INIT_MAIN := $(_OBJ_SLL_TYPE_FUNCTIONS) $(_OBJ_SLL_INIT_MAIN)

_OBJ_MAIN_SLL = ll_test.o

OBJ_SLL = $(patsubst %,$(ODIR)/%,$(_OBJ_SLL))

OBJ_SLL_COPY_TO_NODE = $(patsubst %,$(ODIR_COPY_TO_NODE)/%,$(_OBJ_SLL_TYPE_FUNCTIONS))
OBJ_SLL_COPY_TO_BUFFER = $(patsubst %,$(ODIR_COPY_TO_BUFFER)/%,$(_OBJ_SLL_TYPE_FUNCTIONS))
OBJ_SLL_INIT = $(patsubst %,$(ODIR_INIT)/%,$(_OBJ_SLL_INIT_MAIN))
OBJ_SLL_PRINT_NODE_VALUE = $(patsubst %,$(ODIR_PRINT_NODE_VALUE)/%,$(_OBJ_SLL_TYPE_FUNCTIONS))
OBJ_SLL_SETUP_BUFFER_LENGTH = $(patsubst %,$(ODIR_SETUP_BUFFER_LENGTH)/%,$(_OBJ_SLL_TYPE_FUNCTIONS))

OBJ_MAIN_SLL = $(patsubst %,$(ODIR)/%,$(_OBJ_MAIN_SLL))

_LIB_NAME = lib$(LIB_NAME).a
GEN_LIB_LINKED_LIST = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))

$(ODIR)/%.o: %.c $(DEPS_SLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_COPY_TO_NODE)/%.o: $(SRC_COPY_TO_NODE)/%.c $(DEPS_SLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_COPY_TO_BUFFER)/%.o: $(SRC_COPY_TO_BUFFER)/%.c $(DEPS_SLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_INIT)/%.o: $(SRC_INIT)/%.c $(DEPS_SLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(ODIR_PRINT_NODE_VALUE)/%.o: $(SRC_PRINT_NODE_VALUE)/%.c $(DEPS_SLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(ODIR_SETUP_BUFFER_LENGTH)/%.o: $(SRC_SETUP_BUFFER_LENGTH)/%.c $(DEPS_SLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(LIB_DIR)/%.a: $(OBJ_SLL) $(OBJ_SLL_COPY_TO_BUFFER) $(OBJ_SLL_COPY_TO_NODE) $(OBJ_SLL_INIT) $(OBJ_SLL_PRINT_NODE_VALUE) $(OBJ_SLL_SETUP_BUFFER_LENGTH)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^


CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME)
