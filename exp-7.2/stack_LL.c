#include<stdio.h>
#include<stdlib.h>
#include "stack_LL.h"
struct Node* newNode(int data) {
    struct Node* stackNode = (struct Node*) malloc(sizeof(struct Node));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}
int isEmpty(struct Node* root) {
    return !root;
}
void push(struct Node** root, int data) {
    struct Node* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    printf("%d pushed to stack\n", data);
}
int pop(struct Node** root) {
    if (isEmpty(*root))
        return -1;
    struct Node* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    
    return popped;
}
int peek(struct Node* root) {
    if (isEmpty(root))
        return -1;
    return root->data;
}