#include "ds/buffered_string.h"

void print_str_with_indexes(String* str)
{
    printf("Indexs for str4: \n");
    for (int i = 0; i < str->length; i++)
        printf("%4d", i);
    
    printf("\n");

    for (int i = 0; i < str->length; i++)
        printf("%4c", str->buffer[i]);

    printf("\n");

    for (int i = str->length * -1; i < 0; i++)
        printf("%4d", i);

    printf("\n");
}

int main()
{
    printf("Init...\n");
    String* str = init_string(6);
    String* str2 = init_string(6);


    printf("Copy...\n");
    copy_char_str(str, "Hello, World luke");
    
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

    print_str_with_indexes(str4);

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

    printf("substring_to_buffer()\n");

    char buffer2[8];

    substring_to_buffer(buffer2, 8, str4, 3, -3);

    printf("%s\n", buffer2);


    printf("get_c() and set_c()\n");

    int indexs[] = {
        0,
        3,
        5,
        -6,
        -8,
        -1
    };

    printf("\nget_c()\n");

    printf("get_c(%d) = %c\n", indexs[0], get_c(str4, indexs[0]));
    printf("get_c(%d) = %c\n", indexs[1], get_c(str4, indexs[1]));
    printf("get_c(%d) = %c\n", indexs[2], get_c(str4, indexs[2]));
    printf("get_c(%d) = %c\n", indexs[3], get_c(str4, indexs[3]));
    printf("get_c(%d) = %c\n", indexs[4], get_c(str4, indexs[4]));

    printf("\nset_c()\n");
    set_c(str4, indexs[0], 'd');
    set_c(str4, indexs[1], 'h');
    set_c(str4, indexs[2], 'y');
    set_c(str4, indexs[3], 'l');
    set_c(str4, indexs[4], 'f');

    printf("\nget_c() after set_c()\n");

    printf("get_c(%d) = %c\n", indexs[0], get_c(str4, indexs[0]));
    printf("get_c(%d) = %c\n", indexs[1], get_c(str4, indexs[1]));
    printf("get_c(%d) = %c\n", indexs[2], get_c(str4, indexs[2]));
    printf("get_c(%d) = %c\n", indexs[3], get_c(str4, indexs[3]));
    printf("get_c(%d) = %c\n\n", indexs[4], get_c(str4, indexs[4]));

    print_str_with_indexes(str4);


    printf("\nstrcat()\n");

    String* str10 = init_string(14);
    copy_str(str10, str4);

    printf("strcat(%s, ", str4->buffer);

    strcat_append_char_str(str4, "Hello World");

    printf("%s) = %s\n", str3->buffer, str4->buffer);

    char buffer3[30] = "Hello";

    strcat_prepend_char_str(buffer3, 30, str4);

    printf("strcat_prepend() = %s\n", buffer3);

    printf("mul_str()\n");

    String* mul = mul_str(str3, 3);

    printf("mul_str() = %s\n", mul->buffer);

    char buffer4[7];

    mul_str_to_buffer(buffer4, 7, str3, 3);

    printf("mul_str_to_buffer() = %s\n", buffer4);

    free_string(str);
    free_string(str2);
    free_string(str3);
    free_string(str4);
    free_string(str10);
    free_string(mul);
    

    
    return 0;
}