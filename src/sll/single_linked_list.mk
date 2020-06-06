ROOT_DIR=../..

include $(ROOT_DIR)/Makefile.variable

LIB_NAME=sll

ODIR_SLL=$(LIB_NAME)
ODIR:=$(ODIR)/$(ODIR_SLL)

# Include files recipe
_DEPS_SLL = single_linked_list.h
DEPS_SLL = $(patsubst %,$(IDIR)/%,$(_DEPS_SLL))

# Single Linked List objects recipes
_OBJ_SLL = push.o pop.o misc.o get_set.o
_OBJ_MAIN_SLL = ll.o

OBJ_SLL = $(patsubst %,$(ODIR)/%,$(_OBJ_SLL))
OBJ_MAIN_SLL = $(patsubst %,$(ODIR)/%,$(_OBJ_MAIN_SLL))

_LIB_NAME = lib$(LIB_NAME).a
GEN_LIB_LINKED_LIST = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))

$(ODIR)/%.o: %.c $(DEPS_SLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(LIB_DIR)/%.a: $(OBJ_SLL)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^


CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME)
