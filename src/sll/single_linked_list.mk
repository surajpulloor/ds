ROOT_DIR=../..

LIB_NAME=sll

include $(ROOT_DIR)/Makefile.variable

IDIR:=$(ROOT_DIR)/$(IDIR)
ODIR:=$(ROOT_DIR)/$(ODIR)
BIN_DIR:=$(ROOT_DIR)/$(BIN_DIR)
LIB_DIR:=$(ROOT_DIR)/$(LIB_DIR)

# Include files recipe
_DEPS_SLL = single_linked_list.h
DEPS_SLL = $(patsubst %,$(IDIR)/%,$(_DEPS_SLL))

# Single Linked List objects recipes
_OBJ_SLL = push.o pop.o misc.o get_set.o
_OBJ_MAIN_SLL = ll.o

OBJ_SLL = $(patsubst %,$(ODIR)/$(ODIR_SLL)/%,$(_OBJ_SLL))
OBJ_MAIN_SLL = $(patsubst %,$(ODIR)/$(ODIR_SLL)/%,$(_OBJ_MAIN_SLL))

_LIB_NAME = lib$(LIB_NAME).a
GEN_LIB_LINKED_LIST = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))

$(ODIR)/$(ODIR_SLL)/%.o: $(ROOT_DIR)/$(SRC)/$(SRC_SINGLE_LINKED_LIST)/%.c $(DEPS_SLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(LIB_DIR)/%.a: $(OBJ_SLL)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^


CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME)
