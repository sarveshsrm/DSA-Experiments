#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H
#define INT_MIN 100
struct Queue {
    int front, rear, size;
    unsigned capacity;
    int* array;
    int items[INT_MIN];
};
static struct Queue* createQueue(unsigned capacity);
static int isFull(struct Queue* queue);
static int isEmpty(struct Queue* queue);
static void enqueue(struct Queue* queue, int item);
static int dequeue(struct Queue* queue);
static int front(struct Queue* queue);
static int rear(struct Queue* queue);
#endif