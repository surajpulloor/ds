ROOT_DIR=../..
SINGLE_LINKED_LIST_DIR=../sll

include $(ROOT_DIR)/Makefile.variable

LIB_NAME = stack_ll

ODIR_STACK_LINKED_LIST=$(LIB_NAME)
ODIR:=$(ODIR)/$(ODIR_STACK_LINKED_LIST)


_DEPS_STACK_LINKED_LIST = stack_ll.h
DEPS_STACK_LINKED_LIST = $(patsubst %,$(IDIR)/%,$(_DEPS_STACK_LINKED_LIST))

# Stack_Array objects recipes
_OBJ_STACK_LINKED_LIST = push_pop.o misc.o
OBJ_STACK_LINKED_LIST = $(patsubst %,$(ODIR)/%,$(_OBJ_STACK_LINKED_LIST))

_OBJ_MAIN_STACK_LINKED_LIST = main.o
OBJ_MAIN_STACK_LINKED_LIST = $(patsubst %,$(ODIR)/%,$(_OBJ_MAIN_STACK_LINKED_LIST))

_LIB_NAME = lib$(LIB_NAME).a
GEN_LIB_STACK_LINKED_LIST = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))


$(ODIR)/%.o: %.c $(DEPS_STACK_LINKED_LIST)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(LIB_DIR)/%.a: $(OBJ_STACK_LINKED_LIST)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^

CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) 

