ROOT_DIR=../..

include $(ROOT_DIR)/Makefile.variable

LIB_NAME=sll

ODIR_SLL=$(LIB_NAME)
ODIR:=$(ODIR)/$(ODIR_SLL)

ODIR_COPY_TO_BUFFER=$(ODIR)/$(SRC_COPY_TO_BUFFER)
ODIR_COPY_TO_NODE=$(ODIR)/$(SRC_COPY_TO_NODE)
ODIR_INIT=$(ODIR)/$(SRC_INIT)

# Include files recipe
_DEPS_SLL = single_linked_list.h
DEPS_SLL = $(patsubst %,$(IDIR)/%,$(_DEPS_SLL))

# Single Linked List objects recipes
_OBJ_SLL = push.o pop.o get_set.o print.o alloc_free.o

_OBJ_SLL_COPY_TO_NODE = int.o float.o char.o pointer.o
_OBJ_SLL_COPY_TO_BUFFER = int.o float.o char.o pointer.o
_OBJ_SLL_INIT = int.o float.o char.o pointer.o init.o

_OBJ_MAIN_SLL = ll.o

OBJ_SLL = $(patsubst %,$(ODIR)/%,$(_OBJ_SLL))

OBJ_SLL_COPY_TO_NODE = $(patsubst %,$(ODIR_COPY_TO_NODE)/%,$(_OBJ_SLL_COPY_TO_NODE))
OBJ_SLL_COPY_TO_BUFFER = $(patsubst %,$(ODIR_COPY_TO_BUFFER)/%,$(_OBJ_SLL_COPY_TO_BUFFER))
OBJ_SLL_INIT = $(patsubst %,$(ODIR_INIT)/%,$(_OBJ_SLL_INIT))

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

$(LIB_DIR)/%.a: $(OBJ_SLL) $(OBJ_SLL_COPY_TO_BUFFER) $(OBJ_SLL_COPY_TO_NODE) $(OBJ_SLL_INIT)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^


CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME)
