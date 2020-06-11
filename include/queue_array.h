#ifndef _QUEUE_ARRAY_H
#define _QUEUE_ARRAY_H

#define MAX_BUFFER 1000
#define MAX_CHARS_BUFFER 500

typedef struct {
    char buffer[MAX_BUFFER][MAX_CHARS_BUFFER];
    int front;
    int rear;
} Queue_Array;

Queue_Array* init_queue();
void enqueue(Queue_Array*, char*);
char* dequeue(Queue_Array*, char*);
void print_queue(Queue_Array*);
void free_queue(Queue_Array**);

#endif