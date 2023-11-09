#ifndef QUEUE_LL_H
#define QUEUE_LL_H
struct queue_Node {
    int key;
    struct queue_Node* next;
};
struct Queue {
    struct queue_Node *front, *rear;
};
static struct queue_Node* newNode(int k);
static struct Queue* createQueue();
static void enQueue(struct Queue* q, int k);
static void deQueue(struct Queue* q);
#endif