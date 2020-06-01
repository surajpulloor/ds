CC=gcc
CFLAGS=-I$(IDIR)

IDIR=include
SRC=src
SRC_SLL=sll
SRC_DLL=dll
SRC_CLL=cll

ODIR=obj
ODIR_SLL=sll
ODIR_DLL=dll
ODIR_CLL=cll

# Include files recipe
_DEPS_SLL = single_linked_list.h
DEPS_SLL = $(patsubst %,$(IDIR)/%,$(_DEPS_SLL))

# Single Linked List objects recipes
_OBJ_SLL = push.o pop.o misc.o get_set.o ll.o
OBJ_SLL = $(patsubst %,$(ODIR)/$(ODIR_SLL)/%,$(_OBJ_SLL))

$(ODIR)/$(ODIR_SLL)/%.o: $(SRC)/$(SRC_SLL)/%.c $(DEPS_SLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

# build recipe for Single Linked List
ll: $(OBJ_SLL)
		$(CC) -g -o $@ $^ $(CFLAGS)

_DEPS_DLL = double_linked_list.h
DEPS_DLL = $(patsubst %,$(IDIR)/%,$(_DEPS_DLL))

# Double Linked List objects recipes
_OBJ_DLL = push.o pop.o misc.o get_set.o dll.o
OBJ_DLL = $(patsubst %,$(ODIR)/$(ODIR_DLL)/%,$(_OBJ_DLL))

$(ODIR)/$(ODIR_DLL)/%.o: $(SRC)/$(SRC_DLL)/%.c $(DEPS_DLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

# build recipe for Single Linked List
double_ll: $(OBJ_DLL)
		$(CC) -g -o $@ $^ $(CFLAGS)



# Circular Double Linked List objects recipes

_DEPS_CDLL = circular_double_linked_list.h
DEPS_CDLL = $(patsubst %,$(IDIR)/%,$(_DEPS_CDLL))


_OBJ_CDLL = push.o pop.o misc.o get_set.o dll.o
OBJ_CDLL = $(patsubst %,$(ODIR)/$(ODIR_DLL)/$(ODIR_CLL)/%,$(_OBJ_CDLL))

$(ODIR)/$(ODIR_DLL)/$(ODIR_CLL)/%.o: $(SRC)/$(SRC_DLL)/$(SRC_CLL)/%.c $(DEPS_CDLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

# build recipe for Single Linked List
double_cll: $(OBJ_CDLL)
		$(CC) -g -o $@ $^ $(CFLAGS)


# Circular Single Linked List objects recipes

_DEPS_CSLL = circular_single_linked_list.h
DEPS_CSLL = $(patsubst %,$(IDIR)/%,$(_DEPS_CSLL))

_OBJ_CSLL = push.o pop.o misc.o get_set.o ll.o
OBJ_CSLL = $(patsubst %,$(ODIR)/$(ODIR_SLL)/$(ODIR_CLL)/%,$(_OBJ_CSLL))

$(ODIR)/$(ODIR_SLL)/$(ODIR_CLL)/%.o: $(SRC)/$(SRC_SLL)/$(SRC_CLL)/%.c $(DEPS_CSLL)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

# build recipe for Single Linked List
cll: $(OBJ_CSLL)
		$(CC) -g -o $@ $^ $(CFLAGS)


.PHONY: clean

clean:
	rm -rf $(ODIR) *~ core $(INCDIR)/*~ ll cll double_ll double_cll