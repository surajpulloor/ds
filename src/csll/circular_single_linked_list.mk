ROOT_DIR=../..
SINGLE_LINKED_LIST_ROOT_DIR=..

include $(ROOT_DIR)/Makefile.variable


LIB_NAME=csll

ODIR_CSLL=$(LIB_NAME)
ODIR:=$(ODIR)/$(ODIR_CSLL)

_DEPS_CIRCULAR_SINGLE_LINKED_LIST = circular_single_linked_list.h
DEPS_CIRCULAR_SINGLE_LINKED_LIST = $(patsubst %,$(IDIR)/%,$(_DEPS_CIRCULAR_SINGLE_LINKED_LIST))

_OBJ_CIRCULAR_SINGLE_LINKED_LIST = push.o pop.o misc.o get_set.o
OBJ_CIRCULAR_SINGLE_LINKED_LIST = $(patsubst %,$(ODIR)/%,$(_OBJ_CIRCULAR_SINGLE_LINKED_LIST))

_OBJ_MAIN_CIRCULAR_SINGLE_LINKED_LIST = csll_test.o
OBJ_MAIN_CIRCULAR_SINGLE_LINKED_LIST = $(patsubst %,$(ODIR)/%,$(_OBJ_MAIN_CIRCULAR_SINGLE_LINKED_LIST))

_LIB_NAME = lib$(LIB_NAME).a
GEN_LIB_CIRCULAR_SINGLE_LINKED_LIST = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))


$(ODIR)/%.o: %.c $(DEPS_CIRCULAR_SINGLE_LINKED_LIST)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(LIB_DIR)/%.a: $(OBJ_CIRCULAR_SINGLE_LINKED_LIST)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^



CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME)