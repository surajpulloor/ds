$(ODIR_COPY_TO_NODE)/%.o: $(SRC_COPY_TO_NODE)/%.c $(INCLUDE_PREREQUISITE)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)

$(ODIR_COPY_TO_BUFFER)/%.o: $(SRC_COPY_TO_BUFFER)/%.c $(INCLUDE_PREREQUISITE)
		@mkdir -p $(@D)
		$(CC) -g -c -o $@ $< $(CFLAGS)
