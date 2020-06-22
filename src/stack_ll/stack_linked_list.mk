ROOT_DIR=../..
SINGLE_LINKED_LIST_DIR=../sll

include $(ROOT_DIR)/Makefile.variable

LIB_NAME = stack_ll

ODIR_STACK_LINKED_LIST=$(LIB_NAME)
ODIR:=$(ODIR)/$(ODIR_STACK_LINKED_LIST)

ODIR_INIT=$(ODIR)/$(SRC_INIT)


_DEPS_STACK_LINKED_LIST = stack_ll.h
DEPS_STACK_LINKED_LIST = $(patsubst %,$(DS_HEADER_PATH)/%,$(_DEPS_STACK_LINKED_LIST))

# Stack_Array objects recipes
_OBJ_STACK_LINKED_LIST = push_pop.o misc.o
OBJ_STACK_LINKED_LIST = $(patsubst %,$(ODIR)/%,$(_OBJ_STACK_LINKED_LIST))

_OBJ_STACK_LINKED_LIST_TYPE_FUNCTIONS = int.o float.o char.o pointer.o
_OBJ_STACK_LINKED_LIST_INIT_MAIN = init.o
_OBJ_STACK_LINKED_LIST_INIT_MAIN := $(_OBJ_STACK_LINKED_LIST_TYPE_FUNCTIONS) $(_OBJ_STACK_LINKED_LIST_INIT_MAIN)
OBJ_STACK_LINKED_LIST_INIT = $(patsubst %,$(ODIR_INIT)/%,$(_OBJ_STACK_LINKED_LIST_INIT_MAIN))


_OBJ_MAIN_STACK_LINKED_LIST = main.o
OBJ_MAIN_STACK_LINKED_LIST = $(patsubst %,$(ODIR)/%,$(_OBJ_MAIN_STACK_LINKED_LIST))

_LIB_NAME = lib$(LIB_NAME).a
GEN_LIB_STACK_LINKED_LIST = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))


$(ODIR)/%.o: %.c $(DEPS_STACK_LINKED_LIST)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_INIT)/%.o: $(SRC_INIT)/%.c $(DEPS_STACK_LINKED_LIST)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(LIB_DIR)/%.a: $(OBJ_STACK_LINKED_LIST) $(OBJ_STACK_LINKED_LIST_INIT)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^

CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) 

