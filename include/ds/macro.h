#define COMP(type, op) \
    type* value1 = (type*) node1->buffer; \
    type* value2 = (type*) node2->buffer; \
    \
    return *value1 op *value2;


#define COPY_TO_NODE(type) \
    type* temp = (type*) node->buffer; \
    *temp = *(type*) value;


#define COPY_TO_BUFFER(type) \
    type* temp = (type*) buffer; \
    *temp = *(type*) node->buffer;


#define PRINT_NODE(format, type) \
    return printf(#format, *(type*) node->buffer);


#define SETUP_BUFFER_LENGTH(format, type) \
    char buffer[MAX_CHARS_BUFFER]; \
    node->buffer_length = sprintf(buffer, #format, *(type*) value);