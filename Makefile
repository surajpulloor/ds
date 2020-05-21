CC=gcc
CFLAGS=-I$(IDIR)

IDIR=include
SRC=src
SRC_SLL=sll
SRC_DLL=dll

ODIR=obj
ODIR_SLL=sll
ODIR_DLL=dll

# Include files recipe
_DEPS = single_linked_list.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# Single Linked List objects recipes
_OBJ_SLL = push.o pop.o misc.o get_set.o ll.o
OBJ_SLL = $(patsubst %,$(ODIR)/$(ODIR_SLL)/%,$(_OBJ_SLL))

$(ODIR)/$(ODIR_SLL)/%.o: $(SRC)/$(SRC_SLL)/%.c $(DEPS)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

# Double Linked List objects recipes
_OBJ_DLL = push.o pop.o misc.o get_set.o dll.o
OBJ_DLL = $(patsubst %,$(ODIR)/$(ODIR_DLL)/%,$(_OBJ_DLL))

$(ODIR)/$(ODIR_DLL)/%.o: $(SRC)/$(SRC_DLL)/%.c $(DEPS)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

# build recipe for Single Linked List
ll: $(OBJ_SLL)
		$(CC) -g -o $@ $^ $(CFLAGS)

# build recipe for Single Linked List
double_ll: $(OBJ_DLL)
		$(CC) -g -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -rf $(ODIR) *~ core $(INCDIR)/*~ ll double_ll