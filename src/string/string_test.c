#include "ds/buffered_string.h"

int main()
{
    String* str = init_str();
    String* str2 = init_str();

    copy_char_str(str, "Hello, World is great");
    
    copy_str(str2, str);

    char buffer[MAX_CHARS_BUFFER];

    copy_to_buffer(buffer, MAX_CHARS_BUFFER, str);

    printf("str buffer: %s\n", str->buffer);
    printf("str2 buffer: %s\n", str2->buffer);
    printf("char buffer: %s\n", buffer);

    
    return 0;
}