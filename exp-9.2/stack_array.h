#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H
#define INT_MIN 100
struct Stack {
    int top;
    unsigned capacity;
    int item[INT_MIN];
    int* array;
};
static struct Stack* createStack(unsigned capacity);
static int isFull(struct Stack* stack);
static int isEmpty(struct Stack* stack);
static void push(struct Stack* stack, int item);
static int pop(struct Stack* stack);
static int peek(struct Stack* stack);
#endif