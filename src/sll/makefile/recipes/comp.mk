$(ODIR_COMP_EQUAL)/%.o: $(SRC_COMP_EQUAL)/%.c $(INCLUDE_PREREQUISITE)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_COMP_LESS)/%.o: $(SRC_COMP_LESS)/%.c $(INCLUDE_PREREQUISITE)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_COMP_LESS_EQUAL)/%.o: $(SRC_COMP_LESS_EQUAL)/%.c $(INCLUDE_PREREQUISITE)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_COMP_GREATER)/%.o: $(SRC_COMP_GREATER)/%.c $(INCLUDE_PREREQUISITE)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_COMP_GREATER_EQUAL)/%.o: $(SRC_COMP_GREATER_EQUAL)/%.c $(INCLUDE_PREREQUISITE)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)