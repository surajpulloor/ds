$(ODIR)/%.o: %.c $(INCLUDE_PREREQUISITE)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)
		

$(ODIR_INIT)/%.o: $(SRC_INIT)/%.c $(INCLUDE_PREREQUISITE)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(ODIR_PRINT_NODE_VALUE)/%.o: $(SRC_PRINT_NODE_VALUE)/%.c $(INCLUDE_PREREQUISITE)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)


$(ODIR_SETUP_BUFFER_LENGTH)/%.o: $(SRC_SETUP_BUFFER_LENGTH)/%.c $(INCLUDE_PREREQUISITE)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)