CC=gcc
CFLAGS=-I$(IDIR)

IDIR=include
SRC=src
SRC_SLL=sll

ODIR=obj
ODIR_SLL=sll

# Include files recipe
_DEPS = single_linked_list.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# Single Linked List objects recipes
_OBJ_SLL = push.o pop.o misc.o get_set.o ll.o
OBJ_SLL = $(patsubst %,$(ODIR)/$(ODIR_SLL)/%,$(_OBJ_SLL))

$(ODIR)/$(ODIR_SLL)/%.o: $(SRC)/$(SRC_SLL)/%.c $(DEPS)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

# build recipe for Single Linked List
ll: $(OBJ_SLL)
		$(CC) -g -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -rf $(ODIR) *~ core $(INCDIR)/*~ ll