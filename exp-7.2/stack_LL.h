#ifndef STACK_LL
#define STACK_LL
struct Node
{
    int data;
    struct Node *next;
};
static struct Node* newNode(int data);
static int isEmpty(struct Node* root);
static void push(struct Node** root, int data);
static int pop(struct Node** root);
static int peek(struct Node* root);
#endif
