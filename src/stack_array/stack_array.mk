ROOT_DIR=../..

include $(ROOT_DIR)/Makefile.variable


LIB_NAME=stack_array

ODIR_STACK_ARRAY=stack_array

_DEPS_STACK_ARRAY = stack_array.h
DEPS_STACK_ARRAY = $(patsubst %,$(IDIR)/%,$(_DEPS_STACK_ARRAY))

# Stack_Array objects recipes
_OBJ_STACK_ARRAY = push_pop.o misc.o
OBJ_STACK_ARRAY = $(patsubst %,$(ODIR)/$(ODIR_STACK_ARRAY)/%,$(_OBJ_STACK_ARRAY))

_OBJ_MAIN_STACK_ARRAY = main.o
OBJ_MAIN_STACK_ARRAY = $(patsubst %,$(ODIR)/$(ODIR_STACK_ARRAY)/%,$(_OBJ_MAIN_STACK_ARRAY))

_LIB_NAME = lib$(LIB_NAME).a
GEN_LIB_STACK_ARRAY = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))


$(ODIR)/$(ODIR_STACK_ARRAY)/%.o: %.c $(DEPS_STACK_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(LIB_DIR)/%.a: $(OBJ_STACK_ARRAY)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^

CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) 
