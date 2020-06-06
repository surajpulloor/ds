ROOT_DIR=../..

include $(ROOT_DIR)/Makefile.variable

LIB_NAME=dll

ODIR_DOUBLE_LINKED_LIST=$(LIB_NAME)
ODIR:=$(ODIR)/$(ODIR_DOUBLE_LINKED_LIST)

_DEPS_DOUBLE_LINKED_LIST = double_linked_list.h
DEPS_DOUBLE_LINKED_LIST = $(patsubst %,$(IDIR)/%,$(_DEPS_DOUBLE_LINKED_LIST))

# Double Linked List objects recipes
_OBJ_DOUBLE_LINKED_LIST = push.o pop.o misc.o get_set.o
OBJ_DOUBLE_LINKED_LIST = $(patsubst %,$(ODIR)/%,$(_OBJ_DOUBLE_LINKED_LIST))

_OBJ_MAIN_DOUBLE_LINKED_LIST = dll_test.o
OBJ_MAIN_DOUBLE_LINKED_LIST = $(patsubst %,$(ODIR)/%,$(_OBJ_MAIN_DOUBLE_LINKED_LIST))

_LIB_NAME = lib$(LIB_NAME).a
GEN_LIB_DOUBLE_LINKED_LIST = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))

$(ODIR)/%.o: %.c $(DEPS_DOUBLE_LINKED_LIST)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(LIB_DIR)/%.a: $(OBJ_DOUBLE_LINKED_LIST)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^


CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME)
