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

bool greater_than_equal_str(String*, String*);
bool greater_than_equal_str(String*, String*);

bool less_than_char_str(String*, char*);
bool less_than_str(String*, String*);

bool less_than_equal_char_str(String*, char*);
bool less_than_equal_str(String*, String*);

char* substring(String*, int, int);
char* substring_to_buffer(char*, unsigned int, String*, int, int);
char* copy_substring(char*, char*, unsigned int, unsigned int);

String* strcat_str(String*, String*);
String* strcat_append_char_str(String*, char*);
String* strcat_prepend_char_str(char*, String*);

String* mul_str(String*, unsigned int);
String* mul_str_to_buffer(char*, unsigned int, String*, unsigned int);

void free_string(String*);

#endif
