CC=gcc
CFLAGS=-I$(IDIR)

IDIR =../include
SRC=sll
ODIR=obj

_DEPS = single_linked_list.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = push.o pop.o misc.o get_set.o ll.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SRC)/%.c $(DEPS)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

ll: $(OBJ)
		$(CC) -g -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -rf $(ODIR) *~ core $(INCDIR)/*~ ll