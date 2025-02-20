#ifndef _BUFFERED_STRING_H
#define _BUFFERED_STRING_H

#define MAX_CHARS_BUFFER 1000

#include <stdio.h>
#include <stdbool.h>

typedef struct {
    char* buffer;
    unsigned int length;
    unsigned int capacity;
} String;

String* init_str();
String* init_string(size_t);

String* copy_char_str(String*, char*);
String* copy_str(String*, String*);

char* copy_to_buffer(char*, unsigned int, String*);

bool equals_char_str(String*, char*);
bool equals_str(String*, String*);

bool not_equals_char_str(String*, char*);
bool not_equals_str(String*, String*);

bool greater_than_char_str(String*, char*);
bool greater_than_str(String*, String*);

bool greater_than_equal_char_str(String*, char*);
bool greater_than_equal_str(String*, String*);

bool less_than_char_str(String*, char*);
bool less_than_str(String*, String*);

bool less_than_equal_char_str(String*, char*);
bool less_than_equal_str(String*, String*);

String* substring(String*, int, int);
char* substring_to_buffer(char*, unsigned int, String*, int, int);
char* copy_substring(char*, char*, int, int);
char* copy_reverse_substring(char*, char*, int, int);

String* strcat_str(String*, String*);
String* strcat_append_char_str(String*, char*);
char* strcat_prepend_char_str(char*, unsigned int, String*);

String* mul_str(String*, unsigned int);
char* mul_str_to_buffer(char*, unsigned int, String*, unsigned int);

char get_c(String*, int);
void set_c(String*, int, char);

void free_string(String*);

#endif
