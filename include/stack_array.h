#ifndef _STACK_ARRAY_H
#define _STACK_ARRAY_H

#define MAX_BUFFER 1000
#define MAX_CHARS 1000

typedef struct {
    char buffer[MAX_BUFFER][MAX_CHARS];
    int top;
    int largestString;
} Stack_Array;


Stack_Array* init_stack();
void push(Stack_Array*, char*);
char* pop(Stack_Array*, char*);
void print_stack(Stack_Array*, int);
void free_stack(Stack_Array**);

#endif