ROOT_DIR=../..

include $(ROOT_DIR)/Makefile.variable


LIB_NAME=queue_array

ODIR_QUEUE_ARRAY=$(LIB_NAME)

_DEPS_QUEUE_ARRAY = queue_array.h
DEPS_QUEUE_ARRAY = $(patsubst %,$(IDIR)/%,$(_DEPS_QUEUE_ARRAY))

# Stack_Array objects recipes
_OBJ_QUEUE_ARRAY = queue_array.o
OBJ_QUEUE_ARRAY = $(patsubst %,$(ODIR)/$(ODIR_QUEUE_ARRAY)/%,$(_OBJ_QUEUE_ARRAY))

_OBJ_MAIN_QUEUE_ARRAY = queue_array_test.o
OBJ_MAIN_QUEUE_ARRAY = $(patsubst %,$(ODIR)/$(ODIR_QUEUE_ARRAY)/%,$(_OBJ_MAIN_QUEUE_ARRAY))

_LIB_NAME = lib$(LIB_NAME).a
GEN_LIB_QUEUE_ARRAY = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))


$(ODIR)/$(ODIR_QUEUE_ARRAY)/%.o: %.c $(DEPS_QUEUE_ARRAY)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(LIB_DIR)/%.a: $(OBJ_QUEUE_ARRAY)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^

CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) 
