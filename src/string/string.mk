ROOT_DIR=../..

include $(ROOT_DIR)/Makefile.variable


LIB_NAME=string

SRC_COMP=comp

ODIR_STRING=$(LIB_NAME)
ODIR:=$(ODIR)/$(ODIR_STRING)


ODIR_COMP=$(ODIR)/$(SRC_COMP)


_DEPS_STRING = buffered_string.h
DEPS_STRING = $(patsubst %,$(DS_HEADER_PATH)/%,$(_DEPS_STRING))

# String objects recipes
_OBJ_STRING = init.o copy.o mul_str.o strcat.o substr.o

_OBJ_COMP = equals.o greater.o less.o

_OBJ_MAIN_STRING = string_test.o

_LIB_NAME = lib$(LIB_NAME).a


OBJ_STRING = $(patsubst %,$(ODIR)/%,$(_OBJ_STRING))

OBJ_STRING_COMP = $(patsubst %,$(ODIR_COMP)/%,$(_OBJ_COMP))


OBJ_MAIN_STRING = $(patsubst %,$(ODIR)/%,$(_OBJ_MAIN_STRING))

GEN_LIB_STRING = $(patsubst %,$(LIB_DIR)/%,$(_LIB_NAME))


$(ODIR)/%.o: %.c $(DEPS_STRING)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(ODIR_COMP)/%.o: $(SRC_COMP)/%.c $(DEPS_STRING)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(LIB_DIR)/$(_LIB_NAME): $(OBJ_STRING) $(OBJ_STRING_COMP)
		@mkdir -p $(LIB_DIR)
		ar -rc $@ $^

CFLAGS := $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) 
