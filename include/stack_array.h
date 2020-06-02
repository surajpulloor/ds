#ifndef _STACK_ARRAY_H
#define _STACK_ARRAY_H

#define MAX_BUFFER 5
#define MAX_CHARS 1000

typedef struct {
    char buffer[MAX_BUFFER][MAX_CHARS];
    int top;
    int largestString;
} Stack;


Stack* init_stack();
void push(Stack*, char*);
char* pop(Stack*, char*);
void print_stack(Stack*, int);
void free_stack(Stack**);

#endif