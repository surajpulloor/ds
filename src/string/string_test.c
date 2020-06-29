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

    printf("Indexs for str4: \n");
    for (int i = 0; i < str4->length; i++)
        printf("%4d", i);
    
    printf("\n");

    for (int i = 0; i < str4->length; i++)
        printf("%4c", str4->buffer[i]);

    printf("\n");

    for (int i = str4->length * -1; i < 0; i++)
        printf("%4d", i);

    printf("\n");

    int subscripts[] = {
        44, 5,
        -4, -4,
        -6, 7,
        -1, -13
    };

    String* str5 = substring(str4, subscripts[0], subscripts[1]);
    String* str6 = substring(str4, subscripts[2], subscripts[3]);
    String* str7 = substring(str4,subscripts[4], subscripts[5]);
    String* str8 = substring(str4, subscripts[6], subscripts[7]);

    if (str5) {
        printf("substring(%d, %d) = %s\n", subscripts[0], subscripts[1], str5->buffer);
        free_string(str5);
    }

    if (str6) {
        printf("substring(%d, %d) = %s\n", subscripts[2], subscripts[3], str6->buffer);
        free_string(str6);
    }

    if (str7) {
        printf("substring(%d, %d) = %s\n", subscripts[4], subscripts[5], str7->buffer);
        free_string(str7);
    }

    if (str8) {
        printf("substring(%d, %d) = %s\n", subscripts[6], subscripts[7], str8->buffer);
        free_string(str8);
    }

    char buffer2[8];

    substring_to_buffer(buffer2, 8, str4, 3, -3);

    printf("%s\n", buffer2);


    free_string(str);
    free_string(str2);
    free_string(str3);
    free_string(str4);
    

    
    return 0;
}