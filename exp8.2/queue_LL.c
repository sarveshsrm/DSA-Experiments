#include <stdio.h>
#include <stdlib.h>
#include "queue_LL.h"
struct queue_Node* newNode(int k)
{
    struct queue_Node* temp
        = (struct queue_Node*)malloc(sizeof(struct queue_Node));
    temp->key = k;
    temp->next = NULL;
    return temp;
}
struct Queue* createQueue()
{
    struct Queue* q
        = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}
void enQueue(struct Queue* q, int k)
{
    struct queue_Node* temp = newNode(k);
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}
void deQueue(struct Queue* q){
    if (q->front == NULL)
        return;
    struct queue_Node* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
}