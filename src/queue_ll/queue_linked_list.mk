ROOT_DIR=../..
SINGLE_LINKED_LIST_DIR=../sll

include $(ROOT_DIR)/Makefile.variable

LIB_NAME = queue_ll

ODIR_QUEUE_LINKED_LIST=$(LIB_NAME)
ODIR:=$(ODIR)/$(ODIR_QUEUE_LINKED_LIST)


_DEPS_QUEUE_LINKED_LIST = queue_ll.h
DEPS_QUEUE_LINKED_LIST = $(patsubst %,$(IDIR)/%,$(_DEPS_QUEUE_LINKED_LIST))

# Stack_Array objects recipes
_OBJ_QUEUE_LINKED_LIST = queue_ll.o
OBJ_QUEUE_LINKED_LIST = $(patsubst %,$(ODIR)/%,$(_OBJ_QUEUE_LINKED_LIST))

_OBJ_MAIN_QUEUE_LINKED_LIST = queue_ll_test.o
OBJ_MAIN_QUEUE_LINKED_LIST = $(patsubst %,$(ODIR)/%,$(_OBJ_MAIN_QUEUE_LINKED_LIST))

_LIB_NAME = lib$(LIB_NAME).a
GEN_LIB_QUEUE_LINKED_LIST = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))


$(ODIR)/%.o: %.c $(DEPS_QUEUE_LINKED_LIST)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(LIB_DIR)/%.a: $(OBJ_QUEUE_LINKED_LIST)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^

CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) 

