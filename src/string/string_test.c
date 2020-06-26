#include "ds/buffered_string.h"

int main()
{
    printf("Init...\n");
    String* str = init_str();
    String* str2 = init_str();


    printf("Copy...\n");
    copy_char_str(str, "Hello, World");
    
    copy_str(str2, str);

    char buffer[MAX_CHARS_BUFFER];

    copy_to_buffer(buffer, MAX_CHARS_BUFFER, str);

    printf("str buffer: %s\n", str->buffer);
    printf("str2 buffer: %s\n", str2->buffer);
    printf("char buffer: %s\n", buffer);

    printf("\nEquals & Not Equals...\n");
    
    if (not_equals_char_str(str, "Hello, World"))
        printf("str != c_str\n");

    copy_char_str(str2, "Hello, W");

    if (not_equals_str(str, str2))
        printf("str1 != str2\n");

    printf("\nLess & Less Than\n");

    String* str3 = init_str();

    copy_char_str(str3, "Alabama");

    if (less_than_char_str(str3, "Peter Dickney"))
        printf("str < c_str\n");

    if (less_than_equal_char_str(str3, "Alabama"))
        printf("str <= c_str\n");

    printf("\nGreater & Greater Than\n");

    String* str4 = init_str();

    copy_char_str(str4, "Peter Dickney");

    if (greater_than_char_str(str4, "Zootic Animal"))
        printf("str > c_str\n");

    if (greater_than_equal_char_str(str4, "Peter Dickney"))
        printf("str >= c_str\n");

    printf("\nSubstring ops\n");

    String* str5 = substring(str4, 3, 100);

    if (str5) {
        printf("%s\n", str5->buffer);
        free_string(str5);
    }

    char buffer2[5];

    substring_to_buffer(buffer2, 5, str4, 3, 9);

    printf("%s\n", buffer2);


    free_string(str);
    free_string(str2);
    free_string(str3);
    free_string(str4);
    

    
    return 0;
}